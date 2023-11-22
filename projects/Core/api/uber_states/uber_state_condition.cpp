#include <api/uber_states/uber_state_condition.h>
#include <Modloader/modloader.h>

#include <fmt/format.h>
#include <Common/ext.h>

namespace core::api::uber_states {
    bool UberStateCondition::resolve() const {
        if (!state.valid()) {
            return false;
        }

        return resolve(state, state.get<double>());
    }

    bool UberStateCondition::resolve(double state_value) const {
        return resolve(state, state_value);
    }

    bool UberStateCondition::resolve(UberState compared_state, double state_value) const {
        if (!state.valid() || !compared_state.valid() || state != compared_state) {
            return false;
        }

        return common::resolve_operator(state_value, value, op);
    }

    bool operator==(UberStateCondition const& a, UberStateCondition const& b) {
        return a.op == b.op && a.state == b.state && a.value == b.value;
    }

    bool operator<(UberStateCondition const& a, UberStateCondition const& b) {
        if (a.state.group() != b.state.group()) {
            return a.state.group() < b.state.group();
        }

        if (a.state.state() != b.state.state()) {
            return a.state.state() < b.state.state();
        }

        if (a.op != b.op) {
            return a.op < b.op;
        }

        return a.value < b.value;
    }

    CORE_DLLEXPORT bool parse_condition(std::string_view str, UberStateCondition& condition) {
        std::vector<std::string> parts;
        split_str(str, parts, '|');
        return parse_condition(parts, condition);
    }

    CORE_DLLEXPORT bool parse_condition(std::vector<std::string> const& parts, UberStateCondition& condition) {
        return parse_condition(std::span(parts.begin(), parts.end()), condition);
    }

    CORE_DLLEXPORT bool parse_condition(std::span<std::string const> parts, UberStateCondition& condition, bool* used_default_operator) {
        if (parts.size() < 2) {
            return false;
        }

        double value = 0;
        auto state_str = parts[1];
        auto result = common::parse_operator(state_str);
        if (result.has_value()) {
            if (result->prefix.empty() || result->suffix.empty()) {
                modloader::warn("uber_state_condition", fmt::format("Failed to parse {}: Invalid condition", state_str));
                return false;
            }

            condition.op = result->op;
            state_str = result->prefix;
            if (!string_convert(result->suffix, value)) {
                return false;
            }
        } else {
            condition.op = BooleanOperator::Greater;
        }

        if (used_default_operator != nullptr) {
            *used_default_operator = !result.has_value();
        }

        int group;
            if (!string_convert(parts[0], group)) {
            return false;
        }

        int state;
        if (!string_convert(state_str, state)) {
            return false;
        }

        condition.state = core::api::uber_states::UberState(group, state);
        condition.value = value;
        return true;
    }
} // namespace core::api::uber_states
