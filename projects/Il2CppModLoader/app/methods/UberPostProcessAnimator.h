#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberPostProcessAnimator {
    IL2CPP_REGISTER_METHOD(0x00738690, float, get_Weight, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00990EC0, void, set_Weight, (app::UberPostProcessAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBC60, app::CameraSettings *, get_Settings, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC70, void, set_Settings, (app::UberPostProcessAnimator * this_ptr, app::CameraSettings * value))
    IL2CPP_REGISTER_METHOD(0x00417920, app::PostProcessInfluencerOrder__Enum, get_PostInfluenceApplyOrder, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::CameraSettingsAsset *, get_SettingsAssetForDebug, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F38A0, void, OnValidate, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F38B0, void, OnUpdateEntity, (app::UberPostProcessAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x018F38D0, void, OnStartPlayback, (app::UberPostProcessAnimator * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x018F39A0, void, OnStopPlayback, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F39A0, void, OnDisable, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F39B0, void, UpdateWithTime, (app::UberPostProcessAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x018F3A30, void, UpdateSettings, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F38D0, void, OnStartWhenPlaybackOrPreview, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F3C10, void, OnStopWhenPlaybackOrPreview, (app::UberPostProcessAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F3CB0, void, SampleValue, (app::UberPostProcessAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x018F3DE0, void, ctor, (app::UberPostProcessAnimator * this_ptr))
}
