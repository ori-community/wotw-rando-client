#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone.h>
#include <Modloader/app/structs/CameraSettings.h>
#include <Modloader/app/structs/PostProcessInfluencerOrder__Enum.h>
#include <Modloader/app/structs/CameraSettingsAsset.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::VerticalCameraSettingsZone {
    IL2CPP_REGISTER_METHOD(0x013D4130, app::Vector3, get_PostPosition, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C0F0, float, get_Weight, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0043C100, void, set_Weight, (app::VerticalCameraSettingsZone * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::CameraSettings*, get_Settings, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::PostProcessInfluencerOrder__Enum, get_PostInfluenceApplyOrder, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D4320, app::CameraSettingsAsset*, get_SettingsAssetForDebug, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D43E0, void, Enable, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D4AD0, void, OnEnable, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D4AE0, void, OnDisable, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D4B90, void, SortItems, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D4DB0, void, StartUpdateCameraSettings, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D4F90, float, get_Radius, (app::VerticalCameraSettingsZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013D5060, void, Advance, (app::VerticalCameraSettingsZone * this_ptr, app::Vector2 position, float time_delta))
    IL2CPP_REGISTER_METHOD(0x013D53B0, void, UpdatePostInfluence, (app::VerticalCameraSettingsZone * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x013D5490, void, PostUpdatePostInfluence, (app::VerticalCameraSettingsZone * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x013D5680, bool, IsInside, (app::VerticalCameraSettingsZone * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x013D56D0, void, ctor, (app::VerticalCameraSettingsZone * this_ptr))
} // namespace app::classes::VerticalCameraSettingsZone
