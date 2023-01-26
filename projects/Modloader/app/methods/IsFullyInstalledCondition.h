#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IsFullyInstalledCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsFullyInstalledCondition {
    IL2CPP_REGISTER_METHOD(0x00645F00, bool, Validate, (app::IsFullyInstalledCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsFullyInstalledCondition * this_ptr))
} // namespace app::classes::IsFullyInstalledCondition
