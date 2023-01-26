#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TimelineParentOwnerUtils_c.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::TimelineParentOwnerUtils___c {
    IL2CPP_REGISTER_METHOD(0x01E960C0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimelineParentOwnerUtils_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E96200, bool, _AddChildrenTimelines_b__0_0, (app::TimelineParentOwnerUtils_c * this_ptr, app::MoonTimeline* timeline))
} // namespace app::classes::TimelineParentOwnerUtils___c
