#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberBrightnessContrastAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::UberBrightnessContrastAnimator {
    IL2CPP_REGISTER_METHOD(0x013E41D0, float, get_Weight, (app::UberBrightnessContrastAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4250, void, OnUpdateEntity, (app::UberBrightnessContrastAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x013E4270, void, OnStartPlayback, (app::UberBrightnessContrastAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x013E4340, void, OnStopPlayback, (app::UberBrightnessContrastAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4340, void, OnDisable, (app::UberBrightnessContrastAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4350, void, OnStartWhenPlaybackOrPreview, (app::UberBrightnessContrastAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4410, void, OnStopWhenPlaybackOrPreview, (app::UberBrightnessContrastAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00623270, void, UpdateAtTime, (app::UberBrightnessContrastAnimator * this_ptr, float time_value))
    IL2CPP_REGISTER_METHOD(0x013E44D0, void, ctor, (app::UberBrightnessContrastAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013E4730, void, cctor, ())
} // namespace app::classes::UberBrightnessContrastAnimator
