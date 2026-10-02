#pragma once

#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/structs/ConditionUberState.h>

#include <optional>

namespace randomizer::conditions {
    using condition_uber_state_intercept_t = std::optional<bool> (*)(app::ConditionUberState* state);

    void register_condition_uber_state_intercept(
        core::api::uber_states::UberId<core::api::uber_states::UberStateType::ConditionUberState> state_id,
        condition_uber_state_intercept_t intercept
    );
} // namespace randomizer::conditions
