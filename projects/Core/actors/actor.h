#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/GameObject.h>

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
        virtual void on_enabled(bool enabled) {};
        virtual void on_update(float dt) {};
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
        bool has_component(size_t id) const;

        void enabled(bool value);
        bool enabled() const { return m_enabled; }

        app::GameObject* root() const { return m_root; }

    private:
        void update();

        bool m_enabled = true;
        app::GameObject* m_root = nullptr;
        std::unordered_map<int, std::shared_ptr<Component>> m_components;

        common::registration_handle_t m_update_registration_handle;
    };

    int next_component_id();
} // namespace core::animation
