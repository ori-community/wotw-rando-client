#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Firefly.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Firefly {
    IL2CPP_REGISTER_METHOD(0x009CA200, bool, get_IsAlive, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125CEB0, app::OrbSpawner*, get_OrbSpawner, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125CF80, void, OnSpawn, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125D070, void, StartFlickering, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125D140, void, Die, (app::Firefly * this_ptr, bool spawn_orbs))
    IL2CPP_REGISTER_METHOD(0x0125D240, void, DieOffscreen, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125D340, void, OnEnable, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125D490, void, OnDisable, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125D530, void, Awake, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_BashPriority, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD60, app::Action_1_Boolean_*, get_OnDeathHiveAction, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD70, void, set_OnDeathHiveAction, (app::Firefly * this_ptr, app::Action_1_Boolean_* value))
    IL2CPP_REGISTER_METHOD(0x0125DBD0, void, InitFirefly, (app::Firefly * this_ptr, app::Vector3 start_position, app::Vector3 end_position))
    IL2CPP_REGISTER_METHOD(0x0125DEB0, void, UpdateFirefly, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125E760, void, SetSpriteSide, (app::Firefly * this_ptr, bool right))
    IL2CPP_REGISTER_METHOD(0x0125E8E0, float, GetSpeedFactor, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125EBB0, void, UpdateFireflyTarget, (app::Firefly * this_ptr, app::Vector3 target))
    IL2CPP_REGISTER_METHOD(0x0125EBD0, app::Vector3, InternalIdle, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125ED60, void, SpawnOrbs, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125EE40, void, KillFirefly, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125EF80, void, KillImmediately, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByMelee, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHomingMissiled, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125F0D0, bool, InsideFrustum, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125F380, void, StopAllTimelines, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005B0220, app::IDamageReciever__Array*, get_AffectedReceivers, (app::Firefly * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0125F520, void, ctor, (app::Firefly * this_ptr))
} // namespace app::classes::Firefly
