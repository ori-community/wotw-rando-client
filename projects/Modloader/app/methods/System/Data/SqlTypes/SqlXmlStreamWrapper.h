#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SqlXmlStreamWrapper.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::SqlTypes::SqlXmlStreamWrapper {
    IL2CPP_REGISTER_METHOD(0x022BD630, void, ctor, (app::SqlXmlStreamWrapper * this_ptr, app::Stream* stream))
    IL2CPP_REGISTER_METHOD(0x022BD6E0, bool, get_CanRead, (app::SqlXmlStreamWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BD730, bool, get_CanSeek, (app::SqlXmlStreamWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BD780, bool, get_CanWrite, (app::SqlXmlStreamWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BD7D0, int64_t, get_Length, (app::SqlXmlStreamWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BD890, int64_t, get_Position, (app::SqlXmlStreamWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BD930, void, set_Position, (app::SqlXmlStreamWrapper * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x047633F8, SqlXmlStreamWrapper_set_Position__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BDA40, int64_t, Seek, (app::SqlXmlStreamWrapper * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHODINFO(0x04751E40, SqlXmlStreamWrapper_Seek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BDCD0, int32_t, Read, (app::SqlXmlStreamWrapper * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04785A80, SqlXmlStreamWrapper_Read__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BDEF0, void, Write, (app::SqlXmlStreamWrapper * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0471C948, SqlXmlStreamWrapper_Write__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BE110, int32_t, ReadByte, (app::SqlXmlStreamWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BE2B0, void, WriteByte, (app::SqlXmlStreamWrapper * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x022BE3F0, void, SetLength, (app::SqlXmlStreamWrapper * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x022BE4C0, void, Flush, (app::SqlXmlStreamWrapper * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022BE4E0, void, Dispose, (app::SqlXmlStreamWrapper * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x022BE500, void, ThrowIfStreamCannotSeek, (app::SqlXmlStreamWrapper * this_ptr, app::String* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04798DF8, SqlXmlStreamWrapper_ThrowIfStreamCannotSeek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BE5E0, void, ThrowIfStreamCannotRead, (app::SqlXmlStreamWrapper * this_ptr, app::String* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04786F10, SqlXmlStreamWrapper_ThrowIfStreamCannotRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BE6C0, void, ThrowIfStreamCannotWrite, (app::SqlXmlStreamWrapper * this_ptr, app::String* method_1))
    IL2CPP_REGISTER_METHODINFO(0x0475DC48, SqlXmlStreamWrapper_ThrowIfStreamCannotWrite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BE7A0, void, ThrowIfStreamClosed, (app::SqlXmlStreamWrapper * this_ptr, app::String* method_1))
    IL2CPP_REGISTER_METHODINFO(0x04713440, SqlXmlStreamWrapper_ThrowIfStreamClosed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022BE870, bool, IsStreamClosed, (app::SqlXmlStreamWrapper * this_ptr))
} // namespace app::classes::System::Data::SqlTypes::SqlXmlStreamWrapper
