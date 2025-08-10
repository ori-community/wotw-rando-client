#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LaserShieldDamageReceiver.h>
#include <Modloader/app/structs/LaserShieldPieceProjectile.h>
#include <Modloader/app/structs/LaserShieldRotationController.h>
#include <Modloader/app/structs/LaserShooterRockSpawnPoint.h>

namespace app::classes::LaserShooterRockSpawnPoint {
    IL2CPP_REGISTER_METHOD(
        0x00F207A0,
        void,
        PlaySpawn,
        app::LaserShooterRockSpawnPoint* this_ptr,
        app::LaserShieldDamageReceiver* piece,
        float projectile_speed,
        app::LaserShieldPieceProjectile* projectile_prefab,
        app::LaserShieldRotationController* shield_controller
    )
    IL2CPP_REGISTER_METHOD(0x00F209A0, void, Spawn, app::LaserShooterRockSpawnPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F20D40, void, OnDisable, app::LaserShooterRockSpawnPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F20D50, void, ClearSpawnTrigger, app::LaserShooterRockSpawnPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F20F00, void, ClearSpawnTriggerSafe, app::LaserShooterRockSpawnPoint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::LaserShooterRockSpawnPoint* this_ptr)
} // namespace app::classes::LaserShooterRockSpawnPoint
