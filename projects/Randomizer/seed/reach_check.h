#pragma once

#include <Core/api/uber_states/uber_state_condition.h>

#include <unordered_set>

namespace randomizer::seedgen_interop {
    struct ReachCheckResult {
        struct Data
        {
            std::unordered_set<core::api::uber_states::UberStateCondition> reached;
        };

        bool reachable(core::api::uber_states::UberStateCondition location) const;
        bool is_same_as(const ReachCheckResult& other) const;

        Data data;
    };

    using reach_check_callback_t = std::function<void(const std::optional<ReachCheckResult>& result)>;

    void request_states_update_on_next_reach_check();
    void reach_check(reach_check_callback_t callback);
    bool is_state(const core::api::uber_states::UberStateCondition& condition);
} // namespace randomizer::seed
