#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OneDSEventPipeline_StartAsync_d_20__Boxed.h>
#include <Modloader/app/structs/IAsyncStateMachine.h>

namespace app::classes::PlayFab::Pipeline::OneDSEventPipeline__StartAsync_d__20 {
    IL2CPP_REGISTER_METHOD(0x0013E5C0, void, MoveNext, (app::OneDSEventPipeline_StartAsync_d_20__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0011DCA0, void, SetStateMachine, (app::OneDSEventPipeline_StartAsync_d_20__Boxed * this_ptr, app::IAsyncStateMachine* state_machine))
} // namespace app::classes::PlayFab::Pipeline::OneDSEventPipeline__StartAsync_d__20
