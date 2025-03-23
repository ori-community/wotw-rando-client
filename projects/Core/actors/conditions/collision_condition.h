#pragma once

#include <Core/actors/conditions/condition.h>

namespace core::actors::conditions {
    class CollisionCondition final : public Condition {
    public:
        bool resolve(Actor* actor) override;
    };
}