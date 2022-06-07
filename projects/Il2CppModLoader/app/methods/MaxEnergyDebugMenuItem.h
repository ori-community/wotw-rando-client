#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MaxEnergyDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x013855B0, void, ctor, (app::MaxEnergyDebugMenuItem * this_ptr, app::String * path, app::String * str))
    IL2CPP_REGISTER_METHOD(0x01385770, void, OnSelectedFixedUpdate, (app::MaxEnergyDebugMenuItem * this_ptr))
}
