#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowHelpAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ShowHelpAction {
    IL2CPP_REGISTER_METHOD(0x005C4300, void, Perform, (app::ShowHelpAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ShowHelpAction * this_ptr))
} // namespace app::classes::ShowHelpAction
