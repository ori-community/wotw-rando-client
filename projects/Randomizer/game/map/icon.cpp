#include <game/map/icon.h>

#include <Core/api/game/game.h>

#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/IconPlacementScaler.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/TextBox.h>

#include <utility>

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
            auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, m_game_object);
            il2cpp::unity::destroy_object(m_game_object);
            m_game_object = nullptr;
            m_text_box = nullptr;
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

        m_text_box = il2cpp::unity::get_component_in_children<app::TextBox>(m_game_object, types::TextBox::get_class(), true);
        if (m_text_box != nullptr && m_label.has_value()) {
            CatlikeCoding::TextBox::TextBox::SetText_2(m_text_box, il2cpp::string_new(m_label.value()));
            CatlikeCoding::TextBox::TextBox::RenderText(m_text_box);
        }

        if (m_name.empty()) {
            m_name = il2cpp::unity::get_object_name(m_game_object);
        } else {
            UnityEngine::Object::set_name(reinterpret_cast<app::Object_1*>(m_game_object), il2cpp::string_new(m_name));
        }

        UnityEngine::GameObject::set_moonReady(m_game_object, true);
        auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(m_game_object, types::Renderer::get_class());
        for (auto renderer : renderers) {
            m_original_color.push_back(UberShaderAPI::GetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor));
        }

        app::Vector3 position{ m_position.x, m_position.y, 0.0f };
        core::api::game::add_to_container(core::api::game::RandoContainer::MapIcons, m_game_object);
        auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
        IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, m_game_object, position, m_can_teleport);
        visible(m_visible);
        label_visible(m_label_visible);
        opacity(m_opacity);
    }

    void Icon::visible(bool value) {
        m_visible = value;
        if (m_game_object == nullptr) {
            initialize_game_object();
        }

        UnityEngine::GameObject::set_active(m_game_object, value);
    }

    void Icon::label_visible(bool value) {
        m_label_visible = value;
        if (m_game_object == nullptr) {
            initialize_game_object();
        }

        if (m_text_box != nullptr) {
            UnityEngine::GameObject::set_active(il2cpp::unity::get_game_object(m_text_box), value);
        }
    }

    void Icon::opacity(float value) {
        m_opacity = value;
        if (m_game_object != nullptr) {
            auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(m_game_object, types::Renderer::get_class());
            auto i = 0;
            for (auto renderer : renderers) {
                auto color = m_original_color[i];
                color.a *= value;
                UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, color);
                ++i;
            }
        }
    }

    void Icon::name(std::string value) {
        m_name = std::move(value);
        if (m_game_object != nullptr) {
            UnityEngine::Object::set_name(reinterpret_cast<app::Object_1*>(m_game_object), il2cpp::string_new(m_name));
        }
    }

    void Icon::label(std::string value) {
        m_label = std::move(value);
        if (m_text_box != nullptr && m_label.has_value()) {
            CatlikeCoding::TextBox::TextBox::SetText_2(m_text_box, il2cpp::string_new(m_label.value()));
            CatlikeCoding::TextBox::TextBox::RenderText(m_text_box);
        }
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
            auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, m_game_object, position, m_can_teleport);
        }
    }

    void Icon::can_teleport(bool value) {
        m_can_teleport = value;
        if (m_game_object != nullptr) {
            app::Vector3 position{ m_position.x, m_position.y, 0.0f };
            auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, m_game_object, position, m_can_teleport);
        }
    }
} // namespace randomizer::game::map
