#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Single__Array.h>

namespace app::classes::Moon::Extensions::MathExtensions {
    IL2CPP_REGISTER_METHOD(0x031B5BA0, float, GetMax, app::Single__Array* values)
    IL2CPP_REGISTER_METHOD(0x031B5C00, float, GetMin, app::Single__Array* values)
    IL2CPP_REGISTER_METHOD(0x031B5C60, double, Clamp, double value, double min_val, double max_val)
} // namespace app::classes::Moon::Extensions::MathExtensions
