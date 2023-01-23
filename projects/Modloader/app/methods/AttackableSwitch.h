#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AttackableSwitch.h>
#include <Modloader/app/structs/StateChangeDefinition.h>
#include <Modloader/app/structs/AttackableSwitchSetupData.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/AttackableSwitch_AttackTypes__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/ArrowHitData.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>

namespace app::classes::AttackableSwitch {
    IL2CPP_REGISTER_METHOD(0x00854340, bool, get_Activated, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_Activated, (app::AttackableSwitch * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x008543B0, bool, ShouldCreateCheckpoint, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008543C0, void, Reset, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854430, void, ToggleSwitch, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854550, void, TurnOn, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008545C0, void, TurnOff, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854630, void, Perform, (app::AttackableSwitch * this_ptr, app::StateChangeDefinition* def, app::AttackableSwitchSetupData* setup_data))
    IL2CPP_REGISTER_METHOD(0x00854770, void, FixedUpdate, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsDead, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeChargeFlamed, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeChargeDashed, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeGrenaded, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeStomped, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeBashed, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeSpiritFlamed, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, IsStompBouncable, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeLevelUpBlasted, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeSpiritSlashed, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeHeavySpiritSlashed, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeSpiritLeashed, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeHomingMissiled, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeTrapped, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeSpiritSpeared, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeHitByBow, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeHitByHammerHandle, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, CanBeHitByMelee, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00854880, bool, get_CanBeHit, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008548D0, void, OnRecieveDamage, (app::AttackableSwitch * this_ptr, app::Damage* damage))
    IL2CPP_REGISTER_METHOD(0x00854B10, bool, DoesReactTo, (app::AttackableSwitch * this_ptr, app::DamageType__Enum damage_type))
    IL2CPP_REGISTER_METHOD(0x00854DA0, bool, Match, (app::AttackableSwitch * this_ptr, app::AttackableSwitch_AttackTypes__Enum attack, app::DamageType__Enum damage_type))
    IL2CPP_REGISTER_METHOD(0x00854F10, void, OnRestoreCheckpoint, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725660, AttackableSwitch_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00854F50, void, Awake, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008552D0, void, CollectTransitions, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855320, bool, get_IsOnActivatePerforming, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855400, void, OnDestroy, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00762910, bool, get_IsSuspended, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008555F0, void, set_IsSuspended, (app::AttackableSwitch * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00855600, app::SuspendableMask__Enum, get_Mask, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855610, void, set_Mask, (app::AttackableSwitch * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_SpiritSlashPriority, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritSlashHighlight, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSpiritSlashDehighlight, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, GetSpiritSlashDamageAmount, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_BashPriority, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008556D0, int32_t, get_BowPriority, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008556E0, bool, get_BowEnableAutoTarget, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_BowAutoTargetPosition, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldArrowBeReflected, (app::AttackableSwitch * this_ptr, app::ArrowHitData hit_data))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_HammerPriority, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HammerEnableAutoTarget, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, ShouldArrowExplode, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, CanDetonateProjectiles, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855730, bool, get_IsOn, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00855740, app::IDesiredUberState*, GetRequirementsForTimeline, (app::AttackableSwitch * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x002FBD00, app::Action_1_Damage_*, get_DamageReceived, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBD10, void, set_DamageReceived, (app::AttackableSwitch * this_ptr, app::Action_1_Damage_* value))
    IL2CPP_REGISTER_METHOD(0x002FBD20, app::IDamageReciever__Array*, get_AffectedReceivers, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008559C0, void, ctor, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, (app::AttackableSwitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, (app::AttackableSwitch * this_ptr))
} // namespace app::classes::AttackableSwitch
