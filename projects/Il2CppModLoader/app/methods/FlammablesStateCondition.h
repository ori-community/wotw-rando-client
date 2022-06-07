#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FlammablesStateCondition {
    IL2CPP_REGISTER_METHOD(0x01270010, bool, Validate, (app::FlammablesStateCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x010384E0, void, ctor, (app::FlammablesStateCondition * this_ptr))
}
