#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MirroringAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::MirroringAnimator {
    IL2CPP_REGISTER_METHOD(0x007760F0, void, OnStartPlayback, (app::MirroringAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00773A00, void, ctor, (app::MirroringAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::MirroringAnimator
