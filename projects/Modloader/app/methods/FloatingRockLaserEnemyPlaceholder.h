#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/FloatingRockLaserEnemyPlaceholder.h>

namespace app::classes::FloatingRockLaserEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x01276C00, app::LegacyEntity*, Instantiate, (app::FloatingRockLaserEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01277450, void, ctor, (app::FloatingRockLaserEnemyPlaceholder * this_ptr))
} // namespace app::classes::FloatingRockLaserEnemyPlaceholder
