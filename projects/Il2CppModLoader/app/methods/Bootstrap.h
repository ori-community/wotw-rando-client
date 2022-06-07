#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Bootstrap {
    IL2CPP_REGISTER_METHOD(0x00D3A4F0, void, Awake, (app::Bootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00D3A720, void, FixedUpdate, (app::Bootstrap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Bootstrap * this_ptr))
}
