#pragma once

#include <Core/actors/conditions/condition.h>

namespace core::actors::conditions {
    class CORE_DLLEXPORT CollisionCondition final : public Condition {
    public:
        bool resolve(Actor* actor) override;
    };
}