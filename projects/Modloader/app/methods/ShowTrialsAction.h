#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ShowTrialsAction.h>

namespace app::classes::ShowTrialsAction {
    IL2CPP_REGISTER_METHOD(0x00739170, void, Perform, app::ShowTrialsAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, app::ShowTrialsAction* this_ptr)
} // namespace app::classes::ShowTrialsAction
