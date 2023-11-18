#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AwardAchievementAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::AwardAchievementAction {
    IL2CPP_REGISTER_METHOD(0x0085F360, void, Perform, (app::AwardAchievementAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::AwardAchievementAction * this_ptr))
} // namespace app::classes::AwardAchievementAction
