#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::BaseLocomotionTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_TargetLookDirectionX, (app::BaseLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623270, void, set_TargetLookDirectionX, (app::BaseLocomotionTurningBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00F86020, bool, get_IsPlaying, (app::BaseLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F86070, void, OnInitializeTask, (app::BaseLocomotionTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00F86170, void, OnEnterTask, (app::BaseLocomotionTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanCancel, (app::BaseLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F863D0, app::BehaviourStatus__Enum, OnExecuteTask, (app::BaseLocomotionTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::BaseLocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::BaseLocomotionTurningBehaviour * this_ptr))
}
