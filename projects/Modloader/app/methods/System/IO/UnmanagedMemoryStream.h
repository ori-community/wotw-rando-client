#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UnmanagedMemoryStream.h>
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>

namespace app::classes::System::IO::UnmanagedMemoryStream {
    IL2CPP_REGISTER_METHOD(0x02389540, void, ctor_1, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x023895E0, void, ctor_2, (app::UnmanagedMemoryStream * this_ptr, uint8_t* pointer, int64_t length))
    IL2CPP_REGISTER_METHOD(0x023896C0, void, ctor_3, (app::UnmanagedMemoryStream * this_ptr, uint8_t* pointer, int64_t length, int64_t capacity, app::FileAccess__Enum access, bool skip_security_check))
    IL2CPP_REGISTER_METHOD(0x023897B0, void, Initialize, (app::UnmanagedMemoryStream * this_ptr, uint8_t* pointer, int64_t length, int64_t capacity, app::FileAccess__Enum access, bool skip_security_check))
    IL2CPP_REGISTER_METHODINFO(0x04722298, UnmanagedMemoryStream_Initialize__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02389A40, bool, get_CanRead, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F2320, bool, get_CanSeek, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02389A50, bool, get_CanWrite, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02389A70, void, Dispose, (app::UnmanagedMemoryStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x02389A80, void, Flush, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02389AA0, app::Task*, FlushAsync, (app::UnmanagedMemoryStream * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x02389BE0, int64_t, get_Length, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02389C10, int64_t, get_Position, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02389C50, void, set_Position, (app::UnmanagedMemoryStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x04713300, UnmanagedMemoryStream_set_Position__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02389D40, uint8_t*, get_PositionPointer, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D490, UnmanagedMemoryStream_get_PositionPointer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02389E70, int32_t, Read, (app::UnmanagedMemoryStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x04716E20, UnmanagedMemoryStream_Read__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0238A230, app::Task_1_System_Int32_*, ReadAsync, (app::UnmanagedMemoryStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHODINFO(0x047864F8, UnmanagedMemoryStream_ReadAsync__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0238A600, int32_t, ReadByte, (app::UnmanagedMemoryStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0238A790, int64_t, Seek, (app::UnmanagedMemoryStream * this_ptr, int64_t offset, app::SeekOrigin__Enum loc))
    IL2CPP_REGISTER_METHODINFO(0x04725090, UnmanagedMemoryStream_Seek__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0238A980, void, SetLength, (app::UnmanagedMemoryStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHODINFO(0x04766FD8, UnmanagedMemoryStream_SetLength__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0238AB70, void, Write, (app::UnmanagedMemoryStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHODINFO(0x0475A938, UnmanagedMemoryStream_Write__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0238B020, app::Task*, WriteAsync, (app::UnmanagedMemoryStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHODINFO(0x04758BA8, UnmanagedMemoryStream_WriteAsync__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0238B2B0, void, WriteByte, (app::UnmanagedMemoryStream * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHODINFO(0x0470F9C8, UnmanagedMemoryStream_WriteByte__MethodInfo)
} // namespace app::classes::System::IO::UnmanagedMemoryStream
