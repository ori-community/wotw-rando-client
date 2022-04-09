#pragma once

#include <optional>

namespace randomizer
{
    namespace conditions
    {
        using condition_uber_state_intercept = std::optional<bool>(*)(app::ConditionUberState* state);

        void register_condition_uber_state_intercept(int group, int state, condition_uber_state_intercept intercept);
    }
}
