#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinLockOnSpell {
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsBlindForest, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00892870, void, ChangeState, (app::SeinLockOnSpell * this_ptr, app::SeinLockOnSpell_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x008928B0, void, OnSetReferenceToSein, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008928E0, void, OnDestroy, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008929C0, bool, get_IsStatePerforming, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008929D0, void, UpdateCharacterState, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00892A00, void, BeginFiring, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008930C0, void, OnLockOnFromGroundAnimationEnd, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047276D8, SeinLockOnSpell_OnLockOnFromGroundAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008933F0, void, OnLockOnFromAirAnimationEnd, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047705F8, SeinLockOnSpell_OnLockOnFromAirAnimationEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, FinishFiring, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00893720, void, UpdateFiring, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00893B20, void, UpdateNormalState, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00893E20, void, UpdateTaggingState, (app::SeinLockOnSpell * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008944B0, void, Tag, (app::SeinLockOnSpell * this_ptr, app::IAttackable* attackable))
    IL2CPP_REGISTER_METHOD(0x00894680, void, Untag, (app::SeinLockOnSpell * this_ptr, app::IAttackable* attackable))
    IL2CPP_REGISTER_METHOD(0x008947E0, void, OnProcessRootMotionLockOnFromGround, (app::SeinLockOnSpell * this_ptr, app::Vector3 root_velocity))
    IL2CPP_REGISTER_METHODINFO(0x0478F080, SeinLockOnSpell_OnProcessRootMotionLockOnFromGround__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00894A30, void, OnProcessRootMotionLockOnFromAir, (app::SeinLockOnSpell * this_ptr, app::Vector3 root_velocity))
    IL2CPP_REGISTER_METHODINFO(0x04724E70, SeinLockOnSpell_OnProcessRootMotionLockOnFromAir__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00894C80, void, ctor, (app::SeinLockOnSpell * this_ptr))
} // namespace app::classes::SeinLockOnSpell
