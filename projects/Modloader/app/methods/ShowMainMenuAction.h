#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowMainMenuAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ShowMainMenuAction {
    IL2CPP_REGISTER_METHOD(0x005C4E50, void, Perform, (app::ShowMainMenuAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x005C4FC0, app::String*, GetNiceName, (app::ShowMainMenuAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005C5050, void, ctor, (app::ShowMainMenuAction * this_ptr))
} // namespace app::classes::ShowMainMenuAction
