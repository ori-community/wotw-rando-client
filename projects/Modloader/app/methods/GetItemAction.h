#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GetItemAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GetItemAction {
    IL2CPP_REGISTER_METHOD(0x00E11D20, void, Perform, app::GetItemAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::GetItemAction* this_ptr)
} // namespace app::classes::GetItemAction
