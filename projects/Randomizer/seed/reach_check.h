#pragma once

#include <Core/api/uber_states/uber_state_condition.h>

namespace randomizer::seed {
    struct ReachCheckResult {
        bool reachable(core::api::uber_states::UberStateCondition location) const;
    };

    using reach_check_callback = std::function<void(ReachCheckResult result)>;

    void reach_check(reach_check_callback callback);
} // namespace randomizer::seed
