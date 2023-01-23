#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Gradient.h>
#include <Modloader/app/structs/FogGradientController.h>

namespace app::classes::FogGradientController {
    IL2CPP_REGISTER_METHOD(0x0127BB80, app::Gradient*, CreateDefaultMultiplyGradient, ())
    IL2CPP_REGISTER_METHOD(0x0127BE80, void, ctor, (app::FogGradientController * this_ptr))
} // namespace app::classes::FogGradientController
