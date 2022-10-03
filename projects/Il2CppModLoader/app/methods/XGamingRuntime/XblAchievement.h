#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::XGamingRuntime::XblAchievement {
    IL2CPP_REGISTER_METHOD(0x030BBB30, void, ctor, (app::XblAchievement * this_ptr, app::XblAchievement_1 interop_achievement))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Id, (app::XblAchievement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654950, app::XblAchievementProgressState__Enum, get_ProgressState, (app::XblAchievement * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::XblAchievementProgression*, get_Progression, (app::XblAchievement * this_ptr))
} // namespace app::classes::XGamingRuntime::XblAchievement
