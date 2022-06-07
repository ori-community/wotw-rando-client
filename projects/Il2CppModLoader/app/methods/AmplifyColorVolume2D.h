#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AmplifyColorVolume2D {
    IL2CPP_REGISTER_METHOD(0x030DB6E0, void, OnTriggerEnter2D, (app::AmplifyColorVolume2D * this_ptr, app::Collider2D * other))
    IL2CPP_REGISTER_METHOD(0x030DB880, void, OnTriggerExit2D, (app::AmplifyColorVolume2D * this_ptr, app::Collider2D * other))
    IL2CPP_REGISTER_METHOD(0x030DB6D0, void, ctor, (app::AmplifyColorVolume2D * this_ptr))
}
