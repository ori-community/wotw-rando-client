#pragma once

#include <Common/ext.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>
#include <functional>
#include <span>
#include <Randomizer/seed/instruction_utils.h>


namespace core::api::uber_states {
    struct CORE_DLLEXPORT UberStateCondition {
        UberStateCondition();
        explicit UberStateCondition(const UberState& state, randomizer::seed::Comparator op = randomizer::seed::Comparator::Greater, double value = 0.0f);
        explicit UberStateCondition(int group, int state, randomizer::seed::Comparator op = randomizer::seed::Comparator::Greater, double value = 0.0f);
        explicit UberStateCondition(UberStateGroup group, int state, randomizer::seed::Comparator op = randomizer::seed::Comparator::Greater, double value = 0.0f);

        UberState state;
        randomizer::seed::Comparator op;
        double value;

        [[nodiscard]] bool resolve() const;

        [[nodiscard]] bool resolve(double state_value) const;

        [[nodiscard]] bool resolve(UberState compared_state, double state_value) const;

        /** Returns the lowest value that satisfies this condition */
        double lower_bound_value() const;
    };

    CORE_DLLEXPORT bool operator==(UberStateCondition const& a, UberStateCondition const& b);

    CORE_DLLEXPORT bool operator<(UberStateCondition const& a, UberStateCondition const& b);
} // namespace core::api::uber_states

template<>
struct std::hash<core::api::uber_states::UberStateCondition> {
    std::size_t operator()(const core::api::uber_states::UberStateCondition& s) const {
        return hash<core::api::uber_states::UberState>()(s.state) ^ (hash<double>()(s.value) << 1) ^ (hash<int>()(static_cast<int>(s.op)) << 2);
    }
};
