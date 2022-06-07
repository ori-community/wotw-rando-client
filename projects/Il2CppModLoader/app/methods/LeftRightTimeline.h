#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::LeftRightTimeline {
    IL2CPP_REGISTER_METHOD(0x0012E3E0, void, Play, (app::LeftRightTimeline__Boxed * this_ptr, app::LeftRightTimeline_Side__Enum side))
    IL2CPP_REGISTER_METHOD(0x0012E410, void, Stop, (app::LeftRightTimeline__Boxed * this_ptr, app::LeftRightTimeline_Side__Enum side))
    IL2CPP_REGISTER_METHOD(0x0012E480, void, StopAll, (app::LeftRightTimeline__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0012E4C0, app::MoonTimeline *, GetTimeline, (app::LeftRightTimeline__Boxed * this_ptr, app::LeftRightTimeline_Side__Enum side))
}
