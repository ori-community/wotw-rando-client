#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancellationCallbackInfo.h>
#include <Modloader/app/structs/Action_1_Object_.h>
#include <Modloader/app/structs/CancellationTokenSource.h>
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SynchronizationContext.h>

namespace app::classes::System::Threading::CancellationCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x00F70AB0, void, ctor, (app::CancellationCallbackInfo * this_ptr, app::Action_1_Object_* callback, app::Object* state_for_callback, app::SynchronizationContext* target_sync_context, app::ExecutionContext* target_execution_context, app::CancellationTokenSource* cancellation_token_source))
    IL2CPP_REGISTER_METHOD(0x027D8450, void, ExecuteCallback, (app::CancellationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027D86E0, void, ExecutionContextCallback, (app::Object * obj))
} // namespace app::classes::System::Threading::CancellationCallbackInfo
