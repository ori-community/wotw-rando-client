#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/FishEnemyPlaceholder.h>

namespace app::classes::FishEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0126B520, app::LegacyEntity*, Instantiate, (app::FishEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0126BB00, void, ctor, (app::FishEnemyPlaceholder * this_ptr))
} // namespace app::classes::FishEnemyPlaceholder
