#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LeftRightTimeline__Boxed.h>
#include <Modloader/app/structs/LeftRightTimeline_Side__Enum.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::LeftRightTimeline {
    IL2CPP_REGISTER_METHOD(0x0012E3E0, void, Play, (app::LeftRightTimeline__Boxed * this_ptr, app::LeftRightTimeline_Side__Enum side))
    IL2CPP_REGISTER_METHOD(0x0012E410, void, Stop, (app::LeftRightTimeline__Boxed * this_ptr, app::LeftRightTimeline_Side__Enum side))
    IL2CPP_REGISTER_METHOD(0x0012E480, void, StopAll, (app::LeftRightTimeline__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012E4C0, app::MoonTimeline*, GetTimeline, (app::LeftRightTimeline__Boxed * this_ptr, app::LeftRightTimeline_Side__Enum side))
} // namespace app::classes::LeftRightTimeline
