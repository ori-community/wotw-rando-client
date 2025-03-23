#include <Core/actors/components/show_message_on_condition.h>
#include <Core/api/game/game.h>
#include <Core/enums/layer.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>

namespace core::actors::components {
    namespace {
        void set_layer_recursive(app::GameObject* object, const int layer) {
            std::vector<app::GameObject*> objects{object};
            while (!objects.empty()) {
                const auto back = objects.back();
                UnityEngine::GameObject::set_layer(back, layer);

                objects.pop_back();
                auto children = il2cpp::unity::get_children(back);
                objects.insert(objects.end(), children.begin(), children.end());
            }
        }
    }

    ShowMessageOnCondition::ShowMessageOnCondition() {
        m_message_box.coordinate_system().set(api::messages::CoordinateSystem::World);
    }

    size_t ShowMessageOnCondition::static_component_id() {
        static size_t id = next_component_id();
        return id;
    }

    size_t ShowMessageOnCondition::component_id() { return static_component_id(); }

    void ShowMessageOnCondition::on_registered(Actor* actor) {
        m_actor = actor;
        m_message_box.hide(true);
        m_active = false;
        m_update_handle = actor->event_bus().register_handler(ActorEvent::Update, [this](auto param, auto event) { on_update(event, param); });
    }

    void ShowMessageOnCondition::on_deregistered() {
        m_message_box.hide(true);
        m_active = false;
        m_actor = nullptr;
        m_update_handle = nullptr;
    }

    void ShowMessageOnCondition::on_update(const ActorEvent event, const ActorEventParam param) {
        const auto active = m_condition->is_true(m_actor);
        if (m_active != active) {
            if (active) {
                m_message_box.show(m_instant_show_hide.get(), m_play_sound.get());
            } else {
                m_message_box.hide(m_instant_show_hide.get());
            }

            m_active = active;
        }

        if (active) {
            m_message_box.position().set(il2cpp::unity::get_position(m_actor->root()) + m_position_offset.get());
        }
    }
} // namespace core::actors::components
