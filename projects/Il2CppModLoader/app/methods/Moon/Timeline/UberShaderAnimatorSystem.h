#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::UberShaderAnimatorSystem {
    IL2CPP_REGISTER_METHOD(0x00D19A50, app::UberShaderAnimatorStrategyBase *, get_Strategy, ())
    IL2CPP_REGISTER_METHOD(0x00D19C00, void, ToggleStrategy, ())
    IL2CPP_REGISTER_METHOD(0x00D19EC0, app::UberShaderAnimatorSystem *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00D1A1E0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00D1A300, void, Awake, (app::UberShaderAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::UpdateType__Enum, get_UpdateType, (app::UberShaderAnimatorSystem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D1A550, void, SubmitDynamicColor, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Color__Enum property, app::Color value, float weight))
    IL2CPP_REGISTER_METHOD(0x00D1A5D0, void, SubmitStaticColor, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Color__Enum property, app::Color value, float weight))
    IL2CPP_REGISTER_METHOD(0x00D1A650, void, SubmitDynamicVector4, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Vector__Enum property, app::Vector4 value, float weight))
    IL2CPP_REGISTER_METHOD(0x00D1A6D0, void, SubmitStaticVector4, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Vector__Enum property, app::Vector4 value, float weight))
    IL2CPP_REGISTER_METHOD(0x00D1A750, void, SubmitDynamicFloat, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Float__Enum property, float value, float weight))
    IL2CPP_REGISTER_METHOD(0x00D1A7C0, void, SubmitStaticFloat, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer * renderer, app::UberShaderProperty_Float__Enum property, float value, float weight))
    IL2CPP_REGISTER_METHOD(0x00D1A830, void, ClearColorRequests, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer__Array * target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D1A870, void, ClearVector4Requests, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer__Array * target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D1A8B0, void, ClearFloatRequests, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer__Array * target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D1A8F0, app::Vector4, GetStaticVector, (app::UberShaderAnimatorSystem * this_ptr, app::Renderer * target_renderer, app::UberShaderProperty_Vector__Enum property))
    IL2CPP_REGISTER_METHOD(0x00D1A960, void, OnUpdate, (app::UberShaderAnimatorSystem * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00D1A9A0, void, ApplyColor, (app::Renderer * renderer, app::UberShaderProperty_Color__Enum property, app::Color value))
    IL2CPP_REGISTER_METHOD(0x00D1AB50, void, ApplyVector4, (app::Renderer * renderer, app::UberShaderProperty_Vector__Enum property, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x00D1AD00, void, ApplyFloat, (app::Renderer * renderer, app::UberShaderProperty_Float__Enum property, float value))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberShaderAnimatorSystem * this_ptr))
}
