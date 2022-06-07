#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::EnergyDebugMenuItem {
    IL2CPP_REGISTER_METHOD(0x00C87390, void, ctor, (app::EnergyDebugMenuItem * this_ptr, app::String * path, app::String * str))
    IL2CPP_REGISTER_METHOD(0x00C87550, void, OnSelectedFixedUpdate, (app::EnergyDebugMenuItem * this_ptr))
}
