#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::FogGradientController {
    IL2CPP_REGISTER_METHOD(0x0127BB80, app::Gradient *, CreateDefaultMultiplyGradient, ())
    IL2CPP_REGISTER_METHOD(0x0127BE80, void, ctor, (app::FogGradientController * this_ptr))
}
