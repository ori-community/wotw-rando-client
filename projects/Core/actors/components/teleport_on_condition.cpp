#include <Core/actors/components/teleport_on_condition.h>
#include <Core/api/game/teleport.h>

namespace core::actors::components {

    size_t TeleportOnCondition::static_component_id() {
        static size_t id = next_component_id();
        return id;
    }

    size_t TeleportOnCondition::component_id() { return static_component_id(); }

    void TeleportOnCondition::on_registered(Actor* actor) {
        m_actor = actor;
        m_update_handle = actor->event_bus().register_handler(ActorEvent::Update, [this](auto param, auto event) { on_update(event, param); });
    }

    void TeleportOnCondition::on_deregistered() {
        m_actor = nullptr;
        m_update_handle = nullptr;
    }

    void TeleportOnCondition::on_update(const ActorEvent event, const ActorEventParam param) {
        const bool active = m_condition != nullptr && m_condition->is_true(m_actor);
        if (active && !m_active) {
            api::game::teleportation::teleport(m_destination.get());
        }

        m_active = active;
    }
} // namespace core::actors::components
