#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RockTreeSetup {
    IL2CPP_REGISTER_METHOD(0x01359810, void, Start, (app::RockTreeSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013599E0, void, FixedUpdate, (app::RockTreeSetup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01359F60, void, Serialize, (app::RockTreeSetup * this_ptr, app::Archive * ar))
    IL2CPP_REGISTER_METHOD(0x0135A170, void, ctor, (app::RockTreeSetup * this_ptr))
}
