#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FileStream.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/FileAccess__Enum.h>
#include <Modloader/app/structs/FileMode__Enum.h>
#include <Modloader/app/structs/FileOptions__Enum.h>
#include <Modloader/app/structs/FileShare__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SafeFileHandle.h>
#include <Modloader/app/structs/SafeHandle.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>

namespace app::classes::System::IO::FileStream {
    IL2CPP_REGISTER_METHOD(0x01E09CF0, void, ctor_1, (app::FileStream * this_ptr, void* handle, app::FileAccess__Enum access, bool owns_handle, int32_t buffer_size))
    IL2CPP_REGISTER_METHOD(0x01E09D20, void, ctor_2, (app::FileStream * this_ptr, void* handle, app::FileAccess__Enum access, bool owns_handle, int32_t buffer_size, bool is_async))
    IL2CPP_REGISTER_METHOD(0x01E09D50, void, ctor_3, (app::FileStream * this_ptr, void* handle, app::FileAccess__Enum access, bool owns_handle, int32_t buffer_size, bool is_async, bool is_console_wrapper))
    IL2CPP_REGISTER_METHOD(0x01E09FA0, void, ctor_4, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode))
    IL2CPP_REGISTER_METHOD(0x01E09FF0, void, ctor_5, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode, app::FileAccess__Enum access))
    IL2CPP_REGISTER_METHOD(0x01E0A040, void, ctor_6, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode, app::FileAccess__Enum access, app::FileShare__Enum share))
    IL2CPP_REGISTER_METHOD(0x01E0A070, void, ctor_7, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode, app::FileAccess__Enum access, app::FileShare__Enum share, int32_t buffer_size))
    IL2CPP_REGISTER_METHOD(0x01E0A0B0, void, ctor_8, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode, app::FileAccess__Enum access, app::FileShare__Enum share, int32_t buffer_size, bool use_async))
    IL2CPP_REGISTER_METHOD(0x01E0A100, void, ctor_9, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode, app::FileAccess__Enum access, app::FileShare__Enum share, int32_t buffer_size, app::FileOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01E0A140, void, ctor_10, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode, app::FileAccess__Enum access, app::FileShare__Enum share, int32_t buffer_size, app::FileOptions__Enum options, app::String* msg_path, bool b_from_proxy, bool use_long_path, bool check_host))
    IL2CPP_REGISTER_METHOD(0x01E0A160, void, ctor_11, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode, app::FileAccess__Enum access, app::FileShare__Enum share, int32_t buffer_size, bool is_async, bool anonymous))
    IL2CPP_REGISTER_METHOD(0x01E0A1C0, void, ctor_12, (app::FileStream * this_ptr, app::String* path, app::FileMode__Enum mode, app::FileAccess__Enum access, app::FileShare__Enum share, int32_t buffer_size, bool anonymous, app::FileOptions__Enum options))
    IL2CPP_REGISTER_METHOD(0x01E0AB00, void, Init, (app::FileStream * this_ptr, app::SafeFileHandle* safe_handle, app::FileAccess__Enum access, bool owns_handle, int32_t buffer_size, bool is_async, bool is_console_wrapper))
    IL2CPP_REGISTER_METHOD(0x01E0AE50, bool, get_CanRead, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0AE60, bool, get_CanWrite, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F83F60, bool, get_CanSeek, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::String*, get_Name, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0AE80, int64_t, get_Length, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0B030, int64_t, get_Position, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0B1F0, void, set_Position, (app::FileStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01E0B2E0, app::SafeFileHandle*, get_SafeFileHandle, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0B320, void, ExposeHandle, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0B350, int32_t, ReadByte, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0B530, void, WriteByte, (app::FileStream * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x01E0B700, int32_t, Read, (app::FileStream * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E0BA50, int32_t, ReadInternal, (app::FileStream * this_ptr, app::Byte__Array* dest, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E0BB20, app::IAsyncResult*, BeginRead, (app::FileStream * this_ptr, app::Byte__Array* array, int32_t offset, int32_t num_bytes, app::AsyncCallback* user_callback, app::Object* state_object))
    IL2CPP_REGISTER_METHOD(0x01E0BF20, int32_t, EndRead, (app::FileStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01E0C120, void, Write, (app::FileStream * this_ptr, app::Byte__Array* array, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E0C3B0, void, WriteInternal, (app::FileStream * this_ptr, app::Byte__Array* src, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E0C640, app::IAsyncResult*, BeginWrite, (app::FileStream * this_ptr, app::Byte__Array* array, int32_t offset, int32_t num_bytes, app::AsyncCallback* user_callback, app::Object* state_object))
    IL2CPP_REGISTER_METHOD(0x01E0CB30, void, EndWrite, (app::FileStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x01E0CD10, int64_t, Seek, (app::FileStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x01E0CFD0, void, SetLength, (app::FileStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01E0D240, void, Flush, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0D300, void, Finalize, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0D380, void, Dispose, (app::FileStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x01E0D730, app::Task*, FlushAsync, (app::FileStream * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x01E0D810, app::Task_1_System_Int32_*, ReadAsync, (app::FileStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x01E0D820, app::Task*, WriteAsync, (app::FileStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x01E0D830, int32_t, ReadSegment, (app::FileStream * this_ptr, app::Byte__Array* dest, int32_t dest_offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E0D930, int32_t, WriteSegment, (app::FileStream * this_ptr, app::Byte__Array* src, int32_t src_offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E0D9A0, void, FlushBuffer, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0DBD0, void, FlushBufferIfDirty, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0DBE0, void, RefillBuffer, (app::FileStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E0DC20, int32_t, ReadData, (app::FileStream * this_ptr, app::SafeHandle* safe_handle, app::Byte__Array* buf, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x01E0DD90, void, InitBuffer, (app::FileStream * this_ptr, int32_t size, bool is_zero_size))
    IL2CPP_REGISTER_METHOD(0x01E0E080, app::String*, GetSecureFileName_1, (app::FileStream * this_ptr, app::String* filename))
    IL2CPP_REGISTER_METHOD(0x01E0E160, app::String*, GetSecureFileName_2, (app::FileStream * this_ptr, app::String* filename, bool full))
    IL2CPP_REGISTER_METHOD(0x01E0E270, void, cctor, ())
} // namespace app::classes::System::IO::FileStream
