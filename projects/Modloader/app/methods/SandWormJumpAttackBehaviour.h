#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SandWormJumpAttackBehaviour {
    IL2CPP_REGISTER_METHOD(0x00C1B7F0, void, OnEntityInitialized, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1B8C0, void, OnEnter, (app::SandWormJumpAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C1BAD0, app::BehaviourStatus__Enum, OnExecute, (app::SandWormJumpAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C1BF80, void, OnExit, (app::SandWormJumpAttackBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00C1C030, void, CheckPreJumpStateTransition, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1C160, bool, HasLineOfSightTo, (app::SandWormJumpAttackBehaviour * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x00C1C450, void, CheckTowardsTargetStateTransition, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1C600, void, CheckTowardsLandingPointStateTransition, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1C800, void, ChangeState, (app::SandWormJumpAttackBehaviour * this_ptr, app::SandWormJumpAttackBehaviour_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitPreJumpState, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1CA00, void, OnEnterTowardsTargetState, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1CBB0, void, OnEnterTowardsLandingPointState, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1CE10, void, OnEnterPreJumpState, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTowardsTargetState, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExitTowardsLandingPointState, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00C1DA40, void, OnUpdatePreJumpState, (app::SandWormJumpAttackBehaviour * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00C1DB60, void, OnUpdateTowardsTargetState, (app::SandWormJumpAttackBehaviour * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00C1DC80, void, OnUpdateTowardsLandingPointState, (app::SandWormJumpAttackBehaviour * this_ptr, float d_time))
    IL2CPP_REGISTER_METHOD(0x00C1DF00, app::SandWormSandDigLocomotionBehaviour_SpeedEntry, GetCurrentSpeedEntry, (app::SandWormJumpAttackBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475F010, SandWormJumpAttackBehaviour_GetCurrentSpeedEntry__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00C1DF70, void, ctor, (app::SandWormJumpAttackBehaviour * this_ptr))
} // namespace app::classes::SandWormJumpAttackBehaviour
