#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AcidSlugChargingState.h>
#include <Modloader/app/structs/AcidSlugEnemy.h>

namespace app::classes::AcidSlugChargingState {
    IL2CPP_REGISTER_METHOD(0x004C1E90, void, ctor, (app::AcidSlugChargingState * this_ptr, app::AcidSlugEnemy* slug))
    IL2CPP_REGISTER_METHOD(0x004C1EA0, void, OnEnter, (app::AcidSlugChargingState * this_ptr))
} // namespace app::classes::AcidSlugChargingState
