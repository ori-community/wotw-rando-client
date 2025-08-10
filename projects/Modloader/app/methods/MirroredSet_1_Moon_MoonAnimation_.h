#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MirroredSet_1_Moon_MoonAnimation_.h>
#include <Modloader/app/structs/MoonAnimation.h>

namespace app::classes::MirroredSet_1_Moon_MoonAnimation_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::MirroredSet_1_Moon_MoonAnimation_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019FA1B0, app::MoonAnimation*, GetItem, app::MirroredSet_1_Moon_MoonAnimation_* this_ptr, float look_direction)
} // namespace app::classes::MirroredSet_1_Moon_MoonAnimation_
