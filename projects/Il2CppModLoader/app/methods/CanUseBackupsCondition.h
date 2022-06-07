#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CanUseBackupsCondition {
    IL2CPP_REGISTER_METHOD(0x00B222E0, bool, Validate, (app::CanUseBackupsCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CanUseBackupsCondition * this_ptr))
}
