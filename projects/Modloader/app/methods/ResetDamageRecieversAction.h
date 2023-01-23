#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ResetDamageRecieversAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ResetDamageRecieversAction {
    IL2CPP_REGISTER_METHOD(0x00904C80, void, Perform, (app::ResetDamageRecieversAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ResetDamageRecieversAction * this_ptr))
} // namespace app::classes::ResetDamageRecieversAction
