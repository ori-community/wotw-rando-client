#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LegacySwarmEnemySettings.h>

namespace app::classes::LegacySwarmEnemySettings {
    IL2CPP_REGISTER_METHOD(0x00A3BFD0, void, ctor, app::LegacySwarmEnemySettings* this_ptr)
}
