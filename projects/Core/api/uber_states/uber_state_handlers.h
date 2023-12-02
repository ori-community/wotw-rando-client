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
    struct UberStateCallbackParams {
        UberState state;
        double previous_value;
        double value;
    };

    CORE_DLLEXPORT void apply_all();
    CORE_DLLEXPORT void clear();

    CORE_DLLEXPORT common::CollectingEventBus<bool, UberStateCallbackParams const&>& interception_bus();
    CORE_DLLEXPORT common::EventBus<UberStateCallbackParams const&>& notification_bus();
    CORE_DLLEXPORT common::EventBus<UberStateCallbackParams const&, UberState>& single_notification_bus();

    CORE_DLLEXPORT UberStateType resolve_type(app::IUberState* uber_state);
} // namespace core::api::uber_states
