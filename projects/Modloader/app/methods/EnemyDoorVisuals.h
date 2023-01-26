#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnemyDoorVisuals.h>

namespace app::classes::EnemyDoorVisuals {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Start, (app::EnemyDoorVisuals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Update, (app::EnemyDoorVisuals * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::EnemyDoorVisuals * this_ptr))
} // namespace app::classes::EnemyDoorVisuals
