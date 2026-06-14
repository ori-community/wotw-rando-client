#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bootstrap.h>

namespace app::classes::Bootstrap {
    IL2CPP_REGISTER_METHOD(0x00D3A4F0, void, Awake, app::Bootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D3A720, void, FixedUpdate, app::Bootstrap* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::Bootstrap* this_ptr)
} // namespace app::classes::Bootstrap
