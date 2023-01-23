#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/XblAchievementProgression_c.h>
#include <Modloader/app/structs/XblAchievementRequirement.h>
#include <Modloader/app/structs/XblAchievementRequirement_1.h>

namespace app::classes::XGamingRuntime::XblAchievementProgression___c {
    IL2CPP_REGISTER_METHOD(0x030BD610, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XblAchievementProgression_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030BD750, app::XblAchievementRequirement*, __ctor_b__0_0, (app::XblAchievementProgression_c * this_ptr, app::XblAchievementRequirement_1 r))
    IL2CPP_REGISTER_METHODINFO(0x04712350, XblAchievementProgression_c___ctor_b__0_0__MethodInfo)
} // namespace app::classes::XGamingRuntime::XblAchievementProgression___c
