#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberColorAnimator {
    IL2CPP_REGISTER_METHOD(0x013E5540, app::GameObject *, get_CurrentTarget, (app::UberColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E5610, app::UberShaderProperty_Color__Enum, ColorPropertyIDFromColorName, (app::UberColorAnimator * this_ptr, app::UberColorAnimator_ColorName__Enum color_name))
    IL2CPP_REGISTER_METHOD(0x013E5650, app::Color, get_CurrentColor, (app::UberColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E5790, void, set_CurrentColor, (app::UberColorAnimator * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x013E58C0, app::UberShaderColor *, UberShaderColorFromColorName, (app::UberColorAnimator * this_ptr, app::UberColorAnimator_ColorName__Enum color_name, app::UberShaderComponent * uber_shader_component))
    IL2CPP_REGISTER_METHOD(0x013E5B90, bool, get_IsLooping, (app::UberColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E5BA0, void, CacheOriginals, (app::UberColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E5C60, void, SampleValue, (app::UberColorAnimator * this_ptr, float value, bool force_sample))
    IL2CPP_REGISTER_METHOD(0x013E5E80, float, get_Duration, (app::UberColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E5EB0, void, RestoreToOriginalState, (app::UberColorAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E5EE0, void, ctor, (app::UberColorAnimator * this_ptr))
}
