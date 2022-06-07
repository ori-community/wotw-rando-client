#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LocomotionAirMoveTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAnimationSpeed, (app::LocomotionAirMoveTimelineBehaviour * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x00FC4B60, void, PlayAnimation, (app::LocomotionAirMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC4E10, void, OnMovementStoppedPlaying, (app::LocomotionAirMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC4E40, void, OnEnterTask, (app::LocomotionAirMoveTimelineBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00FC4F90, void, OnExitTask, (app::LocomotionAirMoveTimelineBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00FC4FF0, void, OnTraversalSpeedChange, (app::LocomotionAirMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC5080, float, get_EffectiveMinSpeed, (app::LocomotionAirMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC50A0, float, get_EffectiveMaxSpeed, (app::LocomotionAirMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC4B30, void, ctor, (app::LocomotionAirMoveTimelineBehaviour * this_ptr))
}
