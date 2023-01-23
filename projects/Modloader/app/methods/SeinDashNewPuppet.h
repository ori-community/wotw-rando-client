#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SeinDashNewPuppet.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::SeinDashNewPuppet {
    IL2CPP_REGISTER_METHOD(0x006FD440, void, Awake, (app::SeinDashNewPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006FD5D0, float, GetGravity, (app::SeinDashNewPuppet * this_ptr, app::MoonTimeline* timeline, float default_value))
    IL2CPP_REGISTER_METHOD(0x006FD6F0, int32_t, get_Id, (app::SeinDashNewPuppet * this_ptr))
    IL2CPP_REGISTER_METHOD(0x006FD700, void, ctor, (app::SeinDashNewPuppet * this_ptr))
} // namespace app::classes::SeinDashNewPuppet
