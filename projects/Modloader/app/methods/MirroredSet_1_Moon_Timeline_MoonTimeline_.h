#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MirroredSet_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::MirroredSet_1_Moon_Timeline_MoonTimeline_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::MirroredSet_1_Moon_Timeline_MoonTimeline_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747180, MirroredSet_1_Moon_Timeline_MoonTimeline___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019FA1B0, app::MoonTimeline*, GetItem, (app::MirroredSet_1_Moon_Timeline_MoonTimeline_ * this_ptr, float look_direction))
} // namespace app::classes::MirroredSet_1_Moon_Timeline_MoonTimeline_
