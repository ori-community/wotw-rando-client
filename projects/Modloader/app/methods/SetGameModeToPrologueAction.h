#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SetGameModeToPrologueAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SetGameModeToPrologueAction {
    IL2CPP_REGISTER_METHOD(0x005A2CA0, void, Perform, (app::SetGameModeToPrologueAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetGameModeToPrologueAction * this_ptr))
} // namespace app::classes::SetGameModeToPrologueAction
