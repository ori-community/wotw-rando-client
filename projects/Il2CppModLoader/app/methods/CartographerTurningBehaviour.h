#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CartographerTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_TargetLookDirectionX, (app::CartographerTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_TargetLookDirectionX, (app::CartographerTurningBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0074B550, float, get_CurrentTurningDirection, (app::CartographerTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::CartographerTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B47510, void, OnInitializeTask, (app::CartographerTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B47690, bool, get_IsPlaying, (app::CartographerTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B47770, void, OnEnterTask, (app::CartographerTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTask, (app::CartographerTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008D2CA0, app::BehaviourStatus__Enum, OnExecuteTask, (app::CartographerTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00B479E0, void, TurningFinished, (app::CartographerTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713630, CartographerTurningBehaviour_TurningFinished__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00B47C30, void, PlayAnimation, (app::CartographerTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B48030, void, SetAnimTime, (app::CartographerTurningBehaviour * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00B48190, bool, ShouldEndBehaviour, (app::CartographerTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, ShouldPauseLocomotion, (app::CartographerTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B3EC0, void, ctor, (app::CartographerTurningBehaviour * this_ptr))
}
