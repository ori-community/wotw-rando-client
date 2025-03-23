#pragma once

#include <Core/actors/actor_events.h>
#include <Core/macros.h>
#include <Modloader/app/structs/GameObject.h>

#include <Common/event_bus.h>
#include <Common/registration_handle.h>

#include <memory>
#include <string_view>
#include <unordered_map>

namespace core::actors {
    class CORE_DLLEXPORT Actor;

    class CORE_DLLEXPORT Component {
    public:
        Component() = default;
        virtual ~Component() = default;

        Component(const Component&) = delete;
        Component& operator=(const Component&) = delete;

        virtual size_t component_id() = 0;
        virtual void on_registered(Actor* actor) {};
        virtual void on_deregistered() {};
    private:
        Actor* m_actor = nullptr;
    };

    class CORE_DLLEXPORT Actor final {
    public:
        explicit Actor(std::string_view name);
        ~Actor();

        Actor(const Actor&) = delete;
        Actor& operator=(const Actor&) = delete;

        bool add_component(std::shared_ptr<Component>&& component);
        bool remove_component(size_t id);
        Component* get_component(size_t id) const;
        std::weak_ptr<Component> get_component_weak(size_t id) const;
        bool has_component(size_t id) const;

        template<typename T>
        bool remove_component() const { return remove_component(T::static_component_id()); }

        template<typename T>
        T* get_component() const { return dynamic_cast<T*>(get_component(T::static_component_id())); }

        template<typename T>
        std::weak_ptr<Component> get_component_weak() const { return std::dynamic_pointer_cast<T*>(get_component_weak(T::static_component_id())); }

        template<typename T>
        bool has_component() const { return has_component(T::static_component_id()); }

        void enabled(bool value);
        bool enabled() const { return m_enabled; }

        app::GameObject* root() const { return m_root; }

        common::EventBus<ActorEventParam, ActorEvent>& event_bus() { return m_event_bus; }
        common::EventBus<ActorEventParam, ActorEvent> const& event_bus() const { return m_event_bus; }
    private:
        bool m_enabled = true;
        app::GameObject* m_root = nullptr;
        // TODO: Allow for multiple components of the same type or refactor collider components into a single one with multiple colliders.
        std::unordered_map<std::size_t, std::shared_ptr<Component>> m_components;
        common::EventBus<ActorEventParam, ActorEvent> m_event_bus;

        common::registration_handle_t m_update_registration_handle;
    };

    int next_component_id();
} // namespace core::animation
