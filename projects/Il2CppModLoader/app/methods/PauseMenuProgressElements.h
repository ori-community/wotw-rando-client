#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PauseMenuProgressElements {
    IL2CPP_REGISTER_METHOD(0x0044A450, void, Setup, (app::PauseMenuProgressElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044A680, void, UpdateElements, (app::PauseMenuProgressElements * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PauseMenuProgressElements * this_ptr))
}
