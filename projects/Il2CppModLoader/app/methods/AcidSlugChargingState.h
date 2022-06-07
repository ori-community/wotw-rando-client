#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AcidSlugChargingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::AcidSlugChargingState * this_ptr, app::AcidSlugEnemy * slug))
    IL2CPP_REGISTER_METHOD(0x004C1EA0, void, OnEnter, (app::AcidSlugChargingState * this_ptr))
}
