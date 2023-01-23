#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Stream_NullStream.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>

namespace app::classes::System::IO::Stream_NullStream {
    IL2CPP_REGISTER_METHOD(0x0237E700, void, ctor, (app::Stream_NullStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanRead, (app::Stream_NullStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanWrite, (app::Stream_NullStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_CanSeek, (app::Stream_NullStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_Length, (app::Stream_NullStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, get_Position, (app::Stream_NullStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Position, (app::Stream_NullStream * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose, (app::Stream_NullStream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Flush, (app::Stream_NullStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237E790, app::Task*, FlushAsync, (app::Stream_NullStream * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0237E870, app::IAsyncResult*, BeginRead, (app::Stream_NullStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x0237E8E0, int32_t, EndRead, (app::Stream_NullStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHODINFO(0x047538E0, Stream_NullStream_EndRead__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0237E9B0, app::IAsyncResult*, BeginWrite, (app::Stream_NullStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x0237EA20, void, EndWrite, (app::Stream_NullStream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHODINFO(0x04756078, Stream_NullStream_EndWrite__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, Read, (app::Stream_NullStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0237EAF0, app::Task_1_System_Int32_*, ReadAsync, (app::Stream_NullStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, ReadByte, (app::Stream_NullStream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Write, (app::Stream_NullStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0237ED10, app::Task*, WriteAsync, (app::Stream_NullStream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteByte, (app::Stream_NullStream * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int64_t, Seek, (app::Stream_NullStream * this_ptr, int64_t offset, app::SeekOrigin__Enum origin))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetLength, (app::Stream_NullStream * this_ptr, int64_t length))
} // namespace app::classes::System::IO::Stream_NullStream
