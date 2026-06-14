#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DestroyWhenInvisible.h>

namespace app::classes::DestroyWhenInvisible {
    IL2CPP_REGISTER_METHOD(0x00B8D9B0, void, FixedUpdate, app::DestroyWhenInvisible* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, app::DestroyWhenInvisible* this_ptr)
} // namespace app::classes::DestroyWhenInvisible
