//
// PROJECT:         Aspia Remote Desktop
// FILE:            codec/decompressor_zlib.cpp
// LICENSE:         See top-level directory
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "codec/decompressor_zlib.h"

#include "base/logging.h"

namespace aspia {

DecompressorZLIB::DecompressorZLIB()
{
    memset(&stream_, 0, sizeof(stream_));

    int ret = inflateInit(&stream_);
    DCHECK_EQ(ret, Z_OK);
}

DecompressorZLIB::~DecompressorZLIB()
{
    int ret = inflateEnd(&stream_);
    DCHECK_EQ(ret, Z_OK);
}

void DecompressorZLIB::Reset()
{
    int ret = inflateReset(&stream_);
    DCHECK_EQ(ret, Z_OK);
}

bool DecompressorZLIB::Process(const uint8_t* input_data,
                               int input_size,
                               uint8_t* output_data,
                               int output_size,
                               int* consumed,
                               int* written)
{
    DCHECK_GT(output_size, 0);

    // Setup I/O parameters.
    stream_.avail_in  = input_size;
    stream_.next_in   = input_data;
    stream_.avail_out = output_size;
    stream_.next_out  = output_data;

    int ret = inflate(&stream_, Z_NO_FLUSH);
    if (ret == Z_STREAM_ERROR)
    {
        DLOG(ERROR) << "zlib decompression failed: " << ret;
    }

    *consumed = input_size - stream_.avail_in;
    *written = output_size - stream_.avail_out;

    //
    // Since we check that output is always greater than 0, the only
    // reason for us to get Z_BUF_ERROR is when zlib requires more input
    // data.
    //
    return (ret == Z_OK || ret == Z_BUF_ERROR);
}

} // namespace aspia
