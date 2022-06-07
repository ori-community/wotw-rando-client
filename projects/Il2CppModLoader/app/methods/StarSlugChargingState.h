#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::StarSlugChargingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::StarSlugChargingState * this_ptr, app::StarSlugEnemy * slug))
    IL2CPP_REGISTER_METHOD(0x009AF290, void, OnEnter, (app::StarSlugChargingState * this_ptr))
}
