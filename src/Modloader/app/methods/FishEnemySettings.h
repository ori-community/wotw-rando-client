#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FishEnemySettings.h>

namespace app::classes::FishEnemySettings {
    IL2CPP_REGISTER_METHOD(0x0126BBC0, void, ctor, app::FishEnemySettings* this_ptr)
}
