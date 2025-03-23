#include <Core/actors/components/show_message_on_condition.h>
#include <Core/api/game/game.h>

namespace core::actors::components {

    ShowMessageOnCondition::ShowMessageOnCondition() { m_message_box.coordinate_system().set(api::messages::CoordinateSystem::World); }

    size_t ShowMessageOnCondition::static_component_id() {
        static size_t id = next_component_id();
        return id;
    }

    size_t ShowMessageOnCondition::component_id() { return static_component_id(); }

    void ShowMessageOnCondition::on_registered(Actor* actor) {
        m_actor = actor;
        il2cpp::unity::set_parent(m_message_box.game_object(), m_actor);
        m_update_handle = actor->event_bus().register_handler(ActorEvent::Update, [this](auto param, auto event) { on_update(event, param); });
    }

    void ShowMessageOnCondition::on_deregistered() {
        add_to_container(api::game::RandoContainer::Messages, m_message_box.game_object());
        m_actor = nullptr;
        m_update_handle = nullptr;
    }

    void ShowMessageOnCondition::on_update(const ActorEvent event, const ActorEventParam param) {
        if (m_active) {
            if (m_hide_condition->resolve(m_actor)) {
                m_message_box.hide(m_instant_show_hide.get());
                m_active = false;
            }
        } else {
            if (m_show_condition->resolve(m_actor)) {
                m_message_box.show(m_instant_show_hide.get(), m_play_sound.get());
                m_active = true;
            }
        }
    }
} // namespace core::actors::components
