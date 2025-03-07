#pragma once

#include <Common/ext.h>

#include <Core/api/uber_states/uber_state.h>
#include <Core/enums/uber_state.h>
#include <Core/macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/IUberState.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SerializedFloatUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>

#include <functional>
#include <span>

namespace core::api::uber_states {
    struct CORE_DLLEXPORT UberStateCondition {
        UberStateCondition();
        explicit UberStateCondition(const UberState& state, BooleanOperator op = BooleanOperator::Greater, double value = 0.0f);
        explicit UberStateCondition(int group, int state, BooleanOperator op = BooleanOperator::Greater, double value = 0.0f);
        explicit UberStateCondition(UberStateGroup group, int state, BooleanOperator op = BooleanOperator::Greater, double value = 0.0f);

        UberState state;
        BooleanOperator op;
        double value;

        [[nodiscard]] bool resolve() const;

        [[nodiscard]] bool resolve(double state_value) const;

        [[nodiscard]] bool resolve(UberState compared_state, double state_value) const;

        /** Returns the lowest value that satisfies this condition */
        double lower_bound_value() const;

        std::string serialize() const;

        std::string to_string(bool use_names = false, std::optional<double> previous_value = std::nullopt) const;
    };

    CORE_DLLEXPORT bool operator==(UberStateCondition const& a, UberStateCondition const& b);

    CORE_DLLEXPORT bool operator<(UberStateCondition const& a, UberStateCondition const& b);

    CORE_DLLEXPORT bool parse_condition(std::string_view str, UberStateCondition& condition);

    CORE_DLLEXPORT bool parse_condition(std::vector<std::string> const& parts, UberStateCondition& condition);

    CORE_DLLEXPORT bool parse_condition(std::span<std::string const> parts, UberStateCondition& condition, bool* used_default_operator = nullptr);
} // namespace core::api::uber_states

template<>
struct std::hash<core::api::uber_states::UberStateCondition> {
    std::size_t operator()(const core::api::uber_states::UberStateCondition& s) const {
        return hash<core::api::uber_states::UberState>()(s.state) ^ (hash<double>()(s.value) << 1) ^ (hash<int>()(static_cast<int>(s.op)) << 2);
    }
};
