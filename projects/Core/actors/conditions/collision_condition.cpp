#include <Core/actors/components/collider.h>
#include <Core/actors/conditions/collision_condition.h>

namespace core::actors::conditions {
    bool CollisionCondition::resolve(Actor* actor) {
        const auto collider = actor->get_component<components::Collider>();
        return collider != nullptr && collider->is_colliding();
    }
} // namespace core::actors::conditions
