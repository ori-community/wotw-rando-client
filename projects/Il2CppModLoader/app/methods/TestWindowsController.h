#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TestWindowsController {
    IL2CPP_REGISTER_METHOD(0x010E2930, void, Start, (app::TestWindowsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E29F0, void, FixedUpdate, (app::TestWindowsController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TestWindowsController * this_ptr))
}
