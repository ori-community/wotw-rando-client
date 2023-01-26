#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color__Boxed.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UnityEngine::Color {
    IL2CPP_REGISTER_METHOD(0x00121740, void, ctor_1, (app::Color__Boxed * this_ptr, float r, float g, float b, float a))
    IL2CPP_REGISTER_METHOD(0x001EBCA0, void, ctor_2, (app::Color__Boxed * this_ptr, float r, float g, float b))
    IL2CPP_REGISTER_METHOD(0x001EBCC0, app::String*, ToString, (app::Color__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EBCD0, int32_t, GetHashCode, (app::Color__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EBCE0, bool, Equals_1, (app::Color__Boxed * this_ptr, app::Object* other))
    IL2CPP_REGISTER_METHOD(0x001EBCF0, bool, Equals_2, (app::Color__Boxed * this_ptr, app::Color other))
    IL2CPP_REGISTER_METHOD(0x02427D30, app::Color, op_Addition, (app::Color a, app::Color b))
    IL2CPP_REGISTER_METHOD(0x02427D90, app::Color, op_Subtraction, (app::Color a, app::Color b))
    IL2CPP_REGISTER_METHOD(0x02427DF0, app::Color, op_Multiply_1, (app::Color a, app::Color b))
    IL2CPP_REGISTER_METHOD(0x02427E50, app::Color, op_Multiply_2, (app::Color a, float b))
    IL2CPP_REGISTER_METHOD(0x02427EA0, app::Color, op_Multiply_3, (float b, app::Color a))
    IL2CPP_REGISTER_METHOD(0x02427EF0, app::Color, op_Division, (app::Color a, float b))
    IL2CPP_REGISTER_METHOD(0x02427F40, bool, op_Equality, (app::Color lhs, app::Color rhs))
    IL2CPP_REGISTER_METHOD(0x02428060, bool, op_Inequality, (app::Color lhs, app::Color rhs))
    IL2CPP_REGISTER_METHOD(0x02428090, app::Color, Lerp, (app::Color a, app::Color b, float t))
    IL2CPP_REGISTER_METHOD(0x024281D0, app::Color, get_red, ())
    IL2CPP_REGISTER_METHOD(0x024281E0, app::Color, get_green, ())
    IL2CPP_REGISTER_METHOD(0x024281F0, app::Color, get_blue, ())
    IL2CPP_REGISTER_METHOD(0x00F87B80, app::Color, get_white, ())
    IL2CPP_REGISTER_METHOD(0x02428200, app::Color, get_black, ())
    IL2CPP_REGISTER_METHOD(0x02428210, app::Color, get_yellow, ())
    IL2CPP_REGISTER_METHOD(0x02428220, app::Color, get_cyan, ())
    IL2CPP_REGISTER_METHOD(0x02428230, app::Color, get_magenta, ())
    IL2CPP_REGISTER_METHOD(0x02428240, app::Color, get_gray, ())
    IL2CPP_REGISTER_METHOD(0x02428240, app::Color, get_grey, ())
    IL2CPP_REGISTER_METHOD(0x00F87B90, app::Color, get_clear, ())
    IL2CPP_REGISTER_METHOD(0x001EBD10, float, get_grayscale, (app::Color__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EBD50, app::Color, get_linear, (app::Color__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EBF20, app::Color, get_gamma, (app::Color__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001EC0F0, float, get_maxColorComponent, (app::Color__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02428250, app::Vector4, op_Implicit_1, (app::Color c))
    IL2CPP_REGISTER_METHOD(0x02428250, app::Color, op_Implicit_2, (app::Vector4 v))
    IL2CPP_REGISTER_METHOD(0x001EC1B0, float, get_Item, (app::Color__Boxed * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02428370, void, RGBToHSV, (app::Color rgb_color, float* H, float* S, float* V))
    IL2CPP_REGISTER_METHOD(0x024283F0, void, RGBToHSVHelper, (float offset, float dominantcolor, float colorone, float colortwo, float* H, float* S, float* V))
    IL2CPP_REGISTER_METHOD(0x02428490, app::Color, HSVToRGB_1, (float H, float S, float V))
    IL2CPP_REGISTER_METHOD(0x024284C0, app::Color, HSVToRGB_2, (float H, float S, float V, bool hdr))
    inline app::Color operator+(app::Color a, app::Color b) {
        return op_Addition(a, b);
    }
    inline app::Color operator-(app::Color a, app::Color b) {
        return op_Subtraction(a, b);
    }
    inline app::Color operator*(app::Color a, app::Color b) {
        return op_Multiply_1(a, b);
    }
    inline app::Color operator*(app::Color a, float b) {
        return op_Multiply_2(a, b);
    }
    inline app::Color operator*(float b, app::Color a) {
        return op_Multiply_3(b, a);
    }
    inline app::Color operator/(app::Color a, float b) {
        return op_Division(a, b);
    }
    inline bool operator==(app::Color lhs, app::Color rhs) {
        return op_Equality(lhs, rhs);
    }
    inline bool operator!=(app::Color lhs, app::Color rhs) {
        return op_Inequality(lhs, rhs);
    }
} // namespace app::classes::UnityEngine::Color
