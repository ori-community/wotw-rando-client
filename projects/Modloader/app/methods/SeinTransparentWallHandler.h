#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinTransparentWallHandler.h>

namespace app::classes::SeinTransparentWallHandler {
    IL2CPP_REGISTER_METHOD(0x00A9FC40, void, Awake, app::SeinTransparentWallHandler* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SeinTransparentWallHandler* this_ptr)
} // namespace app::classes::SeinTransparentWallHandler
