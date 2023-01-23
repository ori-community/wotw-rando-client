#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberBloomAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::UberBloomAnimator {
    IL2CPP_REGISTER_METHOD(0x01291E10, float, get_IntensityWeight, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623260, float, get_IntensityValue, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01291E90, float, get_ThresholdWeight, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007F58D0, float, get_ThresholdValue, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E38F0, void, OnUpdateEntity, (app::UberBloomAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x013E39E0, void, OnStartPlayback, (app::UberBloomAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013E3AB0, void, OnStopPlayback, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E3B90, void, OnDisable, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E39E0, void, OnStartWhenPlaybackOrPreview, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E3BA0, void, OnStopWhenPlaybackOrPreview, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01292100, void, UpdateAtTime, (app::UberBloomAnimator * this_ptr, float time_value))
    IL2CPP_REGISTER_METHOD(0x013E3C60, void, ctor, (app::UberBloomAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4080, void, cctor, ())
} // namespace app::classes::UberBloomAnimator
