#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XGamingRuntime::Interop::XblAchievementProgression {
    IL2CPP_REGISTER_METHOD(0x002406A0, app::Object__Array*, GetRequirements_1, (app::XblAchievementProgression_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementRequirement_Object_* ctor))
    IL2CPP_REGISTER_METHOD(0x002406A0, app::XblAchievementRequirement__Array*, GetRequirements_2, (app::XblAchievementProgression_1__Boxed * this_ptr, app::Func_2_XGamingRuntime_Interop_XblAchievementRequirement_XGamingRuntime_XblAchievementRequirement_* ctor))
    IL2CPP_REGISTER_METHODINFO(0x04735BA0, XblAchievementProgression_1_GetRequirements_1__MethodInfo)
} // namespace app::classes::XGamingRuntime::Interop::XblAchievementProgression
