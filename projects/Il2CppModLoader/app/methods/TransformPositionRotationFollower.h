#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TransformPositionRotationFollower {
    IL2CPP_REGISTER_METHOD(0x00B07E00, void, Awake, (app::TransformPositionRotationFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B07E10, void, Init, (app::TransformPositionRotationFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B08250, void, FixedUpdate, (app::TransformPositionRotationFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C1E80, void, ctor, (app::TransformPositionRotationFollower * this_ptr))
}
