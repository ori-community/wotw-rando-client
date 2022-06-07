#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AmbienceListener {
    IL2CPP_REGISTER_METHOD(0x004F6DB0, void, FixedUpdate, (app::AmbienceListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::AmbienceListener * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F71F0, void, cctor, ())
}
