#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::CatlikeCoding::Utilities::StringBuilderUtility {
    IL2CPP_REGISTER_METHOD(0x010399A0, void, AppendInt_1, (app::StringBuilder * s, int32_t number))
    IL2CPP_REGISTER_METHOD(0x01039C50, void, AppendInt_2, (app::StringBuilder * s, int32_t number, int32_t digit_count))
    IL2CPP_REGISTER_METHOD(0x0103A060, void, AppendIntGrouped_1, (app::StringBuilder * s, int32_t number))
    IL2CPP_REGISTER_METHOD(0x0103A4A0, void, AppendIntGrouped_2, (app::StringBuilder * s, int32_t number, int32_t digit_count))
    IL2CPP_REGISTER_METHOD(0x0103A910, void, AppendFloat_1, (app::StringBuilder * s, float number, int32_t decimal_count))
    IL2CPP_REGISTER_METHOD(0x0103AB00, void, AppendFloat_2, (app::StringBuilder * s, float number, int32_t decimal_count, int32_t digit_count))
    IL2CPP_REGISTER_METHOD(0x0103ACF0, void, AppendFloatGrouped_1, (app::StringBuilder * s, float number, int32_t decimal_count))
    IL2CPP_REGISTER_METHOD(0x0103AEE0, void, AppendFloatGrouped_2, (app::StringBuilder * s, float number, int32_t decimal_count, int32_t digit_count))
    IL2CPP_REGISTER_METHOD(0x0103B0D0, void, Reverse, (app::StringBuilder * s, int32_t first_index, int32_t last_index))
    IL2CPP_REGISTER_METHOD(0x0103B180, void, cctor, ())
} // namespace app::classes::CatlikeCoding::Utilities::StringBuilderUtility
