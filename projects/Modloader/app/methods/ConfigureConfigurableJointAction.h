#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigureConfigurableJointAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ConfigureConfigurableJointAction {
    IL2CPP_REGISTER_METHOD(0x011E42D0, void, Perform, (app::ConfigureConfigurableJointAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::ConfigureConfigurableJointAction * this_ptr))
} // namespace app::classes::ConfigureConfigurableJointAction
