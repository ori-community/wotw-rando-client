#include <game/map/icon.h>

#include <Core/api/game/game.h>

#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/AreaMapUI.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/RuntimeWorldMapIcon.h>

namespace randomizer::game::map {
    using namespace app::classes;

    Icon::Icon(FilterFlag filter_mask)
            : m_filter_mask(filter_mask) {}

    Icon::Icon(Icon&& other)
            : m_guid(other.m_guid)
            , m_icon(other.m_icon)
            , m_position(other.m_position)
            , m_can_teleport(other.m_can_teleport)
            , m_filter_mask(other.m_filter_mask)
            , m_game_object(other.m_game_object) {
        other.m_game_object = nullptr;
    }

    Icon::Icon(Icon const& other)
            : m_guid(other.m_guid)
            , m_icon(other.m_icon)
            , m_position(other.m_position)
            , m_can_teleport(other.m_can_teleport)
            , m_filter_mask(other.m_filter_mask)
            , m_game_object(other.m_game_object) {}

    Icon::~Icon() {
        if (m_game_object != nullptr) {
            il2cpp::unity::destroy_object(m_game_object);
            m_game_object = nullptr;
        }
    }

    void Icon::initialize_game_object() {
        if (m_game_object != nullptr) {
            il2cpp::unity::destroy_object(m_game_object);
        }

        auto manager = types::AreaMapUI::get_class()->static_fields->Instance->fields._IconManager_k__BackingField;
        m_game_object = reinterpret_cast<app::GameObject*>(
            UnityEngine::Object::Instantiate_3(reinterpret_cast<app::Object_1*>(AreaMapIconManager::GetIcon(manager, m_icon)))
        );

        app::Vector3 position{ m_position.x, m_position.y, 0.0f };
        il2cpp::unity::set_position(m_game_object, position);
        core::api::game::add_to_container(core::api::game::RandoContainer::MapIcons, m_game_object);
        visible(m_visible);
        label_visible(m_label_visible);
    }

    void Icon::visible(bool value) {
        m_visible = value;
        if (m_game_object == nullptr) {
            initialize_game_object();
        }

        UnityEngine::GameObject::SetActive(m_game_object, value);
    }

    void Icon::label_visible(bool value) {
        m_label_visible = value;
        if (m_game_object == nullptr) {
            initialize_game_object();
        }

        UnityEngine::GameObject::SetActive(m_game_object, value);
    }

    void Icon::opacity(float value) {
        // TODO: Change icon color.
    }

    void Icon::icon(app::WorldMapIconType__Enum value) {
        m_icon = value;
        if (m_game_object != nullptr) {
            initialize_game_object();
        }
    }

    void Icon::position(app::Vector2 value) {
        m_position = value;
        app::Vector3 position{ m_position.x, m_position.y, 0.0f };
        if (m_game_object != nullptr) {
            il2cpp::unity::set_position(m_game_object, position);
        }
    }

    void Icon::can_teleport(bool value) {
        m_can_teleport = value;
    }
} // namespace randomizer::game::map
