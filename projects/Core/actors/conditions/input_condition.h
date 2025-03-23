#pragma once

#include <Core/actors/conditions/condition.h>
#include <Core/enums/actions.h>

namespace core::actors::conditions {
    class InputCondition final : public Condition {
    public:
        bool resolve(Actor* actor) override;

        Action action;
        bool value;
    };
} // namespace core::actors::conditions
