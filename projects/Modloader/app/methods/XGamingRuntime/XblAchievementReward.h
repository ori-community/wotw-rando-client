#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XblAchievementReward.h>
#include <Modloader/app/structs/XblAchievementReward_1.h>

namespace app::classes::XGamingRuntime::XblAchievementReward {
    IL2CPP_REGISTER_METHOD(0x030BDA90, void, ctor, (app::XblAchievementReward * this_ptr, app::XblAchievementReward_1 interop_reward))
}
