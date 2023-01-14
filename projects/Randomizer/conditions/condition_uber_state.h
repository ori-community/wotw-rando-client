#pragma once

#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/structs/ConditionUberState.h>

#include <optional>

namespace randomizer {
    namespace conditions {
        using condition_uber_state_intercept = std::optional<bool> (*)(app::ConditionUberState* state);

        void register_condition_uber_state_intercept(core::api::uber_states::UberState state, condition_uber_state_intercept intercept);
    } // namespace conditions
} // namespace randomizer
