#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivateRailAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ActivateRailAction {
    IL2CPP_REGISTER_METHOD(0x004C8E00, void, Perform, (app::ActivateRailAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x004C8C00, void, ctor, (app::ActivateRailAction * this_ptr))
} // namespace app::classes::ActivateRailAction
