#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/StarSlugChargingState.h>
#include <Modloader/app/structs/StarSlugEnemy.h>

namespace app::classes::StarSlugChargingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, app::StarSlugChargingState* this_ptr, app::StarSlugEnemy* slug)
    IL2CPP_REGISTER_METHOD(0x009AF290, void, OnEnter, app::StarSlugChargingState* this_ptr)
} // namespace app::classes::StarSlugChargingState
