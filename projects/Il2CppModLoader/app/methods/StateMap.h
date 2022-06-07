#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StateMap {
    IL2CPP_REGISTER_METHOD(0x00597B10, int32_t, Resolve, (app::StateMap * this_ptr, app::IUberState * uber_state))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::StateMap * this_ptr))
}
