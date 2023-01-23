#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinDashAttack.h>
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/SeinDashAttack_State__Enum.h>
#include <Modloader/app/structs/IChargeDashAttackable.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>

namespace app::classes::SeinDashAttack {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EE340, void, add_OnDashEvent, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x006EE480, void, remove_OnDashEvent, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x006EE5C0, void, add_OnWallDashEvent, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x006EE700, void, remove_OnWallDashEvent, (app::Action * value))
    IL2CPP_REGISTER_METHOD(0x006EE840, bool, get_HasEnoughEnergy, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EE880, void, Serialize, (app::SeinDashAttack * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x006EE8B0, void, OnExit, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EE8C0, void, ReturnToNormal, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EEBF0, void, SpendEnergy, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EEC30, void, RestoreEnergy, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EEC70, void, OnSetReferenceToSein, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EED50, void, UpdateCharacterState, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EED60, void, Start, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EF030, void, OnDestroy, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EF300, void, OnResetAirLimits, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04729898, SeinDashAttack_OnResetAirLimits__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006EF310, void, OnDamageKickback, (app::SeinDashAttack * this_ptr, app::Damage* dmg))
    IL2CPP_REGISTER_METHODINFO(0x047108F8, SeinDashAttack_OnDamageKickback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006EF330, bool, get_IsStatePerforming, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EF330, bool, get_IsDashingOrChangeDashing, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EF370, void, ChangeState, (app::SeinDashAttack * this_ptr, app::SeinDashAttack_State__Enum state))
    IL2CPP_REGISTER_METHOD(0x006EF460, app::IChargeDashAttackable*, get_FindClosestAttackable, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EF870, void, AttackNearbyEnemies, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F0070, void, PerformDash_1, (app::SeinDashAttack * this_ptr, app::MoonAnimation* dash, app::SoundProvider* dash_sound))
    IL2CPP_REGISTER_METHOD(0x006F0940, void, PerformDash_2, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F0AE0, void, PerformWallDash, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F0C10, void, PerformDashIntoWall, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F0F10, bool, KeepDashIntoWallAnimationPlaying, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04713CD0, SeinDashAttack_KeepDashIntoWallAnimationPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006F0F70, void, PerformChargeDash, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F1360, bool, HasChargeDashSkill, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F13C0, bool, HasAirDashSkill, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F1420, bool, CanChargeDash, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F1540, void, CompleteChargeEffect, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F1670, void, UpdateTargetHighlight, (app::SeinDashAttack * this_ptr, app::IChargeDashAttackable* target))
    IL2CPP_REGISTER_METHOD(0x006F1830, bool, KeepDashAnimationPlaying, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474D2C0, SeinDashAttack_KeepDashAnimationPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x006F1830, bool, KeepChargeDashAnimationPlaying, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005CB580, bool, AgainstWall, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F18D0, bool, CanPerformNormalDash, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F19C0, bool, get_DashHasCooledDown, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F1A20, bool, CanPerformDashIntoWall, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F1AA0, bool, CanWallDash, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F1CA0, void, UpdateNormal, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F2350, void, ShowNotEnoughEnergy, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F2560, void, UpdateDashing, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F2B50, void, StickOntoGround, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F2C70, void, UpdateChargeDashing, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F3280, void, UpdateState, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F34D0, void, StopDashing, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F35E0, bool, RaycastTest, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006EF300, void, ResetDashLimit, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F3AE0, void, ctor, (app::SeinDashAttack * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006F3CC0, void, cctor, ())
} // namespace app::classes::SeinDashAttack
