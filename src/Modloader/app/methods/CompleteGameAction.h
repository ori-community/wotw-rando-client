#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompleteGameAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CompleteGameAction {
    IL2CPP_REGISTER_METHOD(0x011DEF20, void, Perform, app::CompleteGameAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::CompleteGameAction* this_ptr)
} // namespace app::classes::CompleteGameAction
