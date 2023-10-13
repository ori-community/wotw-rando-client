#pragma once

#include <Core/api/uber_states/uber_state_condition.h>

#include <string>

namespace randomizer::state_data {
    class State {
    public:
        std::string name;
        core::api::uber_states::UberStateCondition condition;
    };
} // namespace randomizer::location_data
