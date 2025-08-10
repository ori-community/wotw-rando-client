#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CameraAdditiveSettings.h>
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/ColorVariationManager.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/MoonRenderContext.h>
#include <Modloader/app/structs/MoonRenderPipelineView.h>
#include <Modloader/app/structs/PostProcessRenderContext.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/RenderTarget.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTextureDescriptor.h>
#include <Modloader/app/structs/SeinController3D.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UberPostProcess.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberPostProcess {
    IL2CPP_REGISTER_METHOD(0x00FF2180, bool, get_DebugOverrideEnabled, )
    IL2CPP_REGISTER_METHOD(0x00FF2220, void, set_DebugOverrideEnabled, bool value)
    IL2CPP_REGISTER_METHOD(0x00FF22D0, bool, get_DebugOverrideInitialValuesSet, )
    IL2CPP_REGISTER_METHOD(0x00FF2370, void, set_DebugOverrideInitialValuesSet, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC510, float, get_DebugOverrideSepBlurSpread, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B83350, void, set_DebugOverrideSepBlurSpread, app::UberPostProcess* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00FF2420, float, get_EffectiveSepBlurSpread, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_DebugOverrideBloomIntensity, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_DebugOverrideBloomIntensity, app::UberPostProcess* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00FF24D0, float, get_EffectiveBloomIntensity, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FD4D0, float, get_DebugOverrideBloomThreshhold, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF2580, void, set_DebugOverrideBloomThreshhold, app::UberPostProcess* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00FF2590, float, get_EffectiveBloomThreshhold, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF2640, app::ColorVariationManager*, get_ColorVariationManager, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF27A0, app::Vector3, get_Speed, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF27C0, void, set_Speed, app::UberPostProcess* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x006D41F0, float, get_CurrentTime, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF27E0, app::UberPostProcess*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x00FF2880, app::SeinController3D*, get_CurrentSeinController3D, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D2CDF0, bool, get_DoRender, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF2920, void, set_DoRender, app::UberPostProcess* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00FF2B30, app::Camera*, get_MainCamera, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF2C30, app::Texture2D*, CreateNoDistortionTex, )
    IL2CPP_REGISTER_METHOD(0x00FF2E50, void, Awake, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF3380, void, QueueGrabPass, app::UberPostProcess* this_ptr, app::MeshFilter* go)
    IL2CPP_REGISTER_METHOD(0x00FF3450, void, BindAll, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF3470, void, OnEnable, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF3570, app::Material*, CheckShaderAndCreateMaterial, app::UberPostProcess* this_ptr, app::Shader* s, app::Material* m2_create)
    IL2CPP_REGISTER_METHOD(0x00FF3760, void, CreateResources, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF37F0, void, SetDirty, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF3800, void, RebindFrequent, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF3F80, void, ConstantEditorRebind, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF3FE0, void, BindBrightnessContrastUI, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF41F0, void, BindBrightnessContrast, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF4680, void, Rebind, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF4A70, float, RandSmooth, app::UberPostProcess* this_ptr, float freq, float y)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DistortBind, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF4B50, void, EmissiveBind, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF4E40, void, ApplyLightInfluence, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF4FB0, void, ApplyColorVariation, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF4FE0, void, ApplyCustomColorVariationBrightness, app::UberPostProcess* this_ptr, float val)
    IL2CPP_REGISTER_METHOD(0x00FF5080, void, ApplyPlayerSettingsPerScene, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF52E0, void, ApplyRenderingSettingssPerScene, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00FF5430,
        bool,
        SetAnimationCurveForChannel,
        app::UberPostProcess* this_ptr,
        app::AnimationCurve* curve,
        int32_t channel,
        float* len
    )
    IL2CPP_REGISTER_METHOD(0x00FF5AA0, void, Update, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF5C10, void, IRenderPostprocessor_OnRenderImage, app::UberPostProcess* this_ptr, app::PostProcessRenderContext* context)
    IL2CPP_REGISTER_METHOD(0x00FF5FB0, void, MoonOnPreCull, app::UberPostProcess* this_ptr, app::MoonRenderContext* ctx)
    IL2CPP_REGISTER_METHOD(0x00FF6100, void, MoonOnPreRender, app::UberPostProcess* this_ptr, app::MoonRenderContext* ctx)
    IL2CPP_REGISTER_METHOD(
        0x00FF6A20,
        void,
        DoPost,
        app::UberPostProcess* this_ptr,
        app::MoonRenderContext* ctx,
        app::MoonRenderPipelineView* view,
        app::RenderTargetIdentifier source,
        app::RenderTargetIdentifier destination,
        app::RenderTextureDescriptor desc_source,
        app::RenderTextureDescriptor desc_dest,
        float current_d_r_s_scale,
        float current_d_r_s_scale_y
    )
    IL2CPP_REGISTER_METHOD(
        0x00FF8130,
        void,
        RenderDistortions,
        app::UberPostProcess* this_ptr,
        app::MoonRenderContext* ctx,
        app::RenderTarget* distort_buffer,
        app::Rect* viewport
    )
    IL2CPP_REGISTER_METHOD(0x00FF85E0, void, UpdateDirectionalBlur, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF8820, void, UpdateHDR, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF8B00, void, OnDestroy, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FF8C40, void, SetCh_1, app::UberPostProcess* this_ptr, float value, float* set)
    IL2CPP_REGISTER_METHOD(0x00FF8C60, void, SetCh_2, app::UberPostProcess* this_ptr, app::Vector4 value, app::Vector4* set)
    IL2CPP_REGISTER_METHOD(0x00FF8D50, void, SetCh_3, app::UberPostProcess* this_ptr, app::Color value, app::Color* set)
    IL2CPP_REGISTER_METHOD(0x00FF8DB0, bool, KeysAreDifferent, app::UberPostProcess* this_ptr, app::AnimationCurve* curve_a, app::AnimationCurve* curve_b)
    IL2CPP_REGISTER_METHOD(0x00FF8FC0, void, ApplySettings_1, app::UberPostProcess* this_ptr, app::CameraSettingsAsset* settings_asset)
    IL2CPP_REGISTER_METHOD(0x00FF9150, void, ApplyAdditiveSettings, app::UberPostProcess* this_ptr, app::CameraAdditiveSettings* additive_settings)
    IL2CPP_REGISTER_METHOD(0x00FF9520, void, SetCurves, app::UberPostProcess* this_ptr, app::AnimationCurve* b, app::AnimationCurve** a)
    IL2CPP_REGISTER_METHOD(0x00FF9740, void, ApplySettings_2, app::UberPostProcess* this_ptr, app::CameraSettings* settings)
    IL2CPP_REGISTER_METHOD(0x00FF9CC0, void, SaveSettings, app::UberPostProcess* this_ptr, app::CameraSettingsAsset* settings)
    IL2CPP_REGISTER_METHOD(0x00FFA2C0, void, SetDebugOverrideInitialValues, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FFA530, void, ctor, app::UberPostProcess* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00FFB5C0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x007893E0, bool, IRenderPostprocessor_get_enabled, app::UberPostProcess* this_ptr)
} // namespace app::classes::UberPostProcess
