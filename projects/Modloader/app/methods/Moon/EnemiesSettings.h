#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnemiesSettings.h>

namespace app::classes::Moon::EnemiesSettings {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnemiesSettings * this_ptr))
}
