#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ApplicationQuit {
    IL2CPP_REGISTER_METHOD(0x00505970, void, Awake, (app::ApplicationQuit_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00505AA0, void, Update, (app::ApplicationQuit_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ApplicationQuit_1 * this_ptr))
}
