#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CompoundCondition {
    IL2CPP_REGISTER_METHOD(0x011E18A0, bool, Validate, (app::CompoundCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x011E1B50, void, ctor, (app::CompoundCondition * this_ptr))
}
