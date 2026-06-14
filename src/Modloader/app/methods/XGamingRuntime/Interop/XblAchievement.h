#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_XGamingRunt_Inte_XblAchievementTitleAssociat_XGamingRun_XblAchievementTitleAssocia_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntim_Intero_XblAchievementMediaAsse_XGamingRuntim_XblAchievementMediaAsse_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementReward_XGamingRuntime_XblAchievementReward_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/XblAchievementMediaAsset__Array.h>
#include <Modloader/app/structs/XblAchievementReward__Array.h>
#include <Modloader/app/structs/XblAchievementTitleAssociation__Array.h>
#include <Modloader/app/structs/XblAchievement_1__Boxed.h>

namespace app::classes::XGamingRuntime::Interop::XblAchievement {
    IL2CPP_REGISTER_METHOD(0x00244C80, app::String__Array*, GetPlatformsAvailableOn, app::XblAchievement_1__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00240680,
        app::Object__Array*,
        GetTitleAssociations_1,
        app::XblAchievement_1__Boxed* this_ptr,
        app::Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x00240640,
        app::Object__Array*,
        GetMediaAssets_1,
        app::XblAchievement_1__Boxed* this_ptr,
        app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x00240660,
        app::Object__Array*,
        GetRewards_1,
        app::XblAchievement_1__Boxed* this_ptr,
        app::Func_2_XGamingRuntime_Interop_XblAchievementReward_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x00240680,
        app::XblAchievementTitleAssociation__Array*,
        GetTitleAssociations_2,
        app::XblAchievement_1__Boxed* this_ptr,
        app::Func_2_XGamingRuntime_Interop_XblAchievementTitleAssociation_XGamingRuntime_XblAchievementTitleAssociation_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x00240640,
        app::XblAchievementMediaAsset__Array*,
        GetMediaAssets_2,
        app::XblAchievement_1__Boxed* this_ptr,
        app::Func_2_XGamingRuntime_Interop_XblAchievementMediaAsset_XGamingRuntime_XblAchievementMediaAsset_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x00240660,
        app::XblAchievementReward__Array*,
        GetRewards_2,
        app::XblAchievement_1__Boxed* this_ptr,
        app::Func_2_XGamingRuntime_Interop_XblAchievementReward_XGamingRuntime_XblAchievementReward_* ctor
    )
} // namespace app::classes::XGamingRuntime::Interop::XblAchievement
