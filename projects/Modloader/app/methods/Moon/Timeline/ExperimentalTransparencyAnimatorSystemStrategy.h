#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::ExperimentalTransparencyAnimatorSystemStrategy {
    IL2CPP_REGISTER_METHOD(0x00767620, void, ctor, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00767AF0, void, SubmitAlphaInternal, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, float value, bool persist, bool auto_enable_and_disable, app::HandoverMode__Enum handover_mode, app::TransparencyMode__Enum transparency_mode))
    IL2CPP_REGISTER_METHOD(0x00768030, void, Prewarm, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00768210, void, ClearAllStates, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00768340, bool, GetHandoverAlpha, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, float* value))
    IL2CPP_REGISTER_METHOD(0x007684F0, void, SetSceneHidden, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, app::MoonGuid* scene_guid, bool hidden))
    IL2CPP_REGISTER_METHOD(0x00768620, void, UpdateSceneHiding, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00768780, int32_t, GetStateCount, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00768810, void, ClearRequestsAtIndex, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, int32_t i))
    IL2CPP_REGISTER_METHOD(0x007688F0, void, UpdateEvery, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, int32_t quantization_anchor))
    IL2CPP_REGISTER_METHOD(0x007692F0, void, DisbandState, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState* state, bool force_moon_hidden_to_false))
    IL2CPP_REGISTER_METHOD(0x00769440, void, DisbandProperty, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState* state, app::UberShaderProperty_Color__Enum property))
    IL2CPP_REGISTER_METHOD(0x00769670, void, DisbandStateWithProperties, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState* state, bool force_moon_hidden_to_false))
    IL2CPP_REGISTER_METHOD(0x007696D0, void, ClearState, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, bool force_moon_hidden_to_false))
    IL2CPP_REGISTER_METHOD(0x00769880, void, InitializePropertyMap, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00769A30, app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState*, GetStateFromPool, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00769BB0, void, ReturnStateToPool, (app::ExperimentalTransparencyAnimatorSystemStrategy * this_ptr, app::ExperimentalTransparencyAnimatorSystemStrategy_RendererState* state))
} // namespace app::classes::Moon::Timeline::ExperimentalTransparencyAnimatorSystemStrategy
