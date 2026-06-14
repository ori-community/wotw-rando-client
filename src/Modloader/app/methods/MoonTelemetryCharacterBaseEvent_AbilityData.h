#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/MoonTelemetryCharacterBaseEvent_AbilityData.h>

namespace app::classes::MoonTelemetryCharacterBaseEvent_AbilityData {
    IL2CPP_REGISTER_METHOD(0x01469FE0, app::MoonTelemetryCharacterBaseEvent_AbilityData, Create, app::AbilityType__Enum ability)
}
