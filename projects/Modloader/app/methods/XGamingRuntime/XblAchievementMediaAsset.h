#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XblAchievementMediaAsset.h>
#include <Modloader/app/structs/XblAchievementMediaAsset_1.h>

namespace app::classes::XGamingRuntime::XblAchievementMediaAsset {
    IL2CPP_REGISTER_METHOD(0x030BD290, void, ctor, (app::XblAchievementMediaAsset * this_ptr, app::XblAchievementMediaAsset_1 media_asset))
}
