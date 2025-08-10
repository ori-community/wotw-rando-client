#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetGameModeAction.h>

namespace app::classes::SetGameModeAction {
    IL2CPP_REGISTER_METHOD(0x005A2B60, void, Perform, app::SetGameModeAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005A2C90, void, ctor, app::SetGameModeAction* this_ptr)
} // namespace app::classes::SetGameModeAction
