#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/FlushType__Enum.h>
#include <Modloader/app/structs/ZlibCodec.h>

namespace app::classes::Ionic::Zlib::ZlibCodec {
    IL2CPP_REGISTER_METHOD(0x030791D0, void, ctor, app::ZlibCodec* this_ptr)
    IL2CPP_REGISTER_METHOD(0x030791E0, int32_t, InitializeInflate_1, app::ZlibCodec* this_ptr, bool expect_rfc1950_header)
    IL2CPP_REGISTER_METHOD(0x030791F0, int32_t, InitializeInflate_2, app::ZlibCodec* this_ptr, int32_t window_bits, bool expect_rfc1950_header)
    IL2CPP_REGISTER_METHOD(0x030793A0, int32_t, Inflate, app::ZlibCodec* this_ptr, app::FlushType__Enum flush)
    IL2CPP_REGISTER_METHOD(0x03079470, int32_t, EndInflate, app::ZlibCodec* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03079560, int32_t, InitializeDeflate, app::ZlibCodec* this_ptr, app::CompressionLevel__Enum level, bool want_rfc1950_header)
    IL2CPP_REGISTER_METHOD(0x03079580, int32_t, _InternalInitializeDeflate, app::ZlibCodec* this_ptr, bool want_rfc1950_header)
    IL2CPP_REGISTER_METHOD(0x030797F0, int32_t, Deflate, app::ZlibCodec* this_ptr, app::FlushType__Enum flush)
    IL2CPP_REGISTER_METHOD(0x030798C0, int32_t, EndDeflate, app::ZlibCodec* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03079980, void, flush_pending, app::ZlibCodec* this_ptr)
    IL2CPP_REGISTER_METHOD(0x03079C00, int32_t, read_buf, app::ZlibCodec* this_ptr, app::Byte__Array* buf, int32_t start, int32_t size)
} // namespace app::classes::Ionic::Zlib::ZlibCodec
