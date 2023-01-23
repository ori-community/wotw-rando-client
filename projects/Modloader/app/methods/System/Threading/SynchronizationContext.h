#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SynchronizationContext.h>
#include <Modloader/app/structs/SendOrPostCallback.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Threading::SynchronizationContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SynchronizationContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232E1D0, void, Send, (app::SynchronizationContext * this_ptr, app::SendOrPostCallback* d, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x0232E200, void, Post, (app::SynchronizationContext * this_ptr, app::SendOrPostCallback* d, app::Object* state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OperationStarted, (app::SynchronizationContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OperationCompleted, (app::SynchronizationContext * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0232E360, void, SetSynchronizationContext, (app::SynchronizationContext * sync_context))
    IL2CPP_REGISTER_METHOD(0x0232E3A0, app::SynchronizationContext*, get_Current, ())
    IL2CPP_REGISTER_METHOD(0x0232E3D0, app::SynchronizationContext*, get_CurrentNoFlow, ())
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::SynchronizationContext*, GetThreadLocalContext, ())
    IL2CPP_REGISTER_METHOD(0x0232E400, app::SynchronizationContext*, CreateCopy, (app::SynchronizationContext * this_ptr))
} // namespace app::classes::System::Threading::SynchronizationContext
