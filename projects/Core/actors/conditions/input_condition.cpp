#include <Core/actors/conditions/input_condition.h>
#include <Core/input/input_handling.h>

namespace core::actors::conditions {
    bool InputCondition::resolve(Actor* actor) {
        return input::is_pressed(action) == value;
    }
} // namespace core::actors::conditions
