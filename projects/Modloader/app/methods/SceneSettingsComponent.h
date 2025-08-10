#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/FogGradientController.h>
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/SceneSettings.h>
#include <Modloader/app/structs/SceneSettingsComponent.h>
#include <Modloader/app/structs/SliceRenderSettings_Slice__Array.h>

namespace app::classes::SceneSettingsComponent {
    IL2CPP_REGISTER_METHOD(0x00BBDFF0, app::SceneSettings*, get_GetSettings, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBE170, void, UpdateSceneSettings, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBE6B0, void, ResetSettings, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBE6D0, app::CameraSettings*, GetCameraSettings, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::FogGradientController*, get_SceneFogSettings, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_SceneFogSettings, app::SceneSettingsComponent* this_ptr, app::FogGradientController* value)
    IL2CPP_REGISTER_METHOD(0x00BBE850, bool, get_HasFogSettings, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBE900, void, FixedUpdate, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBE910, int32_t, GetHighestResolutionSliceIndex, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBEA70, float, GetDownSamplingRatioForRenderer_1, app::SceneSettingsComponent* this_ptr, app::Renderer* renderer)
    IL2CPP_REGISTER_METHOD(
        0x00BBEC50,
        float,
        GetDownSamplingRatioForRenderer_2,
        app::Renderer* renderer,
        app::SliceRenderSettings_Slice__Array* slices,
        app::LayeredRenderSettings* layered_render_settings
    )
    IL2CPP_REGISTER_METHOD(0x00BBED90, float, GetDofRatioForRenderer_1, app::SceneSettingsComponent* this_ptr, app::Renderer* renderer)
    IL2CPP_REGISTER_METHOD(
        0x00BBEF60,
        float,
        GetDofRatioForRenderer_2,
        app::Renderer* renderer,
        app::SliceRenderSettings_Slice__Array* slices,
        app::LayeredRenderSettings* layered_render_settings
    )
    IL2CPP_REGISTER_METHOD(0x00BBF0A0, int32_t, GetLayerIndexForRenderer_1, app::SceneSettingsComponent* this_ptr, app::Renderer* renderer)
    IL2CPP_REGISTER_METHOD(
        0x00BBF1E0,
        int32_t,
        GetLayerIndexForRenderer_2,
        app::SceneSettingsComponent* this_ptr,
        app::Renderer* renderer,
        app::SliceRenderSettings_Slice__Array* slices,
        app::LayeredRenderSettings* layered_render_settings
    )
    IL2CPP_REGISTER_METHOD(0x00BBF300, void, ctor, app::SceneSettingsComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00BBF590, void, cctor, )
} // namespace app::classes::SceneSettingsComponent
