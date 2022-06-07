#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AsymLocomotionTurningTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x00842780, void, PlayAnimation, (app::AsymLocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00842930, bool, ShouldEndBehaviour, (app::AsymLocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00842950, void, OnExitTask, (app::AsymLocomotionTurningTimelineBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::AsymLocomotionTurningTimelineBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::AsymLocomotionTurningTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008429B0, void, OnInitializeTask, (app::AsymLocomotionTurningTimelineBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::AsymLocomotionTurningTimelineBehaviour * this_ptr))
}
