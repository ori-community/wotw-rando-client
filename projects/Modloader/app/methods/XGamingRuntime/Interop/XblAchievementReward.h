#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Func_2_XGamingRuntim_Intero_XblAchievementMediaAsse_XGamingRuntim_XblAchievementMediaAsse_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_.h>
#include <Modloader/app/structs/XblAchievementMediaAsset.h>
#include <Modloader/app/structs/XblAchievementReward_1__Boxed.h>

namespace app::classes::XGamingRuntime::Interop::XblAchievementReward {
    IL2CPP_REGISTER_METHOD(0x0012DA60, app::Object*, GetMediaAsset_1, (app::XblAchievementReward_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_* ctor))
    IL2CPP_REGISTER_METHOD(0x0012DA60, app::XblAchievementMediaAsset*, GetMediaAsset_2, (app::XblAchievementReward_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_XGamingRuntime_XblAchievementMediaAsset_* ctor))
} // namespace app::classes::XGamingRuntime::Interop::XblAchievementReward
