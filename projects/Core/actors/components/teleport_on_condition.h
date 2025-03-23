#pragma once

#include <Core/actors/actor.h>
#include <Core/actors/components/collider.h>
#include <Core/actors/conditions/condition.h>
#include <Core/macros.h>
#include <Core/property.h>

namespace core::actors::components {
  class CORE_DLLEXPORT TeleportOnCondition final : public Component {
  public:
    static size_t static_component_id();
    size_t component_id() override;

    void on_registered(Actor* actor) override;
    void on_deregistered() override;

    void condition(const std::shared_ptr<conditions::Condition>& condition) { m_condition = condition; }
    conditions::Condition* condition() const { return m_condition.get(); }

    [[nodiscard]] const Property<app::Vector2>& destination() { return m_destination; }
  private:
    void on_update(ActorEvent event, ActorEventParam param);

    Actor* m_actor = nullptr;
    common::registration_handle_t m_update_handle;

    std::shared_ptr<conditions::Condition> m_condition = nullptr;
    Property<app::Vector2> m_destination;
    bool m_active = false;
  };
} // namespace core::animation
