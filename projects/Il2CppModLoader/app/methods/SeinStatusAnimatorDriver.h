#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::SeinStatusAnimatorDriver {
    IL2CPP_REGISTER_METHOD(0x00A7E010, void, Start, (app::SeinStatusAnimatorDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7E090, void, FixedUpdate, (app::SeinStatusAnimatorDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7E110, float, GetValue, (app::SeinStatusAnimatorDriver * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A7E650, void, ctor, (app::SeinStatusAnimatorDriver * this_ptr))
} // namespace app::classes::SeinStatusAnimatorDriver
