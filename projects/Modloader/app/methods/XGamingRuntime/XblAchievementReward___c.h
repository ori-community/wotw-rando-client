#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XblAchievementReward_c.h>
#include <Modloader/app/structs/XblAchievementMediaAsset.h>
#include <Modloader/app/structs/XblAchievementMediaAsset_1.h>

namespace app::classes::XGamingRuntime::XblAchievementReward___c {
    IL2CPP_REGISTER_METHOD(0x030BDE90, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XblAchievementReward_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BDFD0, app::XblAchievementMediaAsset*, __ctor_b__0_0, (app::XblAchievementReward_c * this_ptr, app::XblAchievementMediaAsset_1 ma))
} // namespace app::classes::XGamingRuntime::XblAchievementReward___c
