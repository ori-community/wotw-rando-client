#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::UI::ColorBlock {
    IL2CPP_REGISTER_METHOD(0x001D9980, app::Color, get_normalColor, (app::ColorBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00120520, void, set_normalColor, (app::ColorBlock__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001D9990, app::Color, get_highlightedColor, (app::ColorBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D99A0, void, set_highlightedColor, (app::ColorBlock__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001D99B0, app::Color, get_pressedColor, (app::ColorBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D99C0, void, set_pressedColor, (app::ColorBlock__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001D99D0, app::Color, get_disabledColor, (app::ColorBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D99E0, void, set_disabledColor, (app::ColorBlock__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001D99F0, float, get_colorMultiplier, (app::ColorBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9A00, void, set_colorMultiplier, (app::ColorBlock__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001D9A10, float, get_fadeDuration, (app::ColorBlock__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9A20, void, set_fadeDuration, (app::ColorBlock__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01F2FF00, app::ColorBlock, get_defaultColorBlock, ())
    IL2CPP_REGISTER_METHOD(0x001D9A30, bool, Equals_1, (app::ColorBlock__Boxed * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x001D9A40, bool, Equals_2, (app::ColorBlock__Boxed * this_ptr, app::ColorBlock other))
    IL2CPP_REGISTER_METHOD(0x01F30310, bool, op_Equality, (app::ColorBlock point1, app::ColorBlock point2))
    IL2CPP_REGISTER_METHOD(0x01F30360, bool, op_Inequality, (app::ColorBlock point1, app::ColorBlock point2))
    IL2CPP_REGISTER_METHOD(0x001D9A90, int32_t, GetHashCode, (app::ColorBlock__Boxed * this_ptr))
    inline bool operator==(app::ColorBlock point1, app::ColorBlock point2) {
        return op_Equality(point1, point2);
    }
    inline bool operator!=(app::ColorBlock point1, app::ColorBlock point2) {
        return op_Inequality(point1, point2);
    }
} // namespace app::classes::UnityEngine::UI::ColorBlock
