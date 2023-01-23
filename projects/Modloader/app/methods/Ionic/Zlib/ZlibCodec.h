#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ZlibCodec.h>
#include <Modloader/app/structs/FlushType__Enum.h>
#include <Modloader/app/structs/CompressionLevel__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::Ionic::Zlib::ZlibCodec {
    IL2CPP_REGISTER_METHOD(0x030791D0, void, ctor, (app::ZlibCodec * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030791E0, int32_t, InitializeInflate_1, (app::ZlibCodec * this_ptr, bool expect_rfc1950_header))
    IL2CPP_REGISTER_METHOD(0x030791F0, int32_t, InitializeInflate_2, (app::ZlibCodec * this_ptr, int32_t window_bits, bool expect_rfc1950_header))
    IL2CPP_REGISTER_METHODINFO(0x04711328, ZlibCodec_InitializeInflate_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030793A0, int32_t, Inflate, (app::ZlibCodec * this_ptr, app::FlushType__Enum flush))
    IL2CPP_REGISTER_METHODINFO(0x04718A18, ZlibCodec_Inflate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03079470, int32_t, EndInflate, (app::ZlibCodec * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778718, ZlibCodec_EndInflate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03079560, int32_t, InitializeDeflate, (app::ZlibCodec * this_ptr, app::CompressionLevel__Enum level, bool want_rfc1950_header))
    IL2CPP_REGISTER_METHOD(0x03079580, int32_t, _InternalInitializeDeflate, (app::ZlibCodec * this_ptr, bool want_rfc1950_header))
    IL2CPP_REGISTER_METHODINFO(0x0475D4B0, ZlibCodec__InternalInitializeDeflate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030797F0, int32_t, Deflate, (app::ZlibCodec * this_ptr, app::FlushType__Enum flush))
    IL2CPP_REGISTER_METHODINFO(0x04749C30, ZlibCodec_Deflate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x030798C0, int32_t, EndDeflate, (app::ZlibCodec * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0473D6B0, ZlibCodec_EndDeflate__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03079980, void, flush_pending, (app::ZlibCodec * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476FB38, ZlibCodec_flush_pending__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x03079C00, int32_t, read_buf, (app::ZlibCodec * this_ptr, app::Byte__Array* buf, int32_t start, int32_t size))
} // namespace app::classes::Ionic::Zlib::ZlibCodec
