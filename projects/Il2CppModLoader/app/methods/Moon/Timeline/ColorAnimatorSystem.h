#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::ColorAnimatorSystem {
    IL2CPP_REGISTER_METHOD(0x00760690, app::ColorAnimatorSystem*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_IsRunning, (app::ColorAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_IsRunning, (app::ColorAnimatorSystem * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_ExecutionOrder, (app::ColorAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007609B0, void, Awake, (app::ColorAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00760E80, void, InitializePropertyMap, (app::ColorAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007612B0, void, OnDestroy, (app::ColorAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00761350, void, SubmitColorInternal, (app::ColorAnimatorSystem * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, app::Color value, bool persist))
    IL2CPP_REGISTER_METHOD(0x007615F0, void, SubmitDynamicColor, (app::ColorAnimatorSystem * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, app::Color value))
    IL2CPP_REGISTER_METHOD(0x00761620, void, SubmitStaticColor, (app::ColorAnimatorSystem * this_ptr, app::Renderer* renderer, app::UberShaderProperty_Color__Enum property, app::Color value))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::UpdateType__Enum, get_UpdateType, (app::ColorAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00761650, void, OnUpdate, (app::ColorAnimatorSystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x007618D0, app::ColorAnimatorSystem_RendererState*, GetStateFromPool, (app::ColorAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00761A50, void, ReturnStateToPool, (app::ColorAnimatorSystem * this_ptr, app::ColorAnimatorSystem_RendererState* state))
    IL2CPP_REGISTER_METHOD(0x00761B40, void, ApplyColor, (app::Renderer * renderer, app::UberShaderProperty_Color__Enum property, app::Color value))
    IL2CPP_REGISTER_METHOD(0x00761CF0, void, ctor, (app::ColorAnimatorSystem * this_ptr))
} // namespace app::classes::Moon::Timeline::ColorAnimatorSystem
