#pragma once

#include <Common/ext.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/macros.h>
#include <Randomizer/seed/instruction_utils.h>
#include <functional>


namespace core::api::uber_states {
    struct CORE_DLLEXPORT UberStateCondition {
        explicit UberStateCondition(const UntypedUberState& state, randomizer::seed::Comparator op = randomizer::seed::Comparator::Greater, double value = 0.0f);

        UntypedUberState state;
        randomizer::seed::Comparator op;
        double value;

        [[nodiscard]] bool is_fulfilled();
    };

    CORE_DLLEXPORT bool operator==(UberStateCondition const& a, UberStateCondition const& b);
} // namespace core::api::uber_states

template<>
struct std::hash<core::api::uber_states::UberStateCondition> {
    std::size_t operator()(const core::api::uber_states::UberStateCondition& s) const noexcept {
        return hash<core::api::uber_states::UntypedUberId>()(s.state.get_uber_id()) ^ (hash<double>()(s.value) << 1) ^ (hash<int>()(static_cast<int>(s.op)) << 2);
    }
};
