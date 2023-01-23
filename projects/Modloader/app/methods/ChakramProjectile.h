#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ChakramProjectile.h>
#include <Modloader/app/structs/SeinChakramSpell.h>
#include <Modloader/app/structs/ChakramProjectile_ChakramState__Enum.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/IBowAttackable.h>
#include <Modloader/app/structs/Projectile_ExplodeCollisionInfo.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Collider.h>

namespace app::classes::ChakramProjectile {
    IL2CPP_REGISTER_METHOD(0x0103CD30, void, Awake, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103CEB0, void, OnDisable, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103CFA0, void, Initialize, (app::ChakramProjectile * this_ptr, app::SeinChakramSpell* sein_chakram_spell))
    IL2CPP_REGISTER_METHOD(0x0103D280, void, FixedUpdate, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103D300, void, ChangeState, (app::ChakramProjectile * this_ptr, app::ChakramProjectile_ChakramState__Enum state))
    IL2CPP_REGISTER_METHOD(0x0103D970, void, UpdateForward, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103E050, void, UpdateHold, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103E230, void, UpdateSpin, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103E840, void, UpdateReturn, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103F220, bool, TrySpin, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103F350, void, TryStayCloseToTarget, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103F880, void, ExplodeProjectile, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103FB70, void, OnRicochet, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0103FCE0, void, OnDamageDealt, (app::ChakramProjectile * this_ptr, app::DamageDealer* damage_dealer, app::DamageResult damage_result))
    IL2CPP_REGISTER_METHOD(0x01040060, app::IBowAttackable*, GetClosestTarget, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010406F0, void, PlayVfx_1, (app::ChakramProjectile * this_ptr, app::Projectile_ExplodeCollisionInfo* collision))
    IL2CPP_REGISTER_METHOD(0x01040890, void, PlayVfx_2, (app::ChakramProjectile * this_ptr, app::Vector3 location, app::Vector2 normal, app::SurfaceMaterialType__Enum surface_material_type))
    IL2CPP_REGISTER_METHOD(0x01040A00, void, UpdateDamage, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01040AA0, void, SetDamageOwner, (app::ChakramProjectile * this_ptr, app::DamageOwner* damage_owner))
    IL2CPP_REGISTER_METHOD(0x01040AD0, void, OnTriggerEnter, (app::ChakramProjectile * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x01040C90, void, DestroyProjectile, (app::ChakramProjectile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01040DA0, void, ctor, (app::ChakramProjectile * this_ptr))
} // namespace app::classes::ChakramProjectile
