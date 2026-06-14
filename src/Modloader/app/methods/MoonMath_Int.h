#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonMath_Int {
    IL2CPP_REGISTER_METHOD(0x02575A20, int32_t, GreatestCommonDenominator, int32_t x, int32_t y)
    IL2CPP_REGISTER_METHOD(0x02575A50, int32_t, MathMod, int32_t a, int32_t b)
    IL2CPP_REGISTER_METHOD(0x02575B00, bool, IsValidIndex, int32_t index, int32_t array_length)
    IL2CPP_REGISTER_METHOD(0x020AD5E0, bool, IsInRange, int32_t value, int32_t inclusive_min, int32_t inclusive_max)
} // namespace app::classes::MoonMath_Int
