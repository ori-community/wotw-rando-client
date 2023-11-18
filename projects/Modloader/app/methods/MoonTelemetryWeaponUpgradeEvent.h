#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryWeaponUpgradeEvent.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryWeaponUpgradeEvent {
    IL2CPP_REGISTER_METHOD(0x01472F90, void, ctor, (app::MoonTelemetryWeaponUpgradeEvent * this_ptr, app::AbilityType__Enum type, int32_t new_level, int32_t exp_spent))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::String*, get_Name, (app::MoonTelemetryWeaponUpgradeEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014730A0, void, SerializeToObject, (app::MoonTelemetryWeaponUpgradeEvent * this_ptr, app::JsonBuilder_Object obj))
} // namespace app::classes::MoonTelemetryWeaponUpgradeEvent
