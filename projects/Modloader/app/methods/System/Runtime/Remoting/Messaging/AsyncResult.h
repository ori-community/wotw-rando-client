#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncResult.h>
#include <Modloader/app/structs/IMessage.h>
#include <Modloader/app/structs/IMessageCtrl.h>
#include <Modloader/app/structs/IMessageSink.h>
#include <Modloader/app/structs/MonoMethodMessage.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ThreadAbortException.h>
#include <Modloader/app/structs/WaitCallback.h>
#include <Modloader/app/structs/WaitHandle.h>

namespace app::classes::System::Runtime::Remoting::Messaging::AsyncResult {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02309B50, void, ctor_2, app::AsyncResult* this_ptr, app::WaitCallback* cb, app::Object* state, bool capture_context)
    IL2CPP_REGISTER_METHOD(0x02309D00, void, WaitCallback_Context, app::Object* state)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::Object*, get_AsyncState, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02309DF0, app::WaitHandle*, get_AsyncWaitHandle, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_CompletedSynchronously, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004379C0, bool, get_IsCompleted, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004379E0, bool, get_EndInvokeCalled, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004379F0, void, set_EndInvokeCalled, app::AsyncResult* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x002FB950, app::Object*, get_AsyncDelegate, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMessageSink*, get_NextSink, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0230A030, app::IMessageCtrl*, AsyncProcessMessage, app::AsyncResult* this_ptr, app::IMessage* msg, app::IMessageSink* reply_sink)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::IMessage*, GetReplyMessage, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBB0, void, SetMessageCtrl, app::AsyncResult* this_ptr, app::IMessageCtrl* mc)
    IL2CPP_REGISTER_METHOD(0x00447370, void, SetCompletedSynchronously, app::AsyncResult* this_ptr, bool completed)
    IL2CPP_REGISTER_METHOD(0x0230A080, app::IMessage*, EndInvoke, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0230A1C0, app::IMessage*, SyncProcessMessage, app::AsyncResult* this_ptr, app::IMessage* msg)
    IL2CPP_REGISTER_METHOD(0x002FBB80, app::MonoMethodMessage*, get_CallMessage, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB90, void, set_CallMessage, app::AsyncResult* this_ptr, app::MonoMethodMessage* value)
    IL2CPP_REGISTER_METHOD(0x0230A370, void, IThreadPoolWorkItem_ExecuteWorkItem, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, IThreadPoolWorkItem_MarkAborted, app::AsyncResult* this_ptr, app::ThreadAbortException* tae)
    IL2CPP_REGISTER_METHOD(0x0230A370, app::Object*, Invoke, app::AsyncResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0230A380, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x0230A4E0, void, __ctor_b__17_0, app::AsyncResult* this_ptr, app::Object* _p0_)
} // namespace app::classes::System::Runtime::Remoting::Messaging::AsyncResult
