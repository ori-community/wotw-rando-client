#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CanUseBackupsCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CanUseBackupsCondition {
    IL2CPP_REGISTER_METHOD(0x00B222E0, bool, Validate, (app::CanUseBackupsCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanUseBackupsCondition * this_ptr))
} // namespace app::classes::CanUseBackupsCondition
