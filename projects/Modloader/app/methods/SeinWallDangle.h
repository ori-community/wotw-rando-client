#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinWallDangle.h>

namespace app::classes::SeinWallDangle {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_IsBlindForest, app::SeinWallDangle* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005C9550, void, ctor, app::SeinWallDangle* this_ptr)
} // namespace app::classes::SeinWallDangle
