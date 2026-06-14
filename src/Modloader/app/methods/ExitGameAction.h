#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExitGameAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ExitGameAction {
    IL2CPP_REGISTER_METHOD(0x00986ED0, void, Perform, app::ExitGameAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ExitGameAction* this_ptr)
} // namespace app::classes::ExitGameAction
