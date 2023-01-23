#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SkillTreeAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SkillTreeAction {
    IL2CPP_REGISTER_METHOD(0x006B5490, void, Perform, (app::SkillTreeAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SkillTreeAction * this_ptr))
} // namespace app::classes::SkillTreeAction
