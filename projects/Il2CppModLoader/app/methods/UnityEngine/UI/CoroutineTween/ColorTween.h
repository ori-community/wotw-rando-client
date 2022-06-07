#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::UI::CoroutineTween::ColorTween {
    IL2CPP_REGISTER_METHOD(0x001D9AC0, app::Color, get_startColor, (app::ColorTween__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9AD0, void, set_startColor, (app::ColorTween__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001D9AE0, app::Color, get_targetColor, (app::ColorTween__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9AF0, void, set_targetColor, (app::ColorTween__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x001D9B00, app::ColorTween_ColorTweenMode__Enum, get_tweenMode, (app::ColorTween__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001CF280, void, set_tweenMode, (app::ColorTween__Boxed * this_ptr, app::ColorTween_ColorTweenMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x001D9B10, float, get_duration, (app::ColorTween__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00115B90, void, set_duration, (app::ColorTween__Boxed * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x001D9B20, bool, get_ignoreTimeScale, (app::ColorTween__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9B30, void, set_ignoreTimeScale, (app::ColorTween__Boxed * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x001D9B40, void, TweenValue, (app::ColorTween__Boxed * this_ptr, float float_percentage))
    IL2CPP_REGISTER_METHOD(0x001D9B50, void, AddOnChangedCallback, (app::ColorTween__Boxed * this_ptr, app::UnityAction_1_UnityEngine_Color_ * callback))
    IL2CPP_REGISTER_METHOD(0x001D9B20, bool, GetIgnoreTimescale, (app::ColorTween__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9B10, float, GetDuration, (app::ColorTween__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x001D9B60, bool, ValidTarget, (app::ColorTween__Boxed * this_ptr))
}
