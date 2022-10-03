#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Security::Cryptography::TailStream {
    IL2CPP_REGISTER_METHOD(0x01E112F0, void, ctor, (app::TailStream * this_ptr, int32_t buffer_size))
    IL2CPP_REGISTER_METHOD(0x01E113B0, void, Clear, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E113D0, void, Dispose, (app::TailStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01E11470, app::Byte__Array*, get_Buffer, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanRead, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSeek, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01D60150, bool, get_CanWrite, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E115B0, int64_t, get_Length, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047859F0, TailStream_get_Length__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E11620, int64_t, get_Position, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712168, TailStream_get_Position__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E11690, void, set_Position, (app::TailStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x04756148, TailStream_set_Position__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::TailStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E11700, int64_t, Seek, (app::TailStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHODINFO(0x04775F88, TailStream_Seek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E11770, void, SetLength, (app::TailStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x047888F8, TailStream_SetLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E117E0, int32_t, Read, (app::TailStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04738D20, TailStream_Read__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01E11850, void, Write, (app::TailStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x047174E0, TailStream_Write__MethodInfo)
} // namespace app::classes::System::Security::Cryptography::TailStream
