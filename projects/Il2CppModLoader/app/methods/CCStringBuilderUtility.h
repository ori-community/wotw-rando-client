#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CCStringBuilderUtility {
    IL2CPP_REGISTER_METHOD(0x0315BD50, void, AppendInt_1, (app::StringBuilder * s, int32_t number))
    IL2CPP_REGISTER_METHOD(0x0315C000, void, AppendInt_2, (app::StringBuilder * s, int32_t number, int32_t digit_count))
    IL2CPP_REGISTER_METHOD(0x0315C410, void, AppendIntGrouped_1, (app::StringBuilder * s, int32_t number))
    IL2CPP_REGISTER_METHOD(0x0315C850, void, AppendIntGrouped_2, (app::StringBuilder * s, int32_t number, int32_t digit_count))
    IL2CPP_REGISTER_METHOD(0x0315CCC0, void, AppendFloat_1, (app::StringBuilder * s, float number, int32_t decimal_count))
    IL2CPP_REGISTER_METHOD(0x0315CEB0, void, AppendFloat_2, (app::StringBuilder * s, float number, int32_t decimal_count, int32_t digit_count))
    IL2CPP_REGISTER_METHOD(0x0315D0A0, void, AppendFloatGrouped_1, (app::StringBuilder * s, float number, int32_t decimal_count))
    IL2CPP_REGISTER_METHOD(0x0315D290, void, AppendFloatGrouped_2, (app::StringBuilder * s, float number, int32_t decimal_count, int32_t digit_count))
    IL2CPP_REGISTER_METHOD(0x0103B0D0, void, Reverse, (app::StringBuilder * s, int32_t first_index, int32_t last_index))
    IL2CPP_REGISTER_METHOD(0x0315D480, void, cctor, ())
} // namespace app::classes::CCStringBuilderUtility
