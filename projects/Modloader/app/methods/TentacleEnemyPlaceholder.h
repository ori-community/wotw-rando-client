#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/TentacleEnemyPlaceholder.h>

namespace app::classes::TentacleEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00CFD240, app::LegacyEntity*, Instantiate, (app::TentacleEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CFDAE0, void, ctor, (app::TentacleEnemyPlaceholder * this_ptr))
} // namespace app::classes::TentacleEnemyPlaceholder
