#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XblAchievementTimeWindow.h>
#include <Modloader/app/structs/XblAchievementTimeWindow_1.h>

namespace app::classes::XGamingRuntime::XblAchievementTimeWindow {
    IL2CPP_REGISTER_METHOD(0x030BE140, void, ctor, (app::XblAchievementTimeWindow * this_ptr, app::XblAchievementTimeWindow_1 interop_time_window))
}
