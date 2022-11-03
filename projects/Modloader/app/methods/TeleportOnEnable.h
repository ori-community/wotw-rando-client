#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TeleportOnEnable {
    IL2CPP_REGISTER_METHOD(0x00CE8BA0, void, OnEnable, (app::TeleportOnEnable * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TeleportOnEnable * this_ptr))
} // namespace app::classes::TeleportOnEnable
