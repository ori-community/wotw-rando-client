#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::HasComponentCondition {
    IL2CPP_REGISTER_METHOD(0x0109DD70, void, Start, (app::HasComponentCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109DE40, bool, Validate, (app::HasComponentCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasComponentCondition * this_ptr))
}
