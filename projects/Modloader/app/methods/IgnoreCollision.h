#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IgnoreCollision.h>

namespace app::classes::IgnoreCollision {
    IL2CPP_REGISTER_METHOD(0x006267B0, void, OnEnable, (app::IgnoreCollision * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00626870, void, ctor, (app::IgnoreCollision * this_ptr))
} // namespace app::classes::IgnoreCollision
