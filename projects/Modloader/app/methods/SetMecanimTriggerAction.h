#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SetMecanimTriggerAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::SetMecanimTriggerAction {
    IL2CPP_REGISTER_METHOD(0x005A2E90, void, Perform, (app::SetMecanimTriggerAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::SetMecanimTriggerAction * this_ptr))
} // namespace app::classes::SetMecanimTriggerAction
