#pragma once

#include <Core/api/uber_states/uber_state_condition.h>

#include <unordered_set>

namespace randomizer::seed {
    struct ReachCheckResult {
        struct Data
        {
            std::unordered_set<core::api::uber_states::UberStateCondition> reached;
        };

        bool reachable(core::api::uber_states::UberStateCondition location) const;

        Data data;
    };

    using reach_check_callback = std::function<void(ReachCheckResult result)>;

    void reach_check(reach_check_callback callback);
} // namespace randomizer::seed
