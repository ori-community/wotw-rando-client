#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CounterAction {
    IL2CPP_REGISTER_METHOD(0x00DB1490, void, Perform, (app::CounterAction * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00DB1500, app::String *, GetNiceName, (app::CounterAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::CounterAction * this_ptr))
}
