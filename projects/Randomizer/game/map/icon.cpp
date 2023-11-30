#include <randomizer.h>
#include <game/map/icon.h>

#include <Core/api/game/game.h>

#include <Modloader/app/methods/AreaMapIconManager.h>
#include <Modloader/app/methods/IconPlacementScaler.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/AreaMapIcon.h>
#include <Modloader/app/types/Renderer.h>

#include <utility>
#include <Core/property/reactivity.h>

namespace randomizer::game::map {
    using namespace app::classes;

    Icon::Icon(const FilterFlag filter_mask) :
        m_opacity(0),
        m_position(),
        m_filter_mask(filter_mask) {
        m_label.text_processor(general_text_processor());
    }

    Icon::Icon(Icon&& other) noexcept :
        m_opacity(other.m_opacity),
        m_guid(other.m_guid),
        m_icon(other.m_icon),
        m_position(other.m_position),
        m_can_teleport(other.m_can_teleport),
        m_filter_mask(other.m_filter_mask),
        m_game_object(other.m_game_object),
        m_label_visible(other.m_label_visible) {
        label(other.m_label.get_unprocessed());
        other.m_game_object = nullptr;
    }

    Icon::Icon(Icon const& other) :
        m_opacity(other.m_opacity),
        m_guid(other.m_guid),
        m_icon(other.m_icon),
        m_position(other.m_position),
        m_can_teleport(other.m_can_teleport),
        m_filter_mask(other.m_filter_mask),
        m_game_object(other.m_game_object),
        m_label_visible(other.m_label_visible) {
        label(other.m_label.get_unprocessed());
    }

    Icon::~Icon() {
        if (m_game_object != nullptr) {
            const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, m_game_object);
            il2cpp::unity::destroy_object(m_game_object);
            m_game_object = nullptr;
            m_map_icon = nullptr;
        }
    }

    void Icon::initialize_game_object() {
        if (m_game_object != nullptr) {
            il2cpp::unity::destroy_object(m_game_object);
        }

        const auto manager = types::AreaMapUI::get_class()->static_fields->Instance->fields._IconManager_k__BackingField;
        m_game_object = reinterpret_cast<app::GameObject*>(
            UnityEngine::Object::Instantiate_3(reinterpret_cast<app::Object_1*>(AreaMapIconManager::GetIcon(manager, m_icon)))
        );

        m_map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(m_game_object, types::AreaMapIcon::get_class());
        if (m_map_icon->fields.AttentionMarker != nullptr) {
            UnityEngine::GameObject::set_active(m_map_icon->fields.AttentionMarker, false);
            m_map_icon->fields.AttentionMarkerState = nullptr;
            m_map_icon->fields.AttentionMarkerActiveConditions = nullptr;
        }

        label(m_label.get_unprocessed());

        if (m_name.empty()) {
            m_name = il2cpp::unity::get_object_name(m_game_object);
        } else {
            UnityEngine::Object::set_name(reinterpret_cast<app::Object_1*>(m_game_object), il2cpp::string_new(m_name));
        }

        UnityEngine::GameObject::set_moonReady(m_game_object, true);
        auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(m_map_icon->fields.MapIconActive, types::Renderer::get_class(), true);
        if (m_map_icon->fields.MapIconInactive != nullptr) {
            const auto renderers_extra = il2cpp::unity::get_components_in_children<app::Renderer>(m_map_icon->fields.MapIconInactive, types::Renderer::get_class(), true);
            renderers.insert(renderers.end(), renderers_extra.begin(), renderers_extra.end());
        }

        if (m_map_icon->fields.MapIconSpecial != nullptr) {
            const auto renderers_extra = il2cpp::unity::get_components_in_children<app::Renderer>(m_map_icon->fields.MapIconSpecial, types::Renderer::get_class(), true);
            renderers.insert(renderers.end(), renderers_extra.begin(), renderers_extra.end());
        }

        for (const auto renderer: renderers) {
            m_original_color.push_back(UberShaderAPI::GetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor));
        }

        if (m_icon == app::WorldMapIconType__Enum::RaceStart) {
            UnityEngine::GameObject::set_active(m_map_icon->fields.MapIconActive, true);
            UnityEngine::GameObject::set_active(m_map_icon->fields.MapIconSpecial, false);
        }

        add_to_container(core::api::game::RandoContainer::MapIcons, m_game_object);
        apply_scaler();
        visible(m_visible);
        label_visible(m_label_visible);
        opacity(m_opacity);
    }

    void Icon::visible(const bool value) {
        m_visible = value;
        if (m_game_object == nullptr) {
            initialize_game_object();
        } else {
            UnityEngine::GameObject::set_active(m_game_object, value);
        }
    }

    void Icon::label_visible(const bool value) {
        m_label_visible = value;
        if (m_game_object == nullptr) {
            initialize_game_object();
        } else {
            UnityEngine::GameObject::set_active(m_map_icon->fields.Label, value);
        }
    }

    void Icon::opacity(const float value) {
        m_opacity = value;
        if (m_game_object != nullptr) {
            auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(m_map_icon->fields.MapIconActive, types::Renderer::get_class(), true);
            if (m_map_icon->fields.MapIconInactive != nullptr) {
                const auto renderers_2 = il2cpp::unity::get_components_in_children<app::Renderer>(m_map_icon->fields.MapIconInactive, types::Renderer::get_class(), true);
                renderers.insert(renderers.end(), renderers_2.begin(), renderers_2.end());
            }

            if (m_map_icon->fields.MapIconSpecial != nullptr) {
                const auto renderers_extra = il2cpp::unity::get_components_in_children<app::Renderer>(m_map_icon->fields.MapIconSpecial, types::Renderer::get_class(), true);
                renderers.insert(renderers.end(), renderers_extra.begin(), renderers_extra.end());
            }

            auto i = 0;
            for (const auto renderer: renderers) {
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

    void Icon::label(const std::string& value) {
        m_label.set(value.empty() ? " " : value);
        if (m_game_object != nullptr) {
            m_text_reactive_effect = core::reactivity::watch_effect().on(
                [&] {
                    m_map_icon->fields.m_labelBox->fields.MessageProvider = core::api::system::create_message_provider(m_label.get());
                    MessageBox::RefreshText_1(m_map_icon->fields.m_labelBox);
                }
            ).finalize();
        }
    }

    app::WorldMapIconType__Enum Icon::icon() const {
        return m_icon;
    }

    void Icon::icon(const app::WorldMapIconType__Enum value) {
        // TODO: Make this into a property and make it reactive
        m_icon = value;
        if (m_game_object != nullptr) {
            initialize_game_object();
        }
    }

    void Icon::position(const app::Vector2 value) {
        m_position = value;
        apply_scaler();
    }

    bool Icon::can_teleport() const {
        return m_can_teleport;
    }

    void Icon::can_teleport(const bool value) {
        m_can_teleport = value;
        apply_scaler();
    }

    void Icon::remove_scaler() const {
        if (m_game_object != nullptr) {
            const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, m_game_object);
            il2cpp::unity::set_local_scale(m_game_object, {1, 1, 1});
        }
    }

    void Icon::apply_scaler() const {
        if (m_game_object != nullptr) {
            const app::Vector3 position{m_position.x, m_position.y, 0.0f};
            const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, m_game_object, position, m_can_teleport);
        }
    }
} // namespace randomizer::game::map
