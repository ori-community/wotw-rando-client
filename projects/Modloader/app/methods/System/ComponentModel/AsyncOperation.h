#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncOperation.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SendOrPostCallback.h>
#include <Modloader/app/structs/SynchronizationContext.h>

namespace app::classes::System::ComponentModel::AsyncOperation {
    IL2CPP_REGISTER_METHOD(0x024A0500, void, ctor_1, app::AsyncOperation* this_ptr, app::Object* user_supplied_state, app::SynchronizationContext* sync_context)
    IL2CPP_REGISTER_METHOD(0x024A0540, void, Finalize, app::AsyncOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::Object*, get_UserSuppliedState, app::AsyncOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::SynchronizationContext*, get_SynchronizationContext, app::AsyncOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A05D0, void, Post, app::AsyncOperation* this_ptr, app::SendOrPostCallback* d, app::Object* arg)
    IL2CPP_REGISTER_METHOD(0x024A06E0, void, PostOperationCompleted, app::AsyncOperation* this_ptr, app::SendOrPostCallback* d, app::Object* arg)
    IL2CPP_REGISTER_METHOD(0x024A0700, void, OperationCompleted, app::AsyncOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A0720, void, OperationCompletedCore, app::AsyncOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A0840, void, VerifyNotCompleted, app::AsyncOperation* this_ptr)
    IL2CPP_REGISTER_METHOD(0x024A0900, void, VerifyDelegateNotNull, app::AsyncOperation* this_ptr, app::SendOrPostCallback* d)
    IL2CPP_REGISTER_METHOD(0x024A09D0, app::AsyncOperation*, CreateOperation, app::Object* user_supplied_state, app::SynchronizationContext* sync_context)
    IL2CPP_REGISTER_METHOD(0x024A0B40, void, ctor_2, app::AsyncOperation* this_ptr)
} // namespace app::classes::System::ComponentModel::AsyncOperation
