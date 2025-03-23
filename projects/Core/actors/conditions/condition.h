#pragma once

#include <Core/actors/actor.h>

namespace core::actors::conditions {
    // TODO: Maybe use the reactivity system here?
    class Condition {
    public:
        virtual ~Condition() = default;
        bool is_true(Actor* actor) { return resolve(actor) != negate_output; }

        bool negate_output = false;
    protected:
        virtual bool resolve(Actor* actor) = 0;
    };
}