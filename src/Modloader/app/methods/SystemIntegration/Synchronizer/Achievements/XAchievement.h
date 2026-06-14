#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XAchievement.h>
#include <Modloader/app/structs/XProgressState__Enum.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::XAchievement {
    IL2CPP_REGISTER_METHOD(0x0052F750, app::XProgressState__Enum, get_progressStateEnum, app::XAchievement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::XAchievement* this_ptr)
} // namespace app::classes::SystemIntegration::Synchronizer::Achievements::XAchievement
