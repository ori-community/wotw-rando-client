#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/IBlackboard.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LocomotionMoveBehaviour.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus_.h>

namespace app::classes::LocomotionMoveBehaviour {
    IL2CPP_REGISTER_METHOD(0x0064D930, app::Vector3, get_TargetPosition, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D950, void, set_TargetPosition, (app::LocomotionMoveBehaviour * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00FC7B10, float, get_TraversalSpeed, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_TraversalSpeed, (app::LocomotionMoveBehaviour * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00FC7B30, bool, get_HasArrivedAtTarget, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC7CA0, bool, IsAtPoint, (app::LocomotionMoveBehaviour * this_ptr, app::Vector3 point))
    IL2CPP_REGISTER_METHOD(0x00FC7E30, void, OnInitialize, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC7ED0, void, OnExecute_1, (app::LocomotionMoveBehaviour * this_ptr, app::IBlackboard* blackboard))
    IL2CPP_REGISTER_METHOD(0x00FC80E0, void, OnEndBehaviour, (app::LocomotionMoveBehaviour * this_ptr, app::EntityBehaviourStatus__Enum reason))
    IL2CPP_REGISTER_METHOD(0x00FC8290, void, OnUpdateBehaviour, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC8840, void, SetAnimationSpeed, (app::LocomotionMoveBehaviour * this_ptr, float speed))
    IL2CPP_REGISTER_METHOD(0x00FC8860, void, PlayAnimation, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC8C10, bool, ContinuePlayingMovementAnim, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC8C30, void, OnMovementStoppedPlaying, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC8E00, void, OnTraversalSpeedChange, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00FC8E20, void, OnProcessRootMotion, (app::LocomotionMoveBehaviour * this_ptr, app::Vector3 motion))
    IL2CPP_REGISTER_METHOD(0x00855600, app::BehaviourStatus__Enum, get_Status, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A15650, void, set_Status, (app::LocomotionMoveBehaviour * this_ptr, app::BehaviourStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_, get_ForceReturnStatus, (app::LocomotionMoveBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_ForceReturnStatus, (app::LocomotionMoveBehaviour * this_ptr, app::Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ value))
    IL2CPP_REGISTER_METHOD(0x00FC8E70, app::BehaviourStatus__Enum, OnExecute_2, (app::LocomotionMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC8EC0, void, OnInitialise, (app::LocomotionMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC8F10, void, OnEnter, (app::LocomotionMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC8F60, void, OnExit, (app::LocomotionMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC8FB0, void, OnReset, (app::LocomotionMoveBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00FC9000, void, ctor, (app::LocomotionMoveBehaviour * this_ptr))
} // namespace app::classes::LocomotionMoveBehaviour
