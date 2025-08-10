#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/TlsStream.h>

namespace app::classes::Mono::Security::Protocol::Tls::TlsStream {
    IL2CPP_REGISTER_METHOD(0x0291C7C0, bool, get_EOF, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F5DF30, bool, get_CanWrite, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_CanRead, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D612D0, bool, get_CanSeek, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D61450, int64_t, get_Position, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D61480, void, set_Position, app::TlsStream* this_ptr, int64_t value)
    IL2CPP_REGISTER_METHOD(0x01D61420, int64_t, get_Length, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291C810, void, ctor_1, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291C980, void, ctor_2, app::TlsStream* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x0291CBB0, app::Byte__Array*, ReadSmallValue, app::TlsStream* this_ptr, int32_t length)
    IL2CPP_REGISTER_METHOD(0x0291CD00, uint8_t, ReadByte, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291CD40, int16_t, ReadInt16, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291CDA0, int32_t, ReadInt24, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291CE20, int32_t, ReadInt32, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291CEC0, app::Byte__Array*, ReadBytes, app::TlsStream* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0291CFB0, void, Write_1, app::TlsStream* this_ptr, uint8_t value)
    IL2CPP_REGISTER_METHOD(0x0291D0A0, void, Write_2, app::TlsStream* this_ptr, int16_t value)
    IL2CPP_REGISTER_METHOD(0x0291D1C0, void, WriteInt24, app::TlsStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0291D310, void, Write_3, app::TlsStream* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x0291D4A0, void, Write_4, app::TlsStream* this_ptr, uint64_t value)
    IL2CPP_REGISTER_METHOD(0x01F87620, void, Write_5, app::TlsStream* this_ptr, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x01F87C90, void, Reset, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0291D4E0, app::Byte__Array*, ToArray, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D61660, void, Flush, app::TlsStream* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D616F0, void, SetLength, app::TlsStream* this_ptr, int64_t length)
    IL2CPP_REGISTER_METHOD(0x01D616C0, int64_t, Seek, app::TlsStream* this_ptr, int64_t offset, app::SeekOrigin__Enum loc)
    IL2CPP_REGISTER_METHOD(0x0291D510, int32_t, Read, app::TlsStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
    IL2CPP_REGISTER_METHOD(0x0291D610, void, Write_6, app::TlsStream* this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count)
} // namespace app::classes::Mono::Security::Protocol::Tls::TlsStream
