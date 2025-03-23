#pragma once

#include <Core/actors/actor.h>
#include <Core/actors/components/collider.h>
#include <Core/actors/conditions/condition.h>
#include <Core/api/messages/message_box.h>
#include <Core/macros.h>
#include <Core/property.h>

namespace core::actors::components {
    class CORE_DLLEXPORT ShowMessageOnCondition final : public Component {
    public:
        ShowMessageOnCondition();

        static size_t static_component_id();
        size_t component_id() override;

        void on_registered(Actor* actor) override;
        void on_deregistered() override;

        void show_condition(const std::shared_ptr<conditions::Condition>& condition) { m_show_condition = condition; }
        conditions::Condition* show_condition() const { return m_show_condition.get(); }

        void hide_condition(const std::shared_ptr<conditions::Condition>& condition) { m_hide_condition = condition; }
        conditions::Condition* hide_condition() const { return m_hide_condition.get(); }

        const Property<bool>& instant_show_hide() const { return m_instant_show_hide; }
        const Property<bool>& play_sound() const { return m_play_sound; }

        [[nodiscard]] api::messages::MessageBox& message_box() { return m_message_box; }
    private:
        void on_update(ActorEvent event, ActorEventParam param);

        Actor* m_actor = nullptr;
        api::messages::MessageBox m_message_box;
        common::registration_handle_t m_update_handle;

        Property<bool> m_instant_show_hide;
        Property<bool> m_play_sound;
        std::shared_ptr<conditions::Condition> m_show_condition = nullptr;
        std::shared_ptr<conditions::Condition> m_hide_condition = nullptr;
        bool m_active = false;
    };
} // namespace core::animation
