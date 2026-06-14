#include <Core/api/uber_states/uber_state_condition.h>
#include <Modloader/modloader.h>

#include <format>

namespace core::api::uber_states {
    UberStateCondition::UberStateCondition() : UberStateCondition(UberState()) {}

    UberStateCondition::UberStateCondition(const UberState& state, const randomizer::seed::Comparator op, const double value) :
        state(state),
        op(op),
        value(value) {}

    UberStateCondition::UberStateCondition(const int group, const int state, const randomizer::seed::Comparator op, const double value) :
        UberStateCondition(UberState(group, state), op, value) {}

    UberStateCondition::UberStateCondition(const UberStateGroup group, const int state, const randomizer::seed::Comparator op, const double value) :
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

        switch (op) {
            case randomizer::seed::Comparator::GreaterOrEqual:
                return state_value >= value;
            case randomizer::seed::Comparator::LessOrEqual:
                return state_value <= value;
            case randomizer::seed::Comparator::Equal:
                return abs(state_value - value) <= std::numeric_limits<double>::epsilon();
            case randomizer::seed::Comparator::NotEqual:
                return abs(state_value - value) > std::numeric_limits<double>::epsilon();
            case randomizer::seed::Comparator::Greater:
                return state_value > value;
            case randomizer::seed::Comparator::Less:
                return state_value < value;
            default:
                throw std::exception("Unknown operator");
        }
    }

    double UberStateCondition::lower_bound_value() const {
        if (op == randomizer::seed::Comparator::Equal) {
            return value;
        }

        switch (state.value_type()) {
            case ValueType::Unknown:
                return 0.0;
            case ValueType::Boolean:
            case ValueType::Byte:
            case ValueType::Integer:
                switch (op) {
                    case randomizer::seed::Comparator::GreaterOrEqual:
                        return value;
                    case randomizer::seed::Comparator::LessOrEqual:
                        return 0;
                    case randomizer::seed::Comparator::NotEqual:
                        return value != 0.0 ? 0.0 : 1.0;
                    case randomizer::seed::Comparator::Greater:
                        return value + 1.0;
                    case randomizer::seed::Comparator::Less:
                        return value != 0.0 ? 0.0 : 1.0;
                    default:;
                }
                break;
            case ValueType::Float:
                switch (op) {
                case randomizer::seed::Comparator::GreaterOrEqual:
                        return value;
                    case randomizer::seed::Comparator::LessOrEqual:
                        return 0;
                    case randomizer::seed::Comparator::NotEqual:
                        return value != 0.0 ? 0.0 : 1.0;
                    case randomizer::seed::Comparator::Greater:
                        return value + FLT_MIN;
                    case randomizer::seed::Comparator::Less:
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
} // namespace core::api::uber_states
