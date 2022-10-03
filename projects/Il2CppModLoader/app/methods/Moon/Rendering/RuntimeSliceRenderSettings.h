#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Rendering::RuntimeSliceRenderSettings {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::SceneDefaultSettingsHelper*, get_DefaultSettingsHelper, (app::RuntimeSliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EB37B0, int32_t, get_SliceRenderInfluenceCount, ())
    IL2CPP_REGISTER_METHOD(0x00EB3860, void, RegisterLayeredRenderInfluencer, (app::ILayeredRenderInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x00EB3980, void, UnregisterLayeredInfluencer, (app::ILayeredRenderInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x00EB3AA0, void, RegisterSlicesInfluencer, (app::ISliceRenderSettingsInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x00EB3D30, void, UnregisterSlicesInfluencer, (app::ISliceRenderSettingsInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x00EB3E50, void, MoveCamera, (app::RuntimeSliceRenderSettings * this_ptr, app::Vector3 camera_pos, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00EB3E80, app::SliceRenderSettings*, GetSliceRenderSettings, (app::RuntimeSliceRenderSettings * this_ptr, app::SceneSettings* setting))
    IL2CPP_REGISTER_METHOD(0x00EB3F80, void, Update, (app::RuntimeSliceRenderSettings * this_ptr, app::SliceRenderSettings** out_s_r_s, app::LayeredRenderSettings** out_l_r_s, app::MotionBlurController** out_m_b, app::MoonRenderPipelineAsset* srp_asset))
    IL2CPP_REGISTER_METHOD(0x00EB4920, void, ApplyLayerSettings, (app::RuntimeSliceRenderSettings * this_ptr, app::LayeredRenderSettings** destination, app::LayeredRenderSettings* settings, float weight))
    IL2CPP_REGISTER_METHOD(0x00EB4BB0, void, GenerateAllSlices, (app::RuntimeSliceRenderSettings * this_ptr, app::SliceRenderSettings* from, app::SliceRenderSettings* to, app::LayeredRenderSettings* from_layer, app::LayeredRenderSettings* to_layer, float dof_tween_time, app::MoonRenderPipelineAsset* srp_asset))
    IL2CPP_REGISTER_METHOD(0x00EB4E50, void, GenerateSlice, (app::RuntimeSliceRenderSettings * this_ptr, int32_t slice_idx, app::SliceRenderSettings* from, app::SliceRenderSettings* to, app::LayeredRenderSettings* from_layer, app::LayeredRenderSettings* to_layer, float dof_tween_time, app::MoonRenderPipelineAsset* srp_asset, bool should_do_ui_background_blur))
    IL2CPP_REGISTER_METHOD(0x00EB54E0, void, AnimateDof, (app::RuntimeSliceRenderSettings * this_ptr, int32_t idx, app::SliceRenderSettings_Slice* slice_setting, app::SliceRenderSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00EB5890, bool, IgnoreDof, (app::RuntimeSliceRenderSettings * this_ptr, app::SliceRenderSettings* settings, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00EB5990, void, ctor, (app::RuntimeSliceRenderSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00EB5AE0, void, cctor, ())
} // namespace app::classes::Moon::Rendering::RuntimeSliceRenderSettings
