#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XblAchievementMediaAsset.h>
#include <Modloader/app/structs/XblAchievementMediaAsset_1.h>
#include <Modloader/app/structs/XblAchievementReward.h>
#include <Modloader/app/structs/XblAchievementReward_1.h>
#include <Modloader/app/structs/XblAchievementTitleAssociation.h>
#include <Modloader/app/structs/XblAchievementTitleAssociation_1.h>
#include <Modloader/app/structs/XblAchievement_c.h>

namespace app::classes::XGamingRuntime::XblAchievement___c {
    IL2CPP_REGISTER_METHOD(0x030BCCA0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XblAchievement_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x030BCDE0,
        app::XblAchievementTitleAssociation*,
        __ctor_b__0_0,
        app::XblAchievement_c* this_ptr,
        app::XblAchievementTitleAssociation_1 ta
    )
    IL2CPP_REGISTER_METHOD(0x030BCFB0, app::XblAchievementMediaAsset*, __ctor_b__0_1, app::XblAchievement_c* this_ptr, app::XblAchievementMediaAsset_1 ma)
    IL2CPP_REGISTER_METHOD(0x030BD120, app::XblAchievementReward*, __ctor_b__0_2, app::XblAchievement_c* this_ptr, app::XblAchievementReward_1 reward)
} // namespace app::classes::XGamingRuntime::XblAchievement___c
