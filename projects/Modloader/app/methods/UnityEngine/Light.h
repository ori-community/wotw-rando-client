#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Light.h>
#include <Modloader/app/structs/LightType__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Flare.h>
#include <Modloader/app/structs/LightBakingOutput.h>
#include <Modloader/app/structs/LightShadowCasterMode__Enum.h>
#include <Modloader/app/structs/LightShadows__Enum.h>
#include <Modloader/app/structs/LightShadowResolution__Enum.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/LightRenderMode__Enum.h>
#include <Modloader/app/structs/LightEvent__Enum.h>
#include <Modloader/app/structs/CommandBuffer.h>
#include <Modloader/app/structs/ShadowMapPass__Enum.h>
#include <Modloader/app/structs/ComputeQueueType__Enum.h>
#include <Modloader/app/structs/CommandBuffer__Array.h>
#include <Modloader/app/structs/Light__Array.h>

namespace app::classes::UnityEngine::Light {
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252E760, app::LightType__Enum, get_type, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252E7B0, void, set_type, (app::Light * this_ptr, app::LightType__Enum value))
    IL2CPP_REGISTER_METHOD(0x0252E810, float, get_spotAngle, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252E860, void, set_spotAngle, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252E8C0, app::Color, get_color, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252E940, void, set_color, (app::Light * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x0252E9A0, float, get_colorTemperature, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252E9F0, void, set_colorTemperature, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252EA50, float, get_intensity, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252EAA0, void, set_intensity, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252EB00, float, get_bounceIntensity, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252EB50, void, set_bounceIntensity, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252EBB0, int32_t, get_shadowCustomResolution, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252EC00, void, set_shadowCustomResolution, (app::Light * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0252EC60, float, get_shadowBias, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252ECB0, void, set_shadowBias, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252ED10, float, get_shadowNormalBias, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252ED60, void, set_shadowNormalBias, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252EDC0, float, get_shadowNearPlane, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252EE10, void, set_shadowNearPlane, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252EE70, float, get_range, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252EEC0, void, set_range, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252EF20, app::Flare*, get_flare, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252EF70, void, set_flare, (app::Light * this_ptr, app::Flare* value))
    IL2CPP_REGISTER_METHOD(0x0252EFD0, app::LightBakingOutput, get_bakingOutput, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F060, void, set_bakingOutput, (app::Light * this_ptr, app::LightBakingOutput value))
    IL2CPP_REGISTER_METHOD(0x0252F0C0, int32_t, get_cullingMask, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F110, void, set_cullingMask, (app::Light * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0252F170, app::LightShadowCasterMode__Enum, get_lightShadowCasterMode, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F1C0, void, set_lightShadowCasterMode, (app::Light * this_ptr, app::LightShadowCasterMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x0252F220, void, Reset, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F270, app::LightShadows__Enum, get_shadows, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F2C0, void, set_shadows, (app::Light * this_ptr, app::LightShadows__Enum value))
    IL2CPP_REGISTER_METHOD(0x0252F320, float, get_shadowStrength, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F370, void, set_shadowStrength, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252F3D0, app::LightShadowResolution__Enum, get_shadowResolution, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F420, void, set_shadowResolution, (app::Light * this_ptr, app::LightShadowResolution__Enum value))
    IL2CPP_REGISTER_METHOD(0x0252F480, float, get_shadowSoftness, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_shadowSoftness, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252F490, float, get_shadowSoftnessFade, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_shadowSoftnessFade, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252F4A0, app::Single__Array*, get_layerShadowCullDistances, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F4F0, void, set_layerShadowCullDistances, (app::Light * this_ptr, app::Single__Array* value))
    IL2CPP_REGISTER_METHOD(0x0252F550, float, get_cookieSize, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F5A0, void, set_cookieSize, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0252F600, app::Texture*, get_cookie, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F650, void, set_cookie, (app::Light * this_ptr, app::Texture* value))
    IL2CPP_REGISTER_METHOD(0x0252F6B0, app::LightRenderMode__Enum, get_renderMode, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252F700, void, set_renderMode, (app::Light * this_ptr, app::LightRenderMode__Enum value))
    IL2CPP_REGISTER_METHOD(0x01F2AB70, int32_t, get_bakedIndex, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_bakedIndex, (app::Light * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0252F760, void, SetFalloffTable, (app::Light * this_ptr, app::Single__Array* input))
    IL2CPP_REGISTER_METHOD(0x0252F7C0, void, SetAllLightsFalloffToInverseSquared, ())
    IL2CPP_REGISTER_METHOD(0x0252F810, void, SetAllLightsFalloffToUnityLegacy, ())
    IL2CPP_REGISTER_METHOD(0x0252F860, void, AddCommandBuffer_1, (app::Light * this_ptr, app::LightEvent__Enum evt, app::CommandBuffer* buffer))
    IL2CPP_REGISTER_METHOD(0x0252F8E0, void, AddCommandBuffer_2, (app::Light * this_ptr, app::LightEvent__Enum evt, app::CommandBuffer* buffer, app::ShadowMapPass__Enum shadow_pass_mask))
    IL2CPP_REGISTER_METHOD(0x0252F960, void, AddCommandBufferAsync_1, (app::Light * this_ptr, app::LightEvent__Enum evt, app::CommandBuffer* buffer, app::ComputeQueueType__Enum queue_type))
    IL2CPP_REGISTER_METHOD(0x0252F9F0, void, AddCommandBufferAsync_2, (app::Light * this_ptr, app::LightEvent__Enum evt, app::CommandBuffer* buffer, app::ShadowMapPass__Enum shadow_pass_mask, app::ComputeQueueType__Enum queue_type))
    IL2CPP_REGISTER_METHOD(0x0252FA70, void, RemoveCommandBuffer, (app::Light * this_ptr, app::LightEvent__Enum evt, app::CommandBuffer* buffer))
    IL2CPP_REGISTER_METHOD(0x0252FAE0, void, RemoveCommandBuffers, (app::Light * this_ptr, app::LightEvent__Enum evt))
    IL2CPP_REGISTER_METHOD(0x0252FB40, void, RemoveAllCommandBuffers, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252FB90, app::CommandBuffer__Array*, GetCommandBuffers, (app::Light * this_ptr, app::LightEvent__Enum evt))
    IL2CPP_REGISTER_METHOD(0x0252FBF0, int32_t, get_commandBufferCount, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0252FC40, int32_t, get_pixelLightCount, ())
    IL2CPP_REGISTER_METHOD(0x0252FC90, void, set_pixelLightCount, (int32_t value))
    IL2CPP_REGISTER_METHOD(0x0252FCE0, app::Light__Array*, GetLights, (app::LightType__Enum type, int32_t layer))
    IL2CPP_REGISTER_METHOD(0x024BF590, float, get_shadowConstantBias, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_shadowConstantBias, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x024BF590, float, get_shadowObjectSizeBias, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_shadowObjectSizeBias, (app::Light * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01F1B650, bool, get_attenuate, (app::Light * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_attenuate, (app::Light * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x0252FD40, void, get_color_Injected, (app::Light * this_ptr, app::Color* ret))
    IL2CPP_REGISTER_METHOD(0x0252FDA0, void, set_color_Injected, (app::Light * this_ptr, app::Color* value))
    IL2CPP_REGISTER_METHOD(0x0252FE00, void, get_bakingOutput_Injected, (app::Light * this_ptr, app::LightBakingOutput* ret))
    IL2CPP_REGISTER_METHOD(0x0252FE60, void, set_bakingOutput_Injected, (app::Light * this_ptr, app::LightBakingOutput* value))
} // namespace app::classes::UnityEngine::Light
