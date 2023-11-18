#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SemaphoreSlim.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/Stream_ReadWriteTask.h>
#include <Modloader/app/structs/Task.h>
#include <Modloader/app/structs/Task_1_System_Int32_.h>

namespace app::classes::System::IO::Stream {
    IL2CPP_REGISTER_METHOD(0x0237B350, app::SemaphoreSlim*, EnsureAsyncActiveSemaphoreInitialized, (app::Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanTimeout, (app::Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237B550, int32_t, get_ReadTimeout, (app::Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237B5C0, void, set_ReadTimeout, (app::Stream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0237B630, int32_t, get_WriteTimeout, (app::Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237B6A0, void, set_WriteTimeout, (app::Stream * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x01F86A90, void, Close, (app::Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E113B0, void, Dispose_1, (app::Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Dispose_2, (app::Stream * this_ptr, bool disposing))
    IL2CPP_REGISTER_METHOD(0x0237B710, app::Task*, FlushAsync, (app::Stream * this_ptr, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0237B970, app::IAsyncResult*, BeginRead, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x0237B9A0, app::IAsyncResult*, BeginReadInternal, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state, bool serialize_asynchronously))
    IL2CPP_REGISTER_METHOD(0x0237BDA0, int32_t, EndRead, (app::Stream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x0237C0B0, app::Task_1_System_Int32_*, ReadAsync, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0237C1B0, app::Task_1_System_Int32_*, BeginEndReadAsync, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0237C510, app::IAsyncResult*, BeginWrite, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x0237C540, app::IAsyncResult*, BeginWriteInternal, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state, bool serialize_asynchronously))
    IL2CPP_REGISTER_METHOD(0x0237C940, void, RunReadWriteTaskWhenReady, (app::Stream * this_ptr, app::Task* async_waiter, app::Stream_ReadWriteTask* read_write_task))
    IL2CPP_REGISTER_METHOD(0x0237CBB0, void, RunReadWriteTask, (app::Stream * this_ptr, app::Stream_ReadWriteTask* read_write_task))
    IL2CPP_REGISTER_METHOD(0x0237CC80, void, EndWrite, (app::Stream * this_ptr, app::IAsyncResult* async_result))
    IL2CPP_REGISTER_METHOD(0x0237CF70, app::Task*, WriteAsync_1, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0237D060, app::Task*, WriteAsync_2, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::CancellationToken cancellation_token))
    IL2CPP_REGISTER_METHOD(0x0237D160, app::Task*, BeginEndWriteAsync, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x0237D4C0, int32_t, ReadByte, (app::Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237D5B0, void, WriteByte, (app::Stream * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x0237D690, app::IAsyncResult*, BlockingBeginRead, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x0237D910, int32_t, BlockingEndRead, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x0237D9F0, app::IAsyncResult*, BlockingBeginWrite, (app::Stream * this_ptr, app::Byte__Array* buffer, int32_t offset, int32_t count, app::AsyncCallback* callback, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x0237DC70, void, BlockingEndWrite, (app::IAsyncResult * async_result))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::Stream * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0237DD50, void, cctor, ())
} // namespace app::classes::System::IO::Stream
