#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RemoveConfigurableJointAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::RemoveConfigurableJointAction {
    IL2CPP_REGISTER_METHOD(0x008FD490, void, Perform, (app::RemoveConfigurableJointAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::RemoveConfigurableJointAction * this_ptr))
} // namespace app::classes::RemoveConfigurableJointAction
