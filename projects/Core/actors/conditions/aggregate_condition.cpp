#include <Core/actors/conditions/aggregate_condition.h>

namespace core::actors::conditions {
    bool AggregateCondition::resolve(Actor* actor) {
        switch (op) {
            case AggregateOperator::And:
                for (const auto& condition: conditions) {
                    if (!condition->is_true(actor)) {
                        return false;
                    }
                }

                return true;
            case AggregateOperator::Or:
                for (const auto& condition: conditions) {
                    if (condition->is_true(actor)) {
                        return true;
                    }
                }

                return false;
            default:
                return false;
        }
    }
} // namespace core::actors::conditions
