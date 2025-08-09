#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XblAchievementProgression.h>
#include <Modloader/app/structs/XblAchievementProgression_1.h>
#include <Modloader/app/structs/XblAchievementRequirement__Array.h>

namespace app::classes::XGamingRuntime::XblAchievementProgression {
    IL2CPP_REGISTER_METHOD(0x030BD3F0, void, ctor, app::XblAchievementProgression* this_ptr, app::XblAchievementProgression_1 interop_progression)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::XblAchievementRequirement__Array*, get_Requirements, app::XblAchievementProgression* this_ptr)
} // namespace app::classes::XGamingRuntime::XblAchievementProgression
