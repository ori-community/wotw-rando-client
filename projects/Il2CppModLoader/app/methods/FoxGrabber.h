#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FoxGrabber {
    IL2CPP_REGISTER_METHOD(0x016331B0, void, Awake, (app::FoxGrabber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01633240, void, LateUpdate, (app::FoxGrabber * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016334C0, void, OnTriggerEnter, (app::FoxGrabber * this_ptr, app::Collider* other))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FoxGrabber * this_ptr))
} // namespace app::classes::FoxGrabber
