#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/OverrideReactionAnimator.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::Timeline::OverrideReactionAnimator {
    IL2CPP_REGISTER_METHOD(0x00777E30, void, OnStartPlayback, (app::OverrideReactionAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00777F20, void, SynchronizeData, (app::OverrideReactionAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00773A00, void, ctor, (app::OverrideReactionAnimator * this_ptr))
} // namespace app::classes::Moon::Timeline::OverrideReactionAnimator
