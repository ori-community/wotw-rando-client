#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShowAchievementsAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ShowAchievementsAction {
    IL2CPP_REGISTER_METHOD(0x005C40C0, void, Perform, (app::ShowAchievementsAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowAchievementsAction * this_ptr))
} // namespace app::classes::ShowAchievementsAction
