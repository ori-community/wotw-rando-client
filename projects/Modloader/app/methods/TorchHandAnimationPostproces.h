#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TorchHandAnimationPostproces {
    IL2CPP_REGISTER_METHOD(0x00651560, int32_t, get_Order, (app::TorchHandAnimationPostproces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFFB90, void, OnAddedToAnimator, (app::TorchHandAnimationPostproces * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x00AFFCF0, void, OnRemovedFromAnimator, (app::TorchHandAnimationPostproces * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x00AFFD40, void, OnDeactivated, (app::TorchHandAnimationPostproces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00AFFD70, void, Process, (app::TorchHandAnimationPostproces * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00B00550, void, LateUpdate, (app::TorchHandAnimationPostproces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B005F0, int32_t, GetFacingDirection, (app::TorchHandAnimationPostproces * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B006B0, void, ctor, (app::TorchHandAnimationPostproces * this_ptr))
} // namespace app::classes::TorchHandAnimationPostproces
