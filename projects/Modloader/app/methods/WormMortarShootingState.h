#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MortarWormDirectionalAnimations.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/WormEnemy.h>
#include <Modloader/app/structs/WormMortarShootingState.h>

namespace app::classes::WormMortarShootingState {
    IL2CPP_REGISTER_METHOD(
        0x0058EEA0,
        void,
        ctor,
        app::WormMortarShootingState* this_ptr,
        app::WormEnemy* worm,
        app::MortarWormDirectionalAnimations* shoot,
        app::PrefabSpawner* shoot_effect,
        app::SoundSource* shoot_sound,
        app::ProjectileSpawner* projectile_spawner,
        float shoot_delay,
        float projectile_damage
    )
    IL2CPP_REGISTER_METHOD(0x0058EEE0, void, OnEnter, app::WormMortarShootingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058F360, void, OnExit, app::WormMortarShootingState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0058F370, void, UpdateState, app::WormMortarShootingState* this_ptr)
} // namespace app::classes::WormMortarShootingState
