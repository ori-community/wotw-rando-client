#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Polygon_1.h>
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/DamageDealer_OverrideInfo.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/VirtualTimelineRepresentationGroup__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DamageDealer {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, ShouldUseDamageByAreaResolver, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC2FA0, float, get_Damage, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00449EB0, void, set_Damage, (app::DamageDealer * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00DC3070, bool, get_Activated, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC31D0, void, set_Activated, (app::DamageDealer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::Collider*, get_Collider, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64220, app::Polygon_1*, get_Polygon, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC31E0, app::DamageLayerMask__Enum, get_EffectiveDamageLayerMask, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_BypassPlayerInvincibility, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3200, float, AmountOfDamage, (app::DamageDealer * this_ptr, app::GameObject* target))
    IL2CPP_REGISTER_METHOD(0x00DC3360, void, ResetActivation, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3490, void, SetOverrideDamageLayerMask, (app::DamageDealer * this_ptr, app::DamageLayerMask__Enum layer))
    IL2CPP_REGISTER_METHOD(0x00B3A3B0, void, ResetDamageLayerMaskOverride, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC34A0, void, Prewarm, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC34B0, void, CacheSerializedComponents, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3620, void, Awake, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3660, void, OnPoolDespawned, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3720, void, Start, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC38C0, void, InitializeContinuosDamageFlag, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC38F0, void, OnEnable, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3900, void, OnDisable, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3910, bool, get_NeedsUpdateTickEveryFrame, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3920, void, Register, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC39D0, void, RegisterIfNecessary, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3A10, void, Unregister, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC3AC0, void, AddOverride, (app::DamageDealer * this_ptr, app::DamageDealer_OverrideInfo* info))
    IL2CPP_REGISTER_METHOD(0x00DC3B80, void, RemoveOverride, (app::DamageDealer * this_ptr, app::DamageDealer_OverrideInfo* info))
    IL2CPP_REGISTER_METHOD(0x00DC3C20, void, OnFixedUpdate, (app::DamageDealer * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00DC3F20, void, AddUniqueInsideCollider, (app::DamageDealer * this_ptr, app::Collider* col))
    IL2CPP_REGISTER_METHOD(0x00DC4030, void, RemoveInsideCollider, (app::DamageDealer * this_ptr, app::Collider* col))
    IL2CPP_REGISTER_METHOD(0x00DC40D0, bool, get_ShouldHandleInsideCollisions, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC4240, void, HandleInsideCollisions, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC4530, void, OnEnterPhysicsTrigger, (app::DamageDealer * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00DC4600, void, OnTriggerEnter, (app::DamageDealer * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00DC4870, void, OnTriggerExit, (app::DamageDealer * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00DC4A70, void, OnTriggerStay, (app::DamageDealer * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00DC4B60, void, ApplyDamageToCollider, (app::DamageDealer * this_ptr, app::Collider* collider))
    IL2CPP_REGISTER_METHOD(0x00DC4D50, void, OnCollisionEnter, (app::DamageDealer * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00DC4E30, void, OnCollisionStay, (app::DamageDealer * this_ptr, app::Collision* collision))
    IL2CPP_REGISTER_METHOD(0x00DC4F20, void, OnCollision, (app::DamageDealer * this_ptr, app::GameObject* collided))
    IL2CPP_REGISTER_METHOD(0x00DC5260, bool, CanCollidersPenetrate, (app::Collider * a, app::Collider* b))
    IL2CPP_REGISTER_METHOD(0x00DC53C0, bool, ColliderContainsPoint, (app::Collider * collider, app::Vector3 point_world))
    IL2CPP_REGISTER_METHOD(0x00DC57F0, void, DealDamage, (app::DamageDealer * this_ptr, app::GameObject* target, app::DamageOwner* damage_owner))
    IL2CPP_REGISTER_METHOD(0x00DC6D90, void, OnDamageTicked, (app::DamageDealer * this_ptr, app::DamageResult result))
    IL2CPP_REGISTER_METHODINFO(0x04757480, DamageDealer_OnDamageTicked__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x004F4750, app::GameObject*, get_VirtualTimelineTarget, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420230, app::VirtualTimelineRepresentationGroup__Enum, get_VirtualTimelineGroup, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC7010, app::String*, get_NameDisplayedOnClip, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC70E0, void, ctor, (app::DamageDealer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DC7670, void, cctor, ())
} // namespace app::classes::DamageDealer
