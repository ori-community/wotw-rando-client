#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LocomotionTurningBehaviour {
    IL2CPP_REGISTER_METHOD(0x00FC9020, bool, get_IsPlaying, (app::LocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC9040, void, PlayAnimation, (app::LocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC9180, bool, ShouldEndBehaviour, (app::LocomotionTurningBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC91E0, void, OnExitTask, (app::LocomotionTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00FC9390, app::BehaviourStatus__Enum, OnExecuteTask, (app::LocomotionTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::LocomotionTurningBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00D201A0, void, ctor, (app::LocomotionTurningBehaviour * this_ptr))
}
