#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnableMainMenuAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::EnableMainMenuAction {
    IL2CPP_REGISTER_METHOD(0x00BFC750, void, Perform, (app::EnableMainMenuAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::EnableMainMenuAction * this_ptr))
} // namespace app::classes::EnableMainMenuAction
