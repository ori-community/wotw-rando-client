#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HasOreCondition {
    IL2CPP_REGISTER_METHOD(0x0109EAA0, bool, Validate, (app::HasOreCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasOreCondition * this_ptr))
}
