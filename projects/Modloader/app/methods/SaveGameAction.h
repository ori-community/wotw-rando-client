#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SaveGameAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SaveGameAction {
    IL2CPP_REGISTER_METHOD(0x00C2B2F0, void, Perform, (app::SaveGameAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SaveGameAction * this_ptr))
} // namespace app::classes::SaveGameAction
