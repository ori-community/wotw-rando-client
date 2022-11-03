#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Threading::CancellationCallbackInfo {
    IL2CPP_REGISTER_METHOD(0x00F70AB0, void, ctor, (app::CancellationCallbackInfo * this_ptr, app::Action_1_Object_* callback, app::Object* state_for_callback, app::SynchronizationContext* target_sync_context, app::ExecutionContext* target_execution_context, app::CancellationTokenSource* cancellation_token_source))
    IL2CPP_REGISTER_METHOD(0x027D8450, void, ExecuteCallback, (app::CancellationCallbackInfo * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027D86E0, void, ExecutionContextCallback, (app::Object * obj))
    IL2CPP_REGISTER_METHODINFO(0x0473A6A8, CancellationCallbackInfo_ExecutionContextCallback__MethodInfo)
} // namespace app::classes::System::Threading::CancellationCallbackInfo
