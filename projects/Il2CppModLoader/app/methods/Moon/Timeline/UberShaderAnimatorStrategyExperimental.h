#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Timeline::UberShaderAnimatorStrategyExperimental {
    IL2CPP_REGISTER_METHOD(0x00D124C0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00D12AD0, void, SubmitColorInternal, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::Renderer* target_renderer, app::UberShaderProperty_Color__Enum property, app::Color value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D12CF0, void, SubmitVector4Internal, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::Renderer* target_renderer, app::UberShaderProperty_Vector__Enum property, app::Vector4 value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D12EA0, void, SubmitFloatInternal, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::Renderer* target_renderer, app::UberShaderProperty_Float__Enum property, float value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D13050, void, Initialize, (app::UberShaderAnimatorStrategyExperimental * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D13220, void, ClearColorRequests, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::Renderer__Array* target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D13470, void, ClearVector4Requests, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::Renderer__Array* target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D136C0, void, ClearFloatRequests, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::Renderer__Array* target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D138F0, app::Vector4, GetStaticVector, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::Renderer* target_renderer, app::UberShaderProperty_Vector__Enum property))
    IL2CPP_REGISTER_METHOD(0x00D13A20, void, OnUpdate, (app::UberShaderAnimatorStrategyExperimental * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00D13C40, void, UpdateColorRequests, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::UberShaderAnimatorStrategyExperimental_RendererState* state))
    IL2CPP_REGISTER_METHOD(0x00D14150, void, UpdateFloatRequests, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::UberShaderAnimatorStrategyExperimental_RendererState* state))
    IL2CPP_REGISTER_METHOD(0x00D14600, void, UpdateVector4Requests, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::UberShaderAnimatorStrategyExperimental_RendererState* state))
    IL2CPP_REGISTER_METHOD(0x00D14B40, void, RemoveState, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::UberShaderAnimatorStrategyExperimental_RendererState* state))
    IL2CPP_REGISTER_METHOD(0x00D14C30, app::UberShaderAnimatorStrategyExperimental_RendererState*, GetState, (app::UberShaderAnimatorStrategyExperimental * this_ptr, app::Renderer* target_renderer, bool create))
    IL2CPP_REGISTER_METHOD(0x00D14DF0, app::UberShaderAnimatorStrategyExperimental_RendererState*, AllocateState, (app::UberShaderAnimatorStrategyExperimental * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D14F70, void, ctor, (app::UberShaderAnimatorStrategyExperimental * this_ptr))
} // namespace app::classes::Moon::Timeline::UberShaderAnimatorStrategyExperimental
