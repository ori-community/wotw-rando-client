#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FrogGroundLocomotion {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_UsesSeparateTurningBehaviour, (app::FrogGroundLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01648180, bool, CanTraverseToTarget, (app::FrogGroundLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016486D0, void, OnFixedUpdate, (app::FrogGroundLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01648750, void, ConfigureStateMachine, (app::FrogGroundLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01648A60, bool, ShouldTriggerMove, (app::FrogGroundLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047916A8, FrogGroundLocomotion_ShouldTriggerMove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01648E30, void, ctor, (app::FrogGroundLocomotion * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01648F70, bool, _ConfigureStateMachine_b__12_0, (app::FrogGroundLocomotion * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A420, FrogGroundLocomotion__ConfigureStateMachine_b__12_0__MethodInfo)
} // namespace app::classes::FrogGroundLocomotion
