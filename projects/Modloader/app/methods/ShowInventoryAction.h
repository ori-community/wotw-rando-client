#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShowInventoryAction.h>

namespace app::classes::ShowInventoryAction {
    IL2CPP_REGISTER_METHOD(0x005C4960, void, Perform, app::ShowInventoryAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ShowInventoryAction* this_ptr)
} // namespace app::classes::ShowInventoryAction
