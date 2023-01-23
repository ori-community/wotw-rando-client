#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/SpitterEnemyPlaceholder.h>

namespace app::classes::SpitterEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0099F850, app::LegacyEntity*, Instantiate, (app::SpitterEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x009A0030, void, ctor, (app::SpitterEnemyPlaceholder * this_ptr))
} // namespace app::classes::SpitterEnemyPlaceholder
