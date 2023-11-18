#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RockyEnemyShootingState.h>
#include <Modloader/app/structs/RockyEnemy.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RockyEnemyShootingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::RockyEnemyShootingState * this_ptr, app::RockyEnemy* enemy))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateState, (app::RockyEnemyShootingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013634D0, void, OnEnter, (app::RockyEnemyShootingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013635A0, void, ShootProjectile, (app::RockyEnemyShootingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01363A90, app::Vector3, get_ProjectileSpawnerPositionToPlayerPosition, (app::RockyEnemyShootingState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01363C80, void, SpawnProjectile, (app::RockyEnemyShootingState * this_ptr, app::Vector3 speed))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnExit, (app::RockyEnemyShootingState * this_ptr))
} // namespace app::classes::RockyEnemyShootingState
