#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Enemy3D {
    IL2CPP_REGISTER_METHOD(0x006C14C0, bool, get_FaceLeft, (app::Enemy3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF1B0, void, set_FaceLeft, (app::Enemy3D * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00BFF220, void, FacePlayer, (app::Enemy3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFF260, bool, get_IsFacingPlayer, (app::Enemy3D * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443680, void, ctor, (app::Enemy3D * this_ptr))
}
