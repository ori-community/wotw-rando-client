#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacySwarmEnemyLootSettings.h>

namespace app::classes::LegacySwarmEnemyLootSettings {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::LegacySwarmEnemyLootSettings * this_ptr))
}
