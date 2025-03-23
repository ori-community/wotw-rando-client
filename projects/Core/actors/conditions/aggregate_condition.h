#pragma once

#include <Core/actors/conditions/condition.h>

namespace core::actors::conditions {
    class CORE_DLLEXPORT AggregateCondition final : public Condition {
    public:
        bool resolve(Actor* actor) override;

        AggregateOperator op = AggregateOperator::And;
        std::vector<std::shared_ptr<Condition>> conditions;
    };
}