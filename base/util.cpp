//
// PROJECT:         Aspia Remote Desktop
// FILE:            base/util.cpp
// LICENSE:         See top-level directory
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#include "base/util.h"
#include "base/logging.h"

#include <strsafe.h>

namespace aspia {

std::string ReplaceLfByCrLf(const std::string& in)
{
    std::string out;

    out.resize(2 * in.size());

    char* out_p_begin = &out[0];
    char* out_p = out_p_begin;
    const char* in_p_begin = &in[0];
    const char* in_p_end = &in[in.size()];

    for (const char* in_p = in_p_begin; in_p < in_p_end; ++in_p)
    {
        char c = *in_p;

        if (c == '\n')
        {
            *out_p++ = '\r';
        }

        *out_p++ = c;
    }

    out.resize(out_p - out_p_begin);

    return out;
}

std::string ReplaceCrLfByLf(const std::string& in)
{
    std::string out;

    out.resize(in.size());

    char* out_p_begin = &out[0];
    char* out_p = out_p_begin;
    const char* in_p_begin = &in[0];
    const char* in_p_end = &in[in.size()];

    for (const char* in_p = in_p_begin; in_p < in_p_end; ++in_p)
    {
        char c = *in_p;

        if ((c == '\r') && (in_p + 1 < in_p_end) && (*(in_p + 1) == '\n'))
        {
            *out_p++ = '\n';
            ++in_p;
        }
        else
        {
            *out_p++ = c;
        }
    }

    out.resize(out_p - out_p_begin);

    return out;
}

std::string StringPrintf(const char* format, ...)
{
    va_list args;

    va_start(args, format);

    size_t len = _vscprintf(format, args);

    std::string out;
    out.resize(len);

    CHECK(SUCCEEDED(StringCchVPrintfA(&out[0], len + 1, format, args)));

    va_end(args);

    return out;
}

std::wstring StringPrintfW(const WCHAR* format, ...)
{
    va_list args;

    va_start(args, format);

    size_t len = _vscwprintf(format, args);

    std::wstring out;
    out.resize(len);

    CHECK(SUCCEEDED(StringCchVPrintfW(&out[0], len + 1, format, args)));

    va_end(args);

    return out;
}

} // namespace aspia
