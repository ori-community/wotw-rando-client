#include <Randomizer/game/map/icon.h>
#include <Randomizer/randomizer.h>

#include <Core/api/game/game.h>

#include <Modloader/app/methods/IconPlacementScaler.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/types/AreaMapIcon.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/Renderer.h>

#include <Core/property/reactivity.h>

namespace randomizer::game::map {
    using namespace app::classes;

    Icon::Icon(const FilterFlag filter_mask) :
        m_opacity(0),
        m_filter_mask(filter_mask) {
        m_label.text_processor(general_text_processor());
        initialize_reactives();
    }

    Icon::Icon(Icon&& other) noexcept :
        m_icon(other.m_icon),
        m_position(other.m_position),
        m_opacity(other.m_opacity),
        m_label_visible(other.m_label_visible),
        m_can_teleport(other.m_can_teleport),
        m_game_object(other.m_game_object),
        m_guid(other.m_guid),
        m_filter_mask(other.m_filter_mask) {
        other.m_game_object.set(std::nullopt);
        initialize_reactives();
    }

    Icon::Icon(Icon const& other) :
        m_icon(other.m_icon),
        m_position(other.m_position),
        m_opacity(other.m_opacity),
        m_label_visible(other.m_label_visible),
        m_can_teleport(other.m_can_teleport),
        m_game_object(other.m_game_object),
        m_guid(other.m_guid),
        m_filter_mask(other.m_filter_mask) {
        initialize_reactives();
    }

    void Icon::initialize_reactives() {
        core::reactivity::watch_effect()
            .effect(m_game_object)
            .after([&]() {
                if (!m_game_object.get().has_value() || !m_game_object.get()->is_valid()) {
                    m_map_icon.set(std::nullopt);
                    return;
                }

                const auto map_icon = il2cpp::unity::get_component<app::AreaMapIcon>(**m_game_object.get(), types::AreaMapIcon::get_class());
                UnityEngine::GameObject::set_moonReady(**m_game_object.get(), true);
                auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>(
                    map_icon->fields.MapIconActive,
                    types::Renderer::get_class(),
                    true
                );

                if (map_icon->fields.MapIconInactive != nullptr) {
                    const auto renderers_extra = il2cpp::unity::get_components_in_children<app::Renderer>(
                        map_icon->fields.MapIconInactive, types::Renderer::get_class(), true
                    );
                    renderers.insert(renderers.end(), renderers_extra.begin(), renderers_extra.end());
                }

                if (map_icon->fields.MapIconSpecial != nullptr) {
                    const auto renderers_extra = il2cpp::unity::get_components_in_children<app::Renderer>(
                        map_icon->fields.MapIconSpecial, types::Renderer::get_class(), true
                    );
                    renderers.insert(renderers.end(), renderers_extra.begin(), renderers_extra.end());
                }

                m_original_color.clear();
                for (const auto renderer: renderers) {
                    m_original_color.push_back(UberShaderAPI::GetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor));
                }

                add_to_container(core::api::game::RandoContainer::MapIcons, **m_game_object.get());
                m_map_icon.set(il2cpp::WeakGCRef(map_icon));
            })
            .finalize(m_reactive_effects);

        core::reactivity::watch_effect()
            .effect(m_map_icon)
            .after([&]() {
                if (!m_map_icon.get().has_value() || !m_map_icon.get()->is_valid()) {
                    return;
                }

                const auto area_map_icon = **m_map_icon.get();

                if (area_map_icon->fields.AttentionMarker != nullptr) {
                    UnityEngine::GameObject::set_active(area_map_icon->fields.AttentionMarker, false);
                    area_map_icon->fields.AttentionMarkerState = nullptr;
                    area_map_icon->fields.AttentionMarkerActiveConditions = nullptr;
                }
            })
            .finalize(m_reactive_effects);

        core::reactivity::watch_effect()
            .effect([&] {
                if (!m_map_icon.get().has_value() || !m_map_icon.get()->is_valid()) {
                    return;
                }

                const auto map_icon_go = **m_map_icon.get();
                UnityEngine::Object::set_name(reinterpret_cast<app::Object_1*>(map_icon_go), il2cpp::string_new(m_name.get()));
            })
            .finalize(m_reactive_effects);

        core::reactivity::watch_effect()
            .effect([&] {
                if (!m_map_icon.get().has_value() || !m_map_icon.get()->is_valid()) {
                    return;
                }

                const auto area_map_icon = **m_map_icon.get();

                area_map_icon->fields.m_labelBox->fields.TextBox->fields.color = app::Color(1.0, 1.0, 1.0, 1.0);
                area_map_icon->fields.m_labelBox->fields.FormatText = true;
                area_map_icon->fields.m_labelBox->fields.MessageProvider = core::api::system::create_message_provider(m_label.get());
                MessageBox::RefreshText_1(area_map_icon->fields.m_labelBox);
            })
            .finalize(m_reactive_effects);

        core::reactivity::watch_effect()
            .effect(m_icon)
            .after([&]() {
                if (!m_initialized || m_icon.get() != m_current_icon) {
                    initialize_game_object();
                }
            })
            .trigger_on_load()
            .finalize(m_reactive_effects);

        m_reactive_effects.push_back(core::reactivity::watch_effect([&] { apply_scaler(m_position.get()); }));

        core::reactivity::watch_effect()
            .before([&]() {
                if (m_visible.get() && !m_initialized) {
                    initialize_game_object();
                }
            })
            .effect([&] {
                // Needs to be outside the 'if' because we want the before part of the effect to run and initialize the game_object.
                const auto visible = m_visible.get();

                if (!m_game_object.get().has_value() || !m_game_object.get()->is_valid()) {
                    return;
                }

                const auto game_object = **m_game_object.get();
                UnityEngine::GameObject::set_active(game_object, visible);
            })
            .finalize(m_reactive_effects);

        core::reactivity::watch_effect()
            .effect([&] {
                const auto label_visible = m_label_visible.get();

                if (!m_map_icon.get().has_value() || !m_map_icon.get()->is_valid()) {
                    return;
                }

                const auto area_map_icon = **m_map_icon.get();
                UnityEngine::GameObject::set_active(area_map_icon->fields.Label, label_visible);
            })
            .finalize(m_reactive_effects);

        core::reactivity::watch_effect().effect([&] { update_opacity(m_opacity.get()); }).finalize(m_reactive_effects);
    }

    Icon::~Icon() {
        m_reactive_effects.clear();

        if (!m_game_object.get().has_value() || !m_game_object.get()->is_valid()) {
            return;
        }

        const auto game_object = **m_game_object.get();

        visible().set(false);
        const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;

        if (il2cpp::unity::is_valid(area_map)) {
            IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, game_object);
        }

        il2cpp::unity::destroy_object(game_object);
        m_map_icon.set(std::nullopt);
        m_game_object.set(std::nullopt);
    }

    void Icon::update_opacity(const float opacity) const {
        if (!m_map_icon.get().has_value() || !m_map_icon.get()->is_valid()) {
            return;
        }

        const auto area_map_icon = **m_map_icon.get();

        auto renderers = il2cpp::unity::get_components_in_children<app::Renderer>( //
            area_map_icon->fields.MapIconActive,
            types::Renderer::get_class(),
            true
        );

        if (area_map_icon->fields.MapIconInactive != nullptr) {
            const auto renderers_2 = il2cpp::unity::get_components_in_children<app::Renderer>(
                area_map_icon->fields.MapIconInactive, types::Renderer::get_class(), true
            );

            renderers.insert(renderers.end(), renderers_2.begin(), renderers_2.end());
        }

        if (area_map_icon->fields.MapIconSpecial != nullptr) {
            const auto renderers_extra = il2cpp::unity::get_components_in_children<app::Renderer>(
                area_map_icon->fields.MapIconSpecial, types::Renderer::get_class(), true
            );

            renderers.insert(renderers.end(), renderers_extra.begin(), renderers_extra.end());
        }

        auto i = 0;
        for (const auto renderer: renderers) {
            auto color = m_original_color[i];
            color.a *= opacity;
            UberShaderAPI::SetColor_1(renderer, app::UberShaderProperty_Color__Enum::MainColor, color);
            ++i;
        }
    }

    void Icon::initialize_game_object() {
        if (m_game_object.get().has_value() && m_game_object.get()->is_valid()) {
            il2cpp::unity::destroy_object(**m_game_object.get());
        }

        const auto game_object = map_icon_to_game_object(m_icon.get());

        if (game_object == nullptr) {
            return;
        }

        m_initialized = true;
        m_current_icon = icon().get();
        m_game_object.set(il2cpp::WeakGCRef(game_object));
    }

    void Icon::remove_scaler() const {
        if (!m_game_object.get().has_value() || !m_game_object.get()->is_valid()) {
            return;
        }

        const auto game_object = **m_game_object.get();

        const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;

        if (!il2cpp::unity::is_valid(area_map) || !il2cpp::unity::is_valid(area_map->fields._IconScaler_k__BackingField)) {
            return;
        }

        IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, game_object);
        il2cpp::unity::set_local_scale(game_object, {1, 1, 1});
    }

    void Icon::apply_scaler(app::Vector2 const& position) const {
        if (!m_game_object.get().has_value() || !m_game_object.get()->is_valid()) {
            return;
        }

        const auto game_object = **m_game_object.get();

        const app::Vector3 position_3{position.x, position.y, 0.0f};
        const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;

        if (!il2cpp::unity::is_valid(area_map)) {
            return;
        }

        IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, game_object, position_3, false);
    }
} // namespace randomizer::game::map
