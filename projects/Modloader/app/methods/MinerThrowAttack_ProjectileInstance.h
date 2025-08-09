#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MinerThrowAttack_ProjectileInstance.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::MinerThrowAttack_ProjectileInstance {
    IL2CPP_REGISTER_METHOD(0x014524A0, void, Clear, app::MinerThrowAttack_ProjectileInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00971AF0, void, SetPosition, app::MinerThrowAttack_ProjectileInstance* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(
        0x014524B0,
        void,
        Populate,
        app::MinerThrowAttack_ProjectileInstance* this_ptr,
        app::GameObject* obj,
        float projectile_gravity,
        float projectile_damage
    )
    IL2CPP_REGISTER_METHOD(0x01452640, bool, CanThrow, app::MinerThrowAttack_ProjectileInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01452710,
        void,
        Throw,
        app::MinerThrowAttack_ProjectileInstance* this_ptr,
        app::Vector2 force,
        app::Vector2 start_point,
        app::EnemyEntity* miner
    )
    IL2CPP_REGISTER_METHOD(0x01452960, void, ActivateProjectile, app::MinerThrowAttack_ProjectileInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01452A30, void, DeactiveProjectile, app::MinerThrowAttack_ProjectileInstance* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MinerThrowAttack_ProjectileInstance* this_ptr)
} // namespace app::classes::MinerThrowAttack_ProjectileInstance
