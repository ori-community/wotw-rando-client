#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/DashOwlEnemyPlaceholder.h>

namespace app::classes::DashOwlEnemyPlaceholder {
    IL2CPP_REGISTER_METHOD(0x00DD02C0, app::LegacyEntity*, Instantiate, (app::DashOwlEnemyPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00DD0900, void, ctor, (app::DashOwlEnemyPlaceholder * this_ptr))
} // namespace app::classes::DashOwlEnemyPlaceholder
