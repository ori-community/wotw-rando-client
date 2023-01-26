#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/DepthOfFieldAnimator.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SliceRenderSettings.h>
#include <Modloader/app/structs/SliceRenderSettingsInfluencerOrder__Enum.h>

namespace app::classes::DepthOfFieldAnimator {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::LayeredRenderSettings*, get_LayeredRenderSettings, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC510, float, get_LayeredRenderSettingsWeight, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83350, void, set_LayeredRenderSettingsWeight, (app::DepthOfFieldAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::SliceRenderSettings*, get_SliceRenderInfluenceSettings, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC5D0, float, get_SliceRenderSettingsWeight, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D27B0, void, set_SliceRenderSettingsWeight, (app::DepthOfFieldAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x008556D0, app::SliceRenderSettingsInfluencerOrder__Enum, get_SliceRenderInfluenceOrder, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FC380, int32_t, get_SliceRenderInfluenceOrderOffset, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83360, void, OnStartPlayback, (app::DepthOfFieldAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00B83420, void, OnStartWhenPlaybackOrPreview, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B834D0, void, OnUpdateEntity, (app::DepthOfFieldAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00B834F0, void, UpdateWithTime, (app::DepthOfFieldAnimator * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00B83570, void, HandleLayerSettingsOverride, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83770, void, OnStopPlayback, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83770, void, OnDisable, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83780, void, OnStopWhenPlaybackOrPreview, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83920, void, CopySettingsFromScene, (app::DepthOfFieldAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B83BE0, void, ctor, (app::DepthOfFieldAnimator * this_ptr))
} // namespace app::classes::DepthOfFieldAnimator
