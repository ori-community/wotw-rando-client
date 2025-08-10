#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SmoothTransformFollower.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SmoothTransformFollower {
    IL2CPP_REGISTER_METHOD(0x006D39F0, app::Vector3, get_CurrentFollowedPosition, app::SmoothTransformFollower* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D3B50, void, Start, app::SmoothTransformFollower* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D3B80, void, FixedUpdate, app::SmoothTransformFollower* this_ptr)
    IL2CPP_REGISTER_METHOD(0x006D4140, void, ctor, app::SmoothTransformFollower* this_ptr)
} // namespace app::classes::SmoothTransformFollower
