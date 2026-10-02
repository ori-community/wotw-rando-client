#pragma once

#include <Common/event_bus.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>

#include <functional>

namespace core::api::uber_states {
    CORE_DLLEXPORT void apply_all();
    CORE_DLLEXPORT void clear();
} // namespace core::api::uber_states
