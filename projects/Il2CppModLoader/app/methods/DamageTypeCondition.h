#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::DamageTypeCondition {
    IL2CPP_REGISTER_METHOD(0x00DCA6E0, bool, Validate, (app::DamageTypeCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::DamageTypeCondition * this_ptr))
}
