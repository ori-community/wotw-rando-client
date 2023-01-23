#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/FloatingRockTurretEnemyPlaceholder.h>

namespace app::classes::FloatingRockTurretEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x01279E50, app::LegacyEntity*, Instantiate, (app::FloatingRockTurretEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0127A580, void, ctor, (app::FloatingRockTurretEnemyPlaceholder * this_ptr))
} // namespace app::classes::FloatingRockTurretEnemyPlaceholder
