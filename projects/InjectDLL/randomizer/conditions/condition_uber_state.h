#pragma once

#include <uber_states/uber_state_interface.h>

#include <optional>

namespace randomizer
{
    namespace conditions
    {
        using condition_uber_state_intercept = std::optional<bool>(*)(app::ConditionUberState* state);

        void register_condition_uber_state_intercept(uber_states::UberState state, condition_uber_state_intercept intercept);
    }
}
