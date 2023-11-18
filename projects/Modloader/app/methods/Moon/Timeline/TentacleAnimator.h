#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TentacleAnimator.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::TentacleAnimator {
    IL2CPP_REGISTER_METHOD(0x00D0AEB0, void, OnStartPlayback, (app::TentacleAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00D0AEE0, void, OnStopPlayback, (app::TentacleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0AF00, void, OnUpdateEntity, (app::TentacleAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00D0AF30, void, OnStartTimelineSample, (app::TentacleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0AF50, void, OnTimelineSample, (app::TentacleAnimator * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00D0AFF0, void, OnDrawGizmosSelected, (app::TentacleAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D0B1C0, void, ctor, (app::TentacleAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::TentacleAnimator
