#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActivateWindVentAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ActivateWindVentAction {
    IL2CPP_REGISTER_METHOD(0x004C8F40, void, Perform, app::ActivateWindVentAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ActivateWindVentAction* this_ptr)
} // namespace app::classes::ActivateWindVentAction
