#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XblAchievementRequirement.h>
#include <Modloader/app/structs/XblAchievementRequirement_1.h>

namespace app::classes::XGamingRuntime::XblAchievementRequirement {
    IL2CPP_REGISTER_METHOD(0x030BD8C0, void, ctor, app::XblAchievementRequirement* this_ptr, app::XblAchievementRequirement_1 interop_requirement)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_CurrentProgressValue, app::XblAchievementRequirement* this_ptr)
} // namespace app::classes::XGamingRuntime::XblAchievementRequirement
