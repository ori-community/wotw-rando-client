#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ShowSeinUIAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ShowSeinUIAction {
    IL2CPP_REGISTER_METHOD(0x00737200, void, Perform, (app::ShowSeinUIAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00737330, app::String*, GetNiceName, (app::ShowSeinUIAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C87A0, void, ctor, (app::ShowSeinUIAction * this_ptr))
} // namespace app::classes::ShowSeinUIAction
