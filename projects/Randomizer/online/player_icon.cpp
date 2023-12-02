#include <online/player_icon.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/dev/object_visualizer.h>
#include <Core/enums/layer.h>
#include <Core/utils/color.h>
#include <Core/utils/misc.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/IconPlacementScaler.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/AreaMapIcon.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/TextBox.h>

#include <algorithm>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;
using namespace app::classes::UnityEngine;
using namespace app::classes::CatlikeCoding::TextBox;

namespace randomizer::online {
    constexpr float MAP_SPRITE_SCALE = 0.6f;
    constexpr float MAX_EXTRAPOLATE_TIME = 0.3f;
    constexpr float MAX_EXTRAPOLATE_DISTANCE_SQUARED = 25.f;

    constexpr int DOT_COUNT = 64;
    constexpr float DOT_TIMEOUT = 0.25f;
    constexpr float DOT_MIN_DISTANCE = 2.0f;

    void set_layer_recursive(app::GameObject* object, int layer) {
        std::vector<app::GameObject*> objects{ object };
        while (!objects.empty()) {
            auto back = objects.back();
            GameObject::set_layer(back, layer);

            objects.pop_back();
            auto children = il2cpp::unity::get_children(back);
            objects.insert(objects.end(), children.begin(), children.end());
        }
    }

    PlayerIcon::PlayerIcon(Type type)
            : m_type(type) {
        m_dynamic_color.assign(std::make_tuple(
            [this](auto value) {
                m_color = value;
                if (m_icon_visible) {
                    utils::set_color(m_icon, value);
                }
            },
            [this]() { return m_color; }
        ));

        m_dynamic_name.assign(std::make_tuple(
            [this](auto value) {
                m_name = value;
                update_string();
            },
            [this]() { return m_name; }
        ));

        m_dynamic_type.assign(std::make_tuple(
            [this](auto value) {
                m_type = value;
                recreate();
            },
            [this]() { return m_type; }
        ));
    }

    PlayerIcon::~PlayerIcon() {
        if (m_root == nullptr) {
            return;
        }

        auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
        if (il2cpp::unity::is_valid(area_map)) {
            for (auto const& dot : m_dots) {
                IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, dot.dot);
                il2cpp::unity::destroy_object(dot.dot);
            }

            IconPlacementScaler::RemoveIcon(area_map->fields._IconScaler_k__BackingField, m_root);
        }

        il2cpp::unity::destroy_object(m_root);
    }

    void PlayerIcon::recreate() {
        il2cpp::unity::destroy_object(m_root);
        if (m_icon_visible) {
            initialize_icon();
        }
    }

    bool PlayerIcon::initialize() {
        auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
        if (!il2cpp::unity::is_valid(area_map) || !initialize_icon()) {
            return false;
        }

        // Initialize m_dots.
        while (m_dots.size() <= DOT_COUNT) {
            auto& dot = m_dots.emplace_back();
            dot.dot = reinterpret_cast<app::GameObject*>(Object::Instantiate_3(reinterpret_cast<app::Object_1*>(area_map->fields.TrailPrefab)));
            dot.transform = il2cpp::unity::get_transform(dot.dot);
            dot.renderer = il2cpp::unity::get_component<app::Renderer>(il2cpp::unity::get_children(dot.dot)[0], types::Renderer::get_class());
            il2cpp::unity::set_active(dot.dot, m_visible.get());
            app::Vector3 dot_pos{ m_map_position.x, m_map_position.y, 0.0f };
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, dot_pos, false);
        }

        m_previous_dot_position = m_map_position;
        return true;
    }

    bool PlayerIcon::initialize_icon() {
        auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
        if (!il2cpp::unity::is_valid(area_map)) {
            return false;
        }

        auto icons = area_map->fields._IconManager_k__BackingField->fields.Icons;
        switch (m_type) {
            case Type::Kii: {
                m_root = il2cpp::unity::instantiate_object(icons->fields.Siira);
                m_icon = il2cpp::unity::find_child(m_root, "npcTreeKeeperTraderMapIcon");
                m_text = il2cpp::unity::find_child(m_root, "IconLabelPrefab");
                il2cpp::unity::set_active(il2cpp::unity::find_child(m_root, "questObjective2MapIcon"), false);
                break;
            }
            default: // Moki
            {
                m_root = il2cpp::unity::instantiate_object(icons->fields.Moki);
                m_icon = il2cpp::unity::find_child(m_root, "npcMokiMapIcon");
                m_text = il2cpp::unity::find_child(m_root, "IconLabelPrefab");
                il2cpp::unity::set_active(il2cpp::unity::find_child(m_root, "questObjective2MapIcon"), false);
                break;
            }
        }

        il2cpp::invoke(m_root, "set_name", il2cpp::string_new("player_map_icon"));
        il2cpp::unity::set_active(m_text, true);
        auto area_map_icon = il2cpp::unity::get_component(m_root, types::AreaMapIcon::get_class());
        if (area_map_icon != nullptr) {
            il2cpp::unity::destroy_object(area_map_icon);
        }

        set_layer_recursive(m_root, static_cast<int>(Layer::UI));
        core::api::game::add_to_container(core::api::game::RandoContainer::Multiplayer, m_root);

        auto transform = il2cpp::unity::get_transform(m_icon);
        app::Vector3 scale{ MAP_SPRITE_SCALE, MAP_SPRITE_SCALE, 1.0f };
        Transform::set_localScale(transform, scale);
        auto pos = Transform::get_localPosition(transform);
        pos.z = -0.004f;
        Transform::set_localPosition(transform, pos);
        apply_position();
        return true;
    }

    void PlayerIcon::update(bool online) {
        update_facing();
        apply_position();

        // Extrapolate for next frame
        float delta_time = TimeUtility::get_deltaTime();
        extrapolate_icon_position(delta_time);

        bool should_be_visible = online && core::api::game::ui::area_map_open() && m_visible.get();
        if (should_be_visible != m_icon_visible) {
            if (m_root == nullptr) {
                if (!initialize()) {
                    return;
                }

                update_string();
                utils::set_color(m_icon, m_color);
            }

            m_icon_visible = should_be_visible;
            il2cpp::unity::set_active(m_root, m_icon_visible);
            for (auto& dot : m_dots) {
                il2cpp::unity::set_active(dot.dot, m_icon_visible);
            }
        }

        if (m_root != nullptr && should_make_dot()) {
            add_dot();
        }
    }

    bool PlayerIcon::should_make_dot() {
        m_time_until_next_dot -= TimeUtility::get_fixedDeltaTime();
        auto dx = m_previous_dot_position.x - m_map_position.x;
        auto dy = m_previous_dot_position.y - m_map_position.y;
        auto squared_distance = dx * dx + dy * dy;
        return squared_distance >= DOT_MIN_DISTANCE * DOT_MIN_DISTANCE && m_time_until_next_dot < 0.0f;
    }

    void PlayerIcon::add_dot() {
        auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;

        if (area_map == nullptr) {
            return;
        }

        auto& dot = m_dots[m_next_dot_index];
        il2cpp::unity::set_active(dot.dot, m_icon_visible);
        app::Vector3 pos{ m_map_position.x, m_map_position.y, 0.0f };
        IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, pos, false);

        update_dot_colors();

        m_previous_dot_position = m_map_position;
        m_time_until_next_dot = DOT_TIMEOUT;
        m_next_dot_index = (m_next_dot_index + 1) % DOT_COUNT;
    }

    void PlayerIcon::update_dot_colors() {
        app::Color dot_color = m_color;
        dot_color.r = (dot_color.r + 1.0f) / 2.0f;
        dot_color.g = (dot_color.g + 1.0f) / 2.0f;
        dot_color.b = (dot_color.b + 1.0f) / 2.0f;

        constexpr int half_dots = DOT_COUNT / 2;
        for (int i = 0; i < half_dots; ++i) {
            dot_color.a = static_cast<float>(i) / half_dots;
            auto& dot = m_dots[(m_next_dot_index + half_dots + i) % DOT_COUNT];
            UberShaderAPI::SetColor_1(dot.renderer, app::UberShaderProperty_Color__Enum::MainColor, dot_color);
        }
    }

    void PlayerIcon::update_position(bool online, float x, float y) {
        if (abs(x - m_last_facing_pos) > 0.1f) {
            m_facing = x < m_last_facing_pos ? 1 : -1;
            m_last_facing_pos = x;
        }

        set_server_position_on_icon(x, y);

        if (m_root != nullptr && online && should_make_dot()) {
            add_dot();
        }
    }

    void PlayerIcon::set_server_position_on_icon(float x, float y) {
        auto last_server_position = app::Vector2{ m_server_position.x, m_server_position.y };

        m_server_position.x = x;
        m_server_position.y = y;

        if (modloader::math::distance2(m_map_position, m_server_position) > MAX_EXTRAPOLATE_DISTANCE_SQUARED) {
            m_extrapolate_velocity = app::Vector2{ 0.f };
        } else if (m_time_since_server_position_update > FLT_EPSILON) {
            m_extrapolate_velocity = (m_server_position - last_server_position) / m_time_since_server_position_update;
        }

        m_map_position.x = x;
        m_map_position.y = y;
        m_time_since_server_position_update = 0.f;
    }

    void PlayerIcon::extrapolate_icon_position(float delta_time) {
        m_time_since_server_position_update += delta_time;
        if (m_time_since_server_position_update < MAX_EXTRAPOLATE_TIME) {
            m_map_position.x = m_map_position.x + m_extrapolate_velocity.x * delta_time;
            m_map_position.y = m_map_position.y + m_extrapolate_velocity.y * delta_time;
        }
    }

    void PlayerIcon::apply_position() {
        app::Vector3 pos{ m_map_position.x, m_map_position.y, 0.f };
        if (m_icon_visible) {
            auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, m_root, pos, false);
        }
    }

    void PlayerIcon::update_facing() {
        if (m_icon_visible) {
            auto transform = il2cpp::unity::get_transform(m_icon);
            app::Vector3 scale = Transform::get_localScale(transform);
            scale.x = modloader::math::lerp(scale.x, static_cast<float>(m_facing) * MAP_SPRITE_SCALE, 20.0f * TimeUtility::get_deltaTime());
            Transform::set_localScale(transform, scale);
        }
    }

    void PlayerIcon::update_string() {
        if (m_icon_visible) {
            auto text_box = il2cpp::unity::get_component<app::TextBox>(m_text, types::TextBox::get_class());
            TextBox::SetText_2(text_box, il2cpp::string_new(m_name));
            TextBox::RenderText(text_box);
        }
    }
} // namespace randomizer::online
