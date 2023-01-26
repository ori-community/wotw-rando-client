#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XblAchievementsResultHandle.h>
#include <Modloader/app/structs/XblAchievementsResultHandle_1.h>

namespace app::classes::XGamingRuntime::XblAchievementsResultHandle {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::XblAchievementsResultHandle * this_ptr, app::XblAchievementsResultHandle_1 interop_handle))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XblAchievementsResultHandle_1, get_InteropHandle, (app::XblAchievementsResultHandle * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_InteropHandle, (app::XblAchievementsResultHandle * this_ptr, app::XblAchievementsResultHandle_1 value))
} // namespace app::classes::XGamingRuntime::XblAchievementsResultHandle
