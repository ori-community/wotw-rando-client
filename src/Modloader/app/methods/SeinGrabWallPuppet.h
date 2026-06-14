#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinGrabWallPuppet.h>

namespace app::classes::SeinGrabWallPuppet {
    IL2CPP_REGISTER_METHOD(0x00E3B530, int32_t, get_Id, app::SeinGrabWallPuppet* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6E60, void, ctor, app::SeinGrabWallPuppet* this_ptr)
} // namespace app::classes::SeinGrabWallPuppet
