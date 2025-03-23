#pragma once

#include <Core/actors/actor.h>
#include <Core/actors/components/collider.h>
#include <Core/actors/conditions/condition.h>
#include <Core/macros.h>
#include <Core/property.h>

namespace core::actors::components {
    class CORE_DLLEXPORT ScaleOnCondition final : public Component {
    public:
        static size_t static_component_id();
        size_t component_id() override;

        void on_registered(Actor* actor) override;
        void on_deregistered() override;

        void condition(const std::shared_ptr<conditions::Condition>& condition) { m_condition = condition; }
        conditions::Condition* condition() const { return m_condition.get(); }

        [[nodiscard]] const Property<float>& transition_start_duration() { return m_transition_start_duration; }
        [[nodiscard]] const Property<float>& transition_end_duration() { return m_transition_end_duration; }
        [[nodiscard]] const Property<float>& start_scale() { return m_start_scale; }
        [[nodiscard]] const Property<float>& end_scale() { return m_end_scale; }
    private:
        void on_update(ActorEvent event, ActorEventParam param);

        Actor* m_actor = nullptr;
        common::registration_handle_t m_update_handle;

        std::shared_ptr<conditions::Condition> m_condition = nullptr;
        Property<float> m_transition_start_duration{ 0.5f };
        Property<float> m_transition_end_duration{ 0.5f };
        Property<float> m_start_scale{ 1.0f };
        Property<float> m_end_scale{ 1.5f };

        bool m_active = false;
        float m_starting_time = 0.0f;
        float m_time = 0;
    };
} // namespace core::animation
