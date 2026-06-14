#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Func_2_XGamingRuntim_Intero_XblAchievementRequiremen_XGamingRunti_XblAchievementRequireme_.h>
#include <Modloader/app/structs/Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_.h>
#include <Modloader/app/structs/Object__Array.h>
#include <Modloader/app/structs/XblAchievementProgression_1__Boxed.h>
#include <Modloader/app/structs/XblAchievementRequirement__Array.h>

namespace app::classes::XGamingRuntime::Interop::XblAchievementProgression {
    IL2CPP_REGISTER_METHOD(
        0x002406A0,
        app::Object__Array*,
        GetRequirements_1,
        app::XblAchievementProgression_1__Boxed* this_ptr,
        app::Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_* ctor
    )
    IL2CPP_REGISTER_METHOD(
        0x002406A0,
        app::XblAchievementRequirement__Array*,
        GetRequirements_2,
        app::XblAchievementProgression_1__Boxed* this_ptr,
        app::Func_2_XGamingRuntime_Interop_XblAchievementRequirement_XGamingRuntime_XblAchievementRequirement_* ctor
    )
} // namespace app::classes::XGamingRuntime::Interop::XblAchievementProgression
