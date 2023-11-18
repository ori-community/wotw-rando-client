#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PauseAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::PauseAnimator {
    IL2CPP_REGISTER_METHOD(0x00779290, void, OnStartPlayback, (app::PauseAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x007793C0, void, FixedUpdate, (app::PauseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00779520, void, Awake, (app::PauseAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00773A00, void, ctor, (app::PauseAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::PauseAnimator
