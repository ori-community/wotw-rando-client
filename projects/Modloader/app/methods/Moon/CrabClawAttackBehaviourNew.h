#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CrabClawAttackBehaviourNew.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::CrabClawAttackBehaviourNew {
    IL2CPP_REGISTER_METHOD(0x00CCAD00, void, OnEntityInitialized, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCB2F0, void, OnEnter, (app::CrabClawAttackBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCB4B0, bool, IsInAttackRange, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCB600, bool, ShouldCancel, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCB760, app::BehaviourStatus__Enum, OnExecute, (app::CrabClawAttackBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCB7E0, void, OnExit, (app::CrabClawAttackBehaviourNew * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00CCB930, void, MoveStart, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCB940, void, MoveUpdate, (app::CrabClawAttackBehaviourNew * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00CCBE70, float, GetMoveDelta, (app::CrabClawAttackBehaviourNew * this_ptr, float direction, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00CCBFB0, bool, ShouldFinishMovement, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCBFE0, float, GetMovementCurveTotalTime, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCC180, void, FaceTargetFlip, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCC2D0, float, GetLookDirection, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCC430, float, GetDirectionToTarget, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ShouldPauseLocomotionIsConstant, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCC550, bool, ShouldPauseLocomotion, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCC570, void, ctor, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCC5A0, void, _OnEntityInitialized_b__14_0, (app::CrabClawAttackBehaviourNew * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CCC5E0, void, _OnEntityInitialized_b__14_1, (app::CrabClawAttackBehaviourNew * this_ptr))
} // namespace app::classes::Moon::CrabClawAttackBehaviourNew
