#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/SpiritGrenade.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SpiritGrenade {
    IL2CPP_REGISTER_METHOD(0x003FBE50, bool, get_IsFracturedPiece, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FBE60, void, set_IsFracturedPiece, app::SpiritGrenade* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_CurrentLifeTime, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D558D0, void, OnEnable, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D561F0, void, OnDisable, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D56760, void, RestoreState, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D567C0, void, AssureVisualsCached, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D56880, void, ResetVisuals, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D56A00, bool, get_IsInsideSpiritTorch, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_Position, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006514B0, bool, IsDead, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeFlamed, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeChargeDashed, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGrenaded, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeStomped, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D56AA0, bool, CanBeBashed, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritFlamed, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsStompBouncable, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeLevelUpBlasted, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSlashed, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHeavySpiritSlashed, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritLeashed, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHomingMissiled, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTrapped, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeSpiritSpeared, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByBow, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeHitByHammerHandle, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeHitByMelee, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnEnterBash, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashHighlight, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnBashDehighlight, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeTeleportedByBeacon, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanBeGlowed, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_BashPriority, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D56AE0, void, OnRecieveDamage, app::SpiritGrenade* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x003FC040, bool, get_IsSuspended, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x009DA5F0, void, set_IsSuspended, app::SpiritGrenade* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x006515B0, app::SuspendableMask__Enum, get_Mask, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D571B0, void, set_Mask, app::SpiritGrenade* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00D57270, void, Awake, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D57480, void, Start, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D574B0, bool, ShouldDealDamage, app::SpiritGrenade* this_ptr, app::GameObject* target)
    IL2CPP_REGISTER_METHOD(0x00D575D0, void, OnDamageDealt, app::SpiritGrenade* this_ptr, app::DamageDealer* damage_dealer, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x00D57870, void, Invalidate, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D57880, bool, get_ShouldExplodeOnImpact, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D579E0, void, Explode, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D57E50, void, SetTrajectory, app::SpiritGrenade* this_ptr, app::Vector2 speed)
    IL2CPP_REGISTER_METHOD(0x00D57F80, void, FixedUpdate, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D58BB0, void, OnSpring, app::SpiritGrenade* this_ptr, float height, app::Vector2 direction)
    IL2CPP_REGISTER_METHOD(0x00D58D10, void, OnCollisionEnter, app::SpiritGrenade* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, get_HammerPriority, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HammerEnableAutoTarget, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBD40, app::IDamageReciever__Array*, get_AffectedReceivers, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D58D20, void, ctor, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, IDamageReciever_get_gameObject, app::SpiritGrenade* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, IDamageReciever_get_transform, app::SpiritGrenade* this_ptr)
} // namespace app::classes::SpiritGrenade
