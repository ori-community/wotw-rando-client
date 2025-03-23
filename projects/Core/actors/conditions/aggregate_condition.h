#pragma once

#include <Core/actors/conditions/condition.h>

namespace core::actors::conditions {
    class AggregateCondition final : public Condition {
    public:
        bool resolve(Actor* actor) override;

        AggregateOperator op;
        std::vector<std::shared_ptr<Condition>> conditions;
    };
}