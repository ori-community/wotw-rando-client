#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IKWeightAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::IKWeightAnimator {
    IL2CPP_REGISTER_METHOD(0x0076FD40, void, OnStartPlayback, (app::IKWeightAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0076FD90, void, OnUpdateEntity, (app::IKWeightAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0076FF70, void, OnStopPlayback, (app::IKWeightAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076FFA0, void, ctor, (app::IKWeightAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::IKWeightAnimator
