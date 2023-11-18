#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SDK_XBL_c.h>
#include <Modloader/app/structs/XblAchievement.h>
#include <Modloader/app/structs/XblAchievement_1.h>

namespace app::classes::XGamingRuntime::SDK_XBL___c {
    IL2CPP_REGISTER_METHOD(0x030BA450, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SDK_XBL_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BA590, app::XblAchievement*, _XblAchievementsResultGetAchievements_b__66_0, (app::SDK_XBL_c * this_ptr, app::XblAchievement_1 a))
} // namespace app::classes::XGamingRuntime::SDK_XBL___c
