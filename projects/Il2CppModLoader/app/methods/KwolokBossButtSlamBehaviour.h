#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::KwolokBossButtSlamBehaviour {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsLocomotionFollowAllowed, (app::KwolokBossButtSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01248680, bool, IsLocomotionStayAtRangeAllowed, (app::KwolokBossButtSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012486C0, void, InitializeCancellableController, (app::KwolokBossButtSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01248710, void, OnEntityInitialized, (app::KwolokBossButtSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01248960, void, OnEnter, (app::KwolokBossButtSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01248F50, app::BehaviourStatus__Enum, OnExecute, (app::KwolokBossButtSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01249050, void, OnExit, (app::KwolokBossButtSlamBehaviour * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01249630, float, ComputeUtility, (app::KwolokBossButtSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01249860, void, InitializeHitReactionController, (app::KwolokBossButtSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012498B0, void, OnBeamSpawnEvent, (app::KwolokBossButtSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725830, KwolokBossButtSlamBehaviour_OnBeamSpawnEvent__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01249C30, bool, IsRightMomentForButtSlam, (app::KwolokBossButtSlamBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01249EF0, void, ModifyStayAtRangeSettings, (app::KwolokBossButtSlamBehaviour * this_ptr, app::KwolokBossLocomotion_StayAtRangeSettings* settings))
    IL2CPP_REGISTER_METHODINFO(0x047321B0, KwolokBossButtSlamBehaviour_ModifyStayAtRangeSettings__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01249F40, void, ModifyMaxSpeed, (app::KwolokBossButtSlamBehaviour * this_ptr, float* speed))
    IL2CPP_REGISTER_METHODINFO(0x04768840, KwolokBossButtSlamBehaviour_ModifyMaxSpeed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01249F50, void, ModifyLookAngleChangeSpeed, (app::KwolokBossButtSlamBehaviour * this_ptr, float* speed))
    IL2CPP_REGISTER_METHODINFO(0x04773868, KwolokBossButtSlamBehaviour_ModifyLookAngleChangeSpeed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0124A050, void, ModifyAcceleration, (app::KwolokBossButtSlamBehaviour * this_ptr, float* acceleration, float* deceleration))
    IL2CPP_REGISTER_METHODINFO(0x04759148, KwolokBossButtSlamBehaviour_ModifyAcceleration__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0124A080, void, ctor, (app::KwolokBossButtSlamBehaviour * this_ptr))
} // namespace app::classes::KwolokBossButtSlamBehaviour
