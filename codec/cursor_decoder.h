//
// PROJECT:         Aspia Remote Desktop
// FILE:            codec/cursor_decoder.h
// LICENSE:         See top-level directory
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_CODEC__CURSOR_DECODER_H
#define _ASPIA_CODEC__CURSOR_DECODER_H

#include "aspia_config.h"

#include "base/macros.h"
#include "codec/decompressor_zlib.h"
#include "desktop_capture/mouse_cursor_cache.h"
#include "proto/proto.pb.h"

namespace aspia {

class CursorDecoder
{
public:
    CursorDecoder();
    ~CursorDecoder() = default;

    const MouseCursor* Decode(const proto::CursorShape& cursor_shape);

private:
    bool DecompressCursor(const proto::CursorShape& cursor_shape, uint8_t* image);

private:
    std::unique_ptr<MouseCursorCache> cache_;
    DecompressorZLIB decompressor_;

    DISALLOW_COPY_AND_ASSIGN(CursorDecoder);
};

} // namespace aspia

#endif // _ASPIA_CODEC__CURSOR_DECODER_H
