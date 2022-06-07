#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::XGamingRuntime::XblAchievementProgression {
    IL2CPP_REGISTER_METHOD(0x030BD3F0, void, ctor, (app::XblAchievementProgression * this_ptr, app::XblAchievementProgression_1 interop_progression))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XblAchievementRequirement__Array *, get_Requirements, (app::XblAchievementProgression * this_ptr))
}
