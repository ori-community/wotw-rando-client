#pragma once

#include <Core/actors/actor.h>

namespace core::actors::conditions {
    // TODO: Maybe use the reactivity system here?
    class Condition {
    public:
        virtual ~Condition() = default;
        virtual bool resolve(Actor* actor) = 0;
    };
}