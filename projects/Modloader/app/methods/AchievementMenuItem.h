#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AchievementMenuItem.h>

namespace app::classes::AchievementMenuItem {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AchievementMenuItem * this_ptr))
}
