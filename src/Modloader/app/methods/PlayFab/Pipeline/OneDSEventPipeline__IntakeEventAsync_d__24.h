#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IAsyncStateMachine.h>
#include <Modloader/app/structs/OneDSEventPipeline_IntakeEventAsync_d_24__Boxed.h>

namespace app::classes::PlayFab::Pipeline::OneDSEventPipeline__IntakeEventAsync_d__24 {
    IL2CPP_REGISTER_METHOD(0x0013E510, void, MoveNext, app::OneDSEventPipeline_IntakeEventAsync_d_24__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0013E520,
        void,
        SetStateMachine,
        app::OneDSEventPipeline_IntakeEventAsync_d_24__Boxed* this_ptr,
        app::IAsyncStateMachine* state_machine
    )
} // namespace app::classes::PlayFab::Pipeline::OneDSEventPipeline__IntakeEventAsync_d__24
