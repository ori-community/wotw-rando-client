#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MusicListener {
    IL2CPP_REGISTER_METHOD(0x0087DEC0, void, OnEnable, (app::MusicListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087E0D0, void, OnDisable, (app::MusicListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087E1C0, void, FixedUpdate, (app::MusicListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::MusicListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087E680, void, cctor, ())
} // namespace app::classes::MusicListener
