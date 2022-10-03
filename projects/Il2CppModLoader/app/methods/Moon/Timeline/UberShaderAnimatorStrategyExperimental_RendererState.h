#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::UberShaderAnimatorStrategyExperimental_RendererState {
    IL2CPP_REGISTER_METHOD(0x00D15290, void, ctor, (app::UberShaderAnimatorStrategyExperimental_RendererState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D15660, bool, get_IsValid, (app::UberShaderAnimatorStrategyExperimental_RendererState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D15720, void, AddRequest_1, (app::UberShaderAnimatorStrategyExperimental_RendererState * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, app::Color value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D159B0, void, AddRequest_2, (app::UberShaderAnimatorStrategyExperimental_RendererState * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Vector__Enum property, app::Vector4 value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D15C40, void, AddRequest_3, (app::UberShaderAnimatorStrategyExperimental_RendererState * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Float__Enum property, float value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D15EC0, void, Reset, (app::UberShaderAnimatorStrategyExperimental_RendererState * this_ptr))
} // namespace app::classes::Moon::Timeline::UberShaderAnimatorStrategyExperimental_RendererState
