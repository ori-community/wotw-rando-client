#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArrowHitData.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/EnemyShield.h>
#include <Modloader/app/structs/EnemyShield_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::EnemyShield {
    IL2CPP_REGISTER_METHOD(0x00C838F0, bool, IsProtecting, app::EnemyShield* shield)
    IL2CPP_REGISTER_METHOD(0x00C839B0, bool, DoesExist, app::EnemyShield* shield)
    IL2CPP_REGISTER_METHOD(0x00C83A70, app::Vector2, GetShieldDirection, app::EnemyShield* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C83D10, void, Awake, app::EnemyShield* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C840D0, void, OnDestroy, app::EnemyShield* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C84360, void, ResolveDamage, app::EnemyShield* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x00C844F0, void, SetHasShield, app::EnemyShield* this_ptr, bool has_shield)
    IL2CPP_REGISTER_METHOD(0x00C84500, void, SetProtectionState, app::EnemyShield* this_ptr, bool is_on)
    IL2CPP_REGISTER_METHOD(0x00C84550, void, OnEntityReset, app::EnemyShield* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C845F0, void, OnResolveDamageProtecting, app::EnemyShield* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x00C84770, app::Vector2, GetDamageToProtectionConeOriginOffset, app::EnemyShield* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x00C84A00, void, ChangeState, app::EnemyShield* this_ptr, app::EnemyShield_State__Enum state)
    IL2CPP_REGISTER_METHOD(0x00C84CD0, void, OnShieldDestroyed, app::EnemyShield* this_ptr, app::DamageResult* damage_result)
    IL2CPP_REGISTER_METHOD(0x00C85000, void, SetShieldModelVisibility, app::EnemyShield* this_ptr, bool on)
    IL2CPP_REGISTER_METHOD(0x00C85170, bool, ShouldReflectArrow, app::EnemyShield* this_ptr, app::ArrowHitData arrow_hit_data)
    IL2CPP_REGISTER_METHOD(
        0x00C85370,
        app::Vector3,
        ProcessDamagePosition,
        app::EnemyShield* this_ptr,
        app::Vector3 damage_origin_point,
        app::DamageType__Enum damage_type
    )
    IL2CPP_REGISTER_METHOD(0x00C85650, void, OnDrawGizmos, app::EnemyShield* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C858E0, void, ctor, app::EnemyShield* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C85CD0, void, _OnShieldDestroyed_b__38_0, app::EnemyShield* this_ptr)
} // namespace app::classes::EnemyShield
