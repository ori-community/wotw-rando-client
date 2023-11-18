#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XAchievements.h>

namespace app::classes::SystemIntegration::Synchronizer::Achievements::XAchievements {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::XAchievements * this_ptr))
}
