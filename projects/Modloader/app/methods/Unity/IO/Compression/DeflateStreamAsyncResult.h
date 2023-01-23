#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DeflateStreamAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/WaitHandle.h>

namespace app::classes::Unity::IO::Compression::DeflateStreamAsyncResult {
    IL2CPP_REGISTER_METHOD(0x02B75330, void, ctor, (app::DeflateStreamAsyncResult * this_ptr, app::Object* async_object, app::Object* async_state, app::AsyncCallback* async_callback, app::Byte__Array* buffer, int32_t offset, int32_t count))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Object*, get_AsyncState, (app::DeflateStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B75360, app::WaitHandle*, get_AsyncWaitHandle, (app::DeflateStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FCB00, bool, get_CompletedSynchronously, (app::DeflateStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B75520, bool, get_IsCompleted, (app::DeflateStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::Object*, get_Result, (app::DeflateStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B75530, void, Close, (app::DeflateStreamAsyncResult * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02B755E0, void, InvokeCallback_1, (app::DeflateStreamAsyncResult * this_ptr, bool completed_synchronously, app::Object* result))
    IL2CPP_REGISTER_METHOD(0x02B75600, void, InvokeCallback_2, (app::DeflateStreamAsyncResult * this_ptr, app::Object* result))
    IL2CPP_REGISTER_METHOD(0x02B755E0, void, Complete_1, (app::DeflateStreamAsyncResult * this_ptr, bool completed_synchronously, app::Object* result))
    IL2CPP_REGISTER_METHOD(0x02B75610, void, Complete_2, (app::DeflateStreamAsyncResult * this_ptr, app::Object* result))
} // namespace app::classes::Unity::IO::Compression::DeflateStreamAsyncResult
