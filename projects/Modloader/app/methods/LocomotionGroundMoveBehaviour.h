#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::LocomotionGroundMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x00A1FBC0, app::Vector3, get_TargetPosition, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00A1FBE0, void, set_TargetPosition, app::LocomotionGroundMoveBehaviour* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x0074C3E0, float, get_TraversalSpeed, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_TraversalSpeed, app::LocomotionGroundMoveBehaviour* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00FC5580, float, get_EffectiveMinSpeed, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC55A0, float, get_EffectiveMaxSpeed, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC5620, bool, get_IsAnimationPlaying, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC5640, bool, get_HasArrivedAtTarget, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC56A0, bool, get_CanReachTarget, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC5760, bool, get_IsFacing, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC5930, bool, IsAtPoint, app::LocomotionGroundMoveBehaviour* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x00FC5A70, app::Vector2, DeltaToPoint, app::LocomotionGroundMoveBehaviour* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x00FC5BB0, void, OnInitializeTask, app::LocomotionGroundMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x00FC5D00,
        void,
        SetTempArrivalDistance,
        app::LocomotionGroundMoveBehaviour* this_ptr,
        float arrival_distance,
        float slow_down_distance
    )
    IL2CPP_REGISTER_METHOD(0x00FC5D20, void, ResetArrivalDistance, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC5D40, void, OnEnterTask, app::LocomotionGroundMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FC5E80, void, OnExitTask, app::LocomotionGroundMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FC5F80, void, PlayAnimationIfNotPlaying, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC6000, app::BehaviourStatus__Enum, OnExecuteTask, app::LocomotionGroundMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00FC6440, void, SetAnimationSpeed, app::LocomotionGroundMoveBehaviour* this_ptr, float speed)
    IL2CPP_REGISTER_METHOD(0x00FC6460, void, PlayAnimation, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC6830, bool, ContinuePlayingMovementAnim, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC6860, void, OnMovementStoppedPlaying, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC68A0, void, OnTraversalSpeedChange, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FC6940, void, OnIsMovingBackwardsChanged, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, app::LocomotionGroundMoveBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, app::LocomotionGroundMoveBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00842340, void, ctor, app::LocomotionGroundMoveBehaviour* this_ptr)
} // namespace app::classes::LocomotionGroundMoveBehaviour
