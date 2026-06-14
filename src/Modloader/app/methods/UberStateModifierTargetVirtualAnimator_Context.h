#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NewSetupStateController.h>
#include <Modloader/app/structs/SetupStateModifier.h>
#include <Modloader/app/structs/UberStateModifierTargetVirtualAnimator_Context__Boxed.h>

namespace app::classes::UberStateModifierTargetVirtualAnimator_Context {
    IL2CPP_REGISTER_METHOD(
        0x00110270,
        void,
        ctor,
        app::UberStateModifierTargetVirtualAnimator_Context__Boxed* this_ptr,
        app::SetupStateModifier* modifier,
        app::NewSetupStateController* state_controller
    )
}
