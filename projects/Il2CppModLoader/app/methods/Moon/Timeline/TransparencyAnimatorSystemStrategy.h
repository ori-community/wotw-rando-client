#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::TransparencyAnimatorSystemStrategy {
    IL2CPP_REGISTER_METHOD(0x00D0EA50, void, Prewarm, (app::TransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0EC30, void, SubmitAlphaInternal, (app::TransparencyAnimatorSystemStrategy * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Color__Enum property, float value, bool persist, bool auto_enable_and_disable, app::HandoverMode__Enum handover_mode, app::TransparencyMode__Enum transparency_mode))
    IL2CPP_REGISTER_METHOD(0x00D0F0F0, void, ClearAllStates, (app::TransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0F200, app::TransparencyAnimatorSystemStrategy_RendererState *, GetRenderState, (app::TransparencyAnimatorSystemStrategy * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Color__Enum property))
    IL2CPP_REGISTER_METHOD(0x00D0F360, bool, GetHandoverAlpha, (app::TransparencyAnimatorSystemStrategy * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Color__Enum property, float * value))
    IL2CPP_REGISTER_METHOD(0x00D0F390, void, SetSceneHidden, (app::TransparencyAnimatorSystemStrategy * this_ptr, app::MoonGuid * scene_guid, bool hidden))
    IL2CPP_REGISTER_METHOD(0x00D0F4C0, void, UpdateSceneHiding, (app::TransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0F620, int32_t, GetStateCount, (app::TransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0F6B0, void, ClearRequestsAtIndex, (app::TransparencyAnimatorSystemStrategy * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x00D0F790, void, UpdateEvery, (app::TransparencyAnimatorSystemStrategy * this_ptr, int32_t quantization_anchor))
    IL2CPP_REGISTER_METHOD(0x00D0FCF0, void, ClearState, (app::TransparencyAnimatorSystemStrategy * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Color__Enum property, bool force_moon_hidden_to_false))
    IL2CPP_REGISTER_METHOD(0x00D0FF30, void, InitializePropertyMap, (app::TransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D10460, app::TransparencyAnimatorSystemStrategy_RendererState *, GetStateFromPool, (app::TransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D105E0, void, ReturnStateToPool, (app::TransparencyAnimatorSystemStrategy * this_ptr, app::TransparencyAnimatorSystemStrategy_RendererState * state))
    IL2CPP_REGISTER_METHOD(0x00D10710, void, ctor, (app::TransparencyAnimatorSystemStrategy * this_ptr))
}
