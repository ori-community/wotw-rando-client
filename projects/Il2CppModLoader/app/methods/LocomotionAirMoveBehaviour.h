#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::LocomotionAirMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x009EB5F0, app::Vector3, get_TargetPosition, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EB610, void, set_TargetPosition, (app::LocomotionAirMoveBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00FC3850, float, get_TraversalSpeed, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC3870, void, set_TraversalSpeed, (app::LocomotionAirMoveBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FC3890, bool, get_HasArrivedAtTarget, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC38C0, float, get_EffectiveMinSpeed, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC38E0, float, get_EffectiveMaxSpeed, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC3900, bool, IsAtPoint, (app::LocomotionAirMoveBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00FC3B20, void, OnInitializeTask, (app::LocomotionAirMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC3C90, void, SetTempArrivalDistance, (app::LocomotionAirMoveBehaviour * this_ptr, float arrival_distance, float slow_down_distance))
    IL2CPP_REGISTER_METHOD(0x00FC3CB0, void, ResetArrivalDistance, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC3CD0, void, OnEnterTask, (app::LocomotionAirMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC3E00, void, OnExitTask, (app::LocomotionAirMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC3E30, app::BehaviourStatus__Enum, OnExecuteTask, (app::LocomotionAirMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC4640, void, SetAnimationSpeed, (app::LocomotionAirMoveBehaviour * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x00FC4660, void, PlayAnimation, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EC110, bool, ContinuePlayingMovementAnim, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477FDB8, LocomotionAirMoveBehaviour_ContinuePlayingMovementAnim__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00FC4A60, void, OnMovementStoppedPlaying, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC4AA0, void, OnTraversalSpeedChange, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::LocomotionAirMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::LocomotionAirMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC4B30, void, ctor, (app::LocomotionAirMoveBehaviour * this_ptr))
} // namespace app::classes::LocomotionAirMoveBehaviour
