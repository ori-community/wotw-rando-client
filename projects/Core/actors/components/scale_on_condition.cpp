#include <Core/actors/components/scale_on_condition.h>

namespace core::actors::components {

    size_t ScaleOnCondition::static_component_id() {
        static size_t id = next_component_id();
        return id;
    }

    size_t ScaleOnCondition::component_id() { return static_component_id(); }

    void ScaleOnCondition::on_registered(Actor* actor) {
        m_actor = actor;
        m_update_handle = actor->event_bus().register_handler(ActorEvent::Update, [this](auto param, auto event) { on_update(event, param); });
    }

    void ScaleOnCondition::on_deregistered() {
        m_actor = nullptr;
        m_update_handle = nullptr;
    }

    void ScaleOnCondition::on_update(const ActorEvent event, const ActorEventParam param) {
        const bool active = m_condition != nullptr && m_condition->resolve(m_actor);
        if (m_active != active) {
            m_active = active;
            const auto start_duration = m_transition_start_duration.get();
            const auto end_duration = m_transition_end_duration.get();
            const auto duration_factor = eps_equals(m_starting_time, 0.0f) ? 1.0f : 1.0f - m_time / m_starting_time;
            m_starting_time = m_active ? start_duration : end_duration;
            m_time = m_starting_time * duration_factor;
        }

        const float dt = param.get<ActorEvent::Update>();
        m_time = std::max(m_time - dt, 0.0f);

        const auto inside_scale = m_start_scale.get();
        const auto outside_scale = m_end_scale.get();
        const auto from = m_active ? outside_scale : inside_scale;
        const auto to = m_active ? inside_scale : outside_scale;
        const auto time_factor = 1.0f - m_time / m_starting_time;
        const auto scale = (to - from) * time_factor + from;
        il2cpp::unity::set_local_scale(m_actor, app::Vector3{scale, scale, scale});
    }
} // namespace core::actors::components
