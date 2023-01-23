#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RunLastSkillEarntAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::RunLastSkillEarntAction {
    IL2CPP_REGISTER_METHOD(0x01373100, void, Perform, (app::RunLastSkillEarntAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RunLastSkillEarntAction * this_ptr))
} // namespace app::classes::RunLastSkillEarntAction
