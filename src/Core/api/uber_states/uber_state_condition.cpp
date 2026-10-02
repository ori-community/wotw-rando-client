#include <Core/api/uber_states/uber_state_condition.h>
#include <Modloader/modloader.h>
#include <format>


namespace core::api::uber_states {
    UberStateCondition::UberStateCondition(const UntypedUberState& state, const randomizer::seed::Comparator op, const double value) :
        state(state),
        op(op),
        value(value) {}

    bool UberStateCondition::is_fulfilled() {
        const auto state_value = state.get<double>();

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

    bool operator==(UberStateCondition const& a, UberStateCondition const& b) {
        return a.op == b.op && a.state == b.state && abs(a.value - b.value) < std::numeric_limits<double>::epsilon();
    }
} // namespace core::api::uber_states
