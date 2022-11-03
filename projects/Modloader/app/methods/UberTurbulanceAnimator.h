#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberTurbulanceAnimator {
    IL2CPP_REGISTER_METHOD(0x01291E10, float, get_SpeedWeight, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01291E90, float, get_MagnitudeWeight, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_TurbulenceMagnitude, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_TurbulenceSpeed, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::TurbulenceInfluencerOrder__Enum, get_TurbulenceApplyOrder, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00763250, void, OnUpdateEntity, (app::UberTurbulanceAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01291F10, void, OnStartPlayback, (app::UberTurbulanceAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x01291FB0, void, OnStopPlayback, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01291FB0, void, OnDisable, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01291FC0, void, OnStartWhenPlaybackOrPreview, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01292060, void, OnStopWhenPlaybackOrPreview, (app::UberTurbulanceAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01292100, void, UpdateAtTime, (app::UberTurbulanceAnimator * this_ptr, float time_value))
    IL2CPP_REGISTER_METHOD(0x01292110, void, ctor, (app::UberTurbulanceAnimator * this_ptr))
} // namespace app::classes::UberTurbulanceAnimator
