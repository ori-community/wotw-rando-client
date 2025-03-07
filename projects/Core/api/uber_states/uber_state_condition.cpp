#include <Core/api/uber_states/uber_state_condition.h>
#include <Modloader/modloader.h>

#include <Common/ext.h>
#include <format>

namespace core::api::uber_states {
    UberStateCondition::UberStateCondition() : UberStateCondition(UberState()) {}

    UberStateCondition::UberStateCondition(const UberState& state, const BooleanOperator op, const double value) :
        state(state),
        op(op),
        value(value) {}

    UberStateCondition::UberStateCondition(const int group, const int state, const BooleanOperator op, const double value) :
        UberStateCondition(UberState(group, state), op, value) {}

    UberStateCondition::UberStateCondition(const UberStateGroup group, const int state, const BooleanOperator op, const double value) :
        UberStateCondition(UberState(group, state), op, value) {}

    bool UberStateCondition::resolve() const {
        if (!state.valid()) {
            return false;
        }

        return resolve(state, state.get<double>());
    }

    bool UberStateCondition::resolve(double state_value) const { return resolve(state, state_value); }

    bool UberStateCondition::resolve(UberState compared_state, double state_value) const {
        if (!state.valid() || !compared_state.valid() || state != compared_state) {
            return false;
        }

        return common::resolve_operator(state_value, value, op);
    }

    double UberStateCondition::lower_bound_value() const {
        if (op == BooleanOperator::Equals) {
            return value;
        }

        switch (state.value_type()) {
            case ValueType::Unknown:
                return 0.0;
            case ValueType::Boolean:
            case ValueType::Byte:
            case ValueType::Integer:
                switch (op) {
                    case BooleanOperator::GreaterOrEquals:
                        return value;
                    case BooleanOperator::LesserOrEquals:
                        return 0;
                    case BooleanOperator::NotEquals:
                        return value != 0.0 ? 0.0 : 1.0;
                    case BooleanOperator::Greater:
                        return value + 1.0;
                    case BooleanOperator::Lesser:
                        return value != 0.0 ? 0.0 : 1.0;
                    default:;
                }
                break;
            case ValueType::Float:
                switch (op) {
                    case BooleanOperator::GreaterOrEquals:
                        return value;
                    case BooleanOperator::LesserOrEquals:
                        return 0;
                    case BooleanOperator::NotEquals:
                        return value != 0.0 ? 0.0 : 1.0;
                    case BooleanOperator::Greater:
                        return value + FLT_MIN;
                    case BooleanOperator::Lesser:
                        return value != 0.0 ? 0.0 : FLT_MIN;
                    default:;
                }
                break;
        }

        throw std::runtime_error(
            std::format(
                "Requested lower_bound value for invalid UberStateCondition. Type = {}, Op = {}, Value = {}",
                static_cast<int>(state.value_type()),
                static_cast<int>(op),
                value
            )
        );
    }

    std::string UberStateCondition::serialize() const {
        std::string op_string;
        switch (op) {
            case BooleanOperator::Equals:
                op_string = "==";
                break;
            case BooleanOperator::NotEquals:
                op_string = "!=";
                break;
            case BooleanOperator::GreaterOrEquals:
                op_string = ">=";
                break;
            case BooleanOperator::Greater:
                op_string = ">";
                break;
            case BooleanOperator::LesserOrEquals:
                op_string = "<=";
                break;
            case BooleanOperator::Lesser:
                op_string = "<";
                break;
            default:
                break;
        }

        return std::format("{}|{}{}{}", state.group_int(), state.state(), op_string, op_string.empty() ? "" : std::format("{}", value));
    }

    std::string UberStateCondition::to_string(bool use_names, std::optional<double> previous_value) const {
        std::string op_string;
        switch (op) {
            case BooleanOperator::Equals:
                op_string = "==";
                break;
            case BooleanOperator::NotEquals:
                op_string = "!=";
                break;
            case BooleanOperator::GreaterOrEquals:
                op_string = ">=";
                break;
            case BooleanOperator::Greater:
                op_string = ">";
                break;
            case BooleanOperator::LesserOrEquals:
                op_string = "<=";
                break;
            case BooleanOperator::Lesser:
                op_string = "<";
                break;
            default:
                break;
        }

        return std::format(
            "({}|{}{}{}) = {}",
            use_names ? state.group_name() : std::to_string(state.group_int()),
            use_names ? state.state_name() : std::to_string(state.state()),
            op_string,
            op_string.empty() ? "" : std::format("{}", value),
            state.get(),
            previous_value.has_value() ? std::format(" (was {})", previous_value.value()) : ""
        );
    }

    bool operator==(UberStateCondition const& a, UberStateCondition const& b) {
        return a.op == b.op && a.state == b.state && abs(a.value - b.value) < std::numeric_limits<double>::epsilon();
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
                modloader::warn("uber_state_condition", std::format("Failed to parse {}: Invalid condition", state_str));
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
