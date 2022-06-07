#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CounterCondition {
    IL2CPP_REGISTER_METHOD(0x00DB1AC0, bool, Validate, (app::CounterCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DB1B60, app::String *, GetNiceName, (app::CounterCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CounterCondition * this_ptr))
}
