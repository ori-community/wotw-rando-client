#include <Core/actors/actor.h>
#include <Core/api/game/game.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/modloader.h>

#include <ranges>

using namespace app::classes;
using namespace modloader;

namespace core::actors {
    Actor::Actor(const std::string_view name) {
        m_root = types::GameObject::create();
        UnityEngine::GameObject::ctor_1(m_root, il2cpp::string_new(name));
        add_to_container(api::game::RandoContainer::GameObjects, m_root);
        m_update_registration_handle = api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [this](auto, auto) {
            update();
        });
    }

    Actor::~Actor() {
        for (const auto& component: m_components | std::views::values) {
            component->on_deregistered();
        }
    }

    bool Actor::add_component(std::shared_ptr<Component>&& component) {
        const auto id = component->component_id();
        auto [it, success] = m_components.try_emplace(id, std::move(component));
        if (!success) {
            return false;
        }

        it->second->on_registered(this);
        it->second->on_enabled(m_enabled);
        return true;
    }

    bool Actor::remove_component(const size_t id) {
        return m_components.erase(id) != 0;
    }

    Component* Actor::get_component(const size_t id) const {
        const auto it = m_components.find(id);
        return it != m_components.end() ? it->second.get() : nullptr;
    }

    bool Actor::has_component(const size_t id) const {
        return m_components.contains(id);
    }

    void Actor::enabled(const bool value) {
        if (m_enabled == value) {
            return;
        }

        m_enabled = value;
        for (const auto& component: m_components | std::views::values) {
            component->on_enabled(value);
        }

        if (m_enabled) {
            m_update_registration_handle = api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [this](auto, auto) {
                update();
            });
        } else {
            m_update_registration_handle = nullptr;
        }
    }

    void Actor::update() {
        const auto dt = api::game::delta_time();
        for (const auto& component: m_components | std::views::values) {
            component->on_update(dt);
        }
    }

    int next_component_id() {
        static int id = 0;
        return ++id;
    }
}
