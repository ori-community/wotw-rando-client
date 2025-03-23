#pragma once

#include <Core/actors/conditions/condition.h>
#include <Core/enums/actions.h>

namespace core::actors::conditions {
    class CORE_DLLEXPORT TeleportingCondition final : public Condition {
    public:
        bool resolve(Actor* actor) override;

        Action action = Action::Interact;
        bool value = true;
    };
} // namespace core::actors::conditions
