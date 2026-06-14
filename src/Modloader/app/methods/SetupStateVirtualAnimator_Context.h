#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IGenericUberState.h>
#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SetupState.h>
#include <Modloader/app/structs/SetupStateVirtualAnimator_Context__Boxed.h>

namespace app::classes::SetupStateVirtualAnimator_Context {
    IL2CPP_REGISTER_METHOD(
        0x001D77C0,
        void,
        ctor,
        app::SetupStateVirtualAnimator_Context__Boxed* this_ptr,
        app::NewSetupStateController* state_controller,
        app::SetupState* state,
        app::IGenericUberState* uber_state,
        float desired_value
    )
}
