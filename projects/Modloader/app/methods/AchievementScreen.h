#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AchievementScreen.h>

namespace app::classes::AchievementScreen {
    IL2CPP_REGISTER_METHOD(0x004B4180, void, ctor, app::AchievementScreen* this_ptr)
}
