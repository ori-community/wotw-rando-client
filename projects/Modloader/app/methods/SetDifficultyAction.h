#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetDifficultyAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SetDifficultyAction {
    IL2CPP_REGISTER_METHOD(0x005A2A20, void, Perform, (app::SetDifficultyAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005A2AC0, app::String*, GetNiceName, (app::SetDifficultyAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetDifficultyAction * this_ptr))
} // namespace app::classes::SetDifficultyAction
