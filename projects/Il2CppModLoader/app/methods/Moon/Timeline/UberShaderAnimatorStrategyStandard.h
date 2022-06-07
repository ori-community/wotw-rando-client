#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::UberShaderAnimatorStrategyStandard {
    IL2CPP_REGISTER_METHOD(0x00D16130, void, ClearColorRequests, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::Renderer__Array * target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D163B0, void, ClearVector4Requests, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::Renderer__Array * target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D16630, void, ClearFloatRequests, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::Renderer__Array * target_renderers))
    IL2CPP_REGISTER_METHOD(0x00D16890, app::Vector4, GetStaticVector, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::Renderer * target_renderer, app::UberShaderProperty_Vector__Enum property))
    IL2CPP_REGISTER_METHOD(0x00D16A50, void, OnUpdate, (app::UberShaderAnimatorStrategyStandard * this_ptr, float delta))
    IL2CPP_REGISTER_METHOD(0x00D16CC0, void, RemoveFromTrackingStates, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::UberShaderAnimatorStrategyStandard_RendererState * state))
    IL2CPP_REGISTER_METHOD(0x00D16E60, void, SubmitColorInternal, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::Renderer * target_renderer, app::UberShaderProperty_Color__Enum property, app::Color value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D17080, void, SubmitVector4Internal, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::Renderer * target_renderer, app::UberShaderProperty_Vector__Enum property, app::Vector4 value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D17230, void, SubmitFloatInternal, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::Renderer * target_renderer, app::UberShaderProperty_Float__Enum property, float value, float weight, bool persist))
    IL2CPP_REGISTER_METHOD(0x00D173E0, void, UpdateColorRequests, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::UberShaderAnimatorStrategyStandard_RendererState * renderer_state))
    IL2CPP_REGISTER_METHOD(0x00D177E0, void, UpdateVector4Requests, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::UberShaderAnimatorStrategyStandard_RendererState * renderer_state))
    IL2CPP_REGISTER_METHOD(0x00D17C50, void, UpdateFloatRequests, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::UberShaderAnimatorStrategyStandard_RendererState * renderer_state))
    IL2CPP_REGISTER_METHOD(0x00D18020, app::UberShaderAnimatorStrategyStandard_RendererState *, GetRendererState, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::Renderer * target_renderer, bool create))
    IL2CPP_REGISTER_METHOD(0x00D181E0, app::UberShaderAnimatorStrategyStandard_RendererState *, GetStateFromPool, (app::UberShaderAnimatorStrategyStandard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D18360, void, ReturnStateToPool, (app::UberShaderAnimatorStrategyStandard * this_ptr, app::UberShaderAnimatorStrategyStandard_RendererState * state))
    IL2CPP_REGISTER_METHOD(0x00D18470, void, Initialize, (app::UberShaderAnimatorStrategyStandard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D18640, void, ctor, (app::UberShaderAnimatorStrategyStandard * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F0340, app::UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_System_Object_ *, GetUberShaderAnimationInstance_1, ())
    IL2CPP_REGISTER_METHOD(0x018F0340, app::UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Color_ *, GetUberShaderAnimationInstance_2, ())
    IL2CPP_REGISTER_METHODINFO(0x0478CA80, UberShaderAnimatorStrategyStandard_GetUberShaderAnimationInstance_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F0340, app::UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_UnityEngine_Vector4_ *, GetUberShaderAnimationInstance_3, ())
    IL2CPP_REGISTER_METHODINFO(0x04776080, UberShaderAnimatorStrategyStandard_GetUberShaderAnimationInstance_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F0340, app::UberShaderAnimatorStrategyStandard_UberShaderAnimation_1_System_Single_ *, GetUberShaderAnimationInstance_4, ())
    IL2CPP_REGISTER_METHODINFO(0x0473DCA0, UberShaderAnimatorStrategyStandard_GetUberShaderAnimationInstance_3__MethodInfo)
}
