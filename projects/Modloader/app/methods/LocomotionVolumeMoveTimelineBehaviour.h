#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LocomotionVolumeMoveTimelineBehaviour.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>

namespace app::classes::LocomotionVolumeMoveTimelineBehaviour {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SetAnimationSpeed, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x009EB5F0, app::Vector3, get_TargetPosition, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EB610, void, set_TargetPosition, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x0074C3E0, float, get_TraversalSpeed, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0074C400, void, set_TraversalSpeed, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x009EB630, bool, get_HasArrivedAtTarget, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EB690, bool, IsAtPoint, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x009EB8B0, void, OnInitializeTask, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009EBA00, void, SetTempArrivalDistance, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, float arrival_distance, float slow_down_distance))
    IL2CPP_REGISTER_METHOD(0x009EBA20, void, ResetArrivalDistance, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EBA40, app::BehaviourStatus__Enum, OnExecuteTask, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009EC110, bool, ContinuePlayingMovementAnim, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResetTask, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldPauseLocomotion, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EC140, void, PlayAnimation, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EC3E0, void, OnMovementStoppedPlaying, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047074D0, LocomotionVolumeMoveTimelineBehaviour_OnMovementStoppedPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x009EC410, void, OnEnterTask, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009EC570, void, OnExitTask, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x009EC5E0, void, OnTraversalSpeedChange, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EC690, float, get_EffectiveMinSpeed, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EC6B0, float, get_EffectiveMaxSpeed, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009EC6F0, void, ctor, (app::LocomotionVolumeMoveTimelineBehaviour * this_ptr))
} // namespace app::classes::LocomotionVolumeMoveTimelineBehaviour
