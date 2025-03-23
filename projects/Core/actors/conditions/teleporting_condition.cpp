#include <Core/actors/conditions/teleporting_condition.h>
#include <Core/api/game/teleport.h>

namespace core::actors::conditions {
    bool TeleportingCondition::resolve(Actor* actor) {
        return api::game::teleportation::is_teleporting();
    }
} // namespace core::actors::conditions
