#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CameraPostProcessing {
    IL2CPP_REGISTER_METHOD(0x0169F5E0, app::List_1_IPostProcessInfluencer_ *, get_Influencers, ())
    IL2CPP_REGISTER_METHOD(0x002FB990, app::CameraSettings *, get_CameraSettingsToUse, (app::CameraPostProcessing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::SceneDefaultSettingsHelper *, get_SceneSettingsHelper, (app::CameraPostProcessing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169F680, void, SaveCameraSettings, (app::CameraPostProcessing * this_ptr, app::CameraSettingsAsset * camera_settings))
    IL2CPP_REGISTER_METHOD(0x0169F6A0, void, ApplyCameraSettings, (app::CameraPostProcessing * this_ptr, app::CameraSettings * camera_settings))
    IL2CPP_REGISTER_METHOD(0x0169F870, void, Apply, (app::CameraPostProcessing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169F8A0, void, Advance, (app::CameraPostProcessing * this_ptr, float time_delta))
    IL2CPP_REGISTER_METHOD(0x016A0860, void, AddPostInfluencer, (app::IPostProcessInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x016A0B10, void, RemovePostInfluencer, (app::IPostProcessInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x016A0C30, bool, IsPostInfluencerRegistered, (app::IPostProcessInfluencer * influencer))
    IL2CPP_REGISTER_METHOD(0x016A0CF0, void, SetCameraSettings, (app::CameraPostProcessing * this_ptr, app::CameraSettings * camera_settings, bool force_apply_to_scene_camera))
    IL2CPP_REGISTER_METHOD(0x016A0D30, void, ForceFogIntoCurrentCameraSettings, (app::CameraPostProcessing * this_ptr, app::FogGradientController * fog_gradient_controller))
    IL2CPP_REGISTER_METHOD(0x01132D30, void, ResetFog, (app::CameraPostProcessing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01132D30, void, ForceApplySettings, (app::CameraPostProcessing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A0DC0, void, ctor, (app::CameraPostProcessing * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016A10F0, void, cctor, ())
}
