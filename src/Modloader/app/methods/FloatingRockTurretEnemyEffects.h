#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FloatingRockTurretEnemyEffects.h>

namespace app::classes::FloatingRockTurretEnemyEffects {
    IL2CPP_REGISTER_METHOD(0x01279B70, void, BeginCharge, app::FloatingRockTurretEnemyEffects* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01279CE0, void, StopCharge, app::FloatingRockTurretEnemyEffects* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnShoot, app::FloatingRockTurretEnemyEffects* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::FloatingRockTurretEnemyEffects* this_ptr)
} // namespace app::classes::FloatingRockTurretEnemyEffects
