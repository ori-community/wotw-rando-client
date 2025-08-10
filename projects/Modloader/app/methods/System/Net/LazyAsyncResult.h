#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/LazyAsyncResult.h>
#include <Modloader/app/structs/LazyAsyncResult_ThreadContext.h>
#include <Modloader/app/structs/ManualResetEvent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WaitHandle.h>

namespace app::classes::System::Net::LazyAsyncResult {
    IL2CPP_REGISTER_METHOD(0x01E6B520, app::LazyAsyncResult_ThreadContext*, get_CurrentThreadContext, )
    IL2CPP_REGISTER_METHOD(
        0x01E6B6E0,
        void,
        ctor_1,
        app::LazyAsyncResult* this_ptr,
        app::Object* my_object,
        app::Object* my_state,
        app::AsyncCallback* my_call_back
    )
    IL2CPP_REGISTER_METHOD(
        0x01E6B7C0,
        void,
        ctor_2,
        app::LazyAsyncResult* this_ptr,
        app::Object* my_object,
        app::Object* my_state,
        app::AsyncCallback* my_call_back,
        app::Object* result
    )
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_AsyncObject, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_AsyncState, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::AsyncCallback*, get_AsyncCallback, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB960, void, set_AsyncCallback, app::LazyAsyncResult* this_ptr, app::AsyncCallback* value)
    IL2CPP_REGISTER_METHOD(0x01E6B7F0, app::WaitHandle*, get_AsyncWaitHandle, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6B8E0, bool, LazilyCreateEvent, app::LazyAsyncResult* this_ptr, app::ManualResetEvent** wait_handle)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugProtectState, app::LazyAsyncResult* this_ptr, bool protect)
    IL2CPP_REGISTER_METHOD(0x01E6BB30, bool, get_CompletedSynchronously, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6BB50, bool, get_IsCompleted, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6BB70, bool, get_InternalPeekCompleted, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6BB80, app::Object*, get_Result, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Result, app::LazyAsyncResult* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_EndCalled, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_EndCalled, app::LazyAsyncResult* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_ErrorCode, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_ErrorCode, app::LazyAsyncResult* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x01E6BC50, void, ProtectedInvokeCallback, app::LazyAsyncResult* this_ptr, app::Object* result, void* user_token)
    IL2CPP_REGISTER_METHOD(0x01E6BE10, void, InvokeCallback_1, app::LazyAsyncResult* this_ptr, app::Object* result)
    IL2CPP_REGISTER_METHOD(0x01E6BEA0, void, InvokeCallback_2, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6BF20, void, Complete, app::LazyAsyncResult* this_ptr, void* user_token)
    IL2CPP_REGISTER_METHOD(0x01E6C1A0, void, WorkerThreadComplete, app::LazyAsyncResult* this_ptr, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Cleanup, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6C260, app::Object*, InternalWaitForCompletion, app::LazyAsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E6C270, app::Object*, WaitForCompletion, app::LazyAsyncResult* this_ptr, bool snap)
    IL2CPP_REGISTER_METHOD(0x01E6C4F0, void, InternalCleanup, app::LazyAsyncResult* this_ptr)
} // namespace app::classes::System::Net::LazyAsyncResult
