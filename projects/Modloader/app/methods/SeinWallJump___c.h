#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinWallJump_c.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::SeinWallJump___c {
    IL2CPP_REGISTER_METHOD(0x00AB05D0, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SeinWallJump_c * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__80_0, (app::SeinWallJump_c * this_ptr, app::Vector2 _p0_))
} // namespace app::classes::SeinWallJump___c
