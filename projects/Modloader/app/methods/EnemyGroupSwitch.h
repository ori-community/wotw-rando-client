#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnemyGroupSwitch.h>

namespace app::classes::EnemyGroupSwitch {
    IL2CPP_REGISTER_METHOD(0x00C81E10, void, Start, app::EnemyGroupSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C81E90, void, Update, app::EnemyGroupSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C82030, void, SetState, app::EnemyGroupSwitch* this_ptr, bool state)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::EnemyGroupSwitch* this_ptr)
} // namespace app::classes::EnemyGroupSwitch
