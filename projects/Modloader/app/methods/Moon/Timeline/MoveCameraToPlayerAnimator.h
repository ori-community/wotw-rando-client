#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoveCameraToPlayerAnimator.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::MoveCameraToPlayerAnimator {
    IL2CPP_REGISTER_METHOD(0x00776270, void, OnStartPlayback, app::MoveCameraToPlayerAnimator* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, app::MoveCameraToPlayerAnimator* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00776330,
        void,
        SynchronizeData,
        app::MoveCameraToPlayerAnimator* this_ptr,
        app::MoonTimeline* timeline,
        app::TimelineEntityRecord* record
    )
    IL2CPP_REGISTER_METHOD(0x00776490, void, ctor, app::MoveCameraToPlayerAnimator* this_ptr)
} // namespace app::classes::Moon::Timeline::MoveCameraToPlayerAnimator
