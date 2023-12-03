#include <online/player_icon.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/game/ui.h>
#include <Core/dev/object_visualizer.h>
#include <Core/enums/layer.h>
#include <Core/utils/misc.h>

#include <Modloader/app/methods/IconPlacementScaler.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/AreaMapIcon.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/Renderer.h>
#include <Modloader/app/types/MessageBox.h>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace randomizer::online {
    constexpr float MAP_SPRITE_SCALE = 0.6f;
    constexpr float MAX_EXTRAPOLATE_TIME = 0.3f;
    constexpr float MAX_EXTRAPOLATE_DISTANCE_SQUARED = 25.f;

    constexpr int DOT_COUNT = 64;
    constexpr float DOT_TIMEOUT = 0.25f;
    constexpr float DOT_MIN_DISTANCE = 2.0f;

    void set_layer_recursive(app::GameObject* object, const int layer) {
        std::vector<app::GameObject*> objects{ object };
        while (!objects.empty()) {
            const auto back = objects.back();
            GameObject::set_layer(back, layer);

            objects.pop_back();
            auto children = il2cpp::unity::get_children(back);
            objects.insert(objects.end(), children.begin(), children.end());
        }
    }

    PlayerIcon::PlayerIcon(const Type type) {
        m_on_area_map_destroyed = core::api::game::event_bus().register_handler(GameEvent::DestroyAreaMap, EventTiming::Before, [&](auto, auto) {
            const auto scaler = core::api::game::ui::area_map()->fields._IconScaler_k__BackingField;
            for (const auto& dot: m_dots) {
                IconPlacementScaler::RemoveIcon(scaler, dot.dot);
            }
        });

        m_reactive_effects.push_back(core::reactivity::watch_effect([&]() {
            if (m_icon_visible.get()) {
                auto color = m_dynamic_color.get();
                utils::set_color(m_icon, color);
            }
        }));

        m_reactive_effects.push_back(core::reactivity::watch_effect([&]() {
            if (m_icon_visible.get()) {
                const auto message_box = il2cpp::unity::get_component<app::MessageBox>(m_text, types::MessageBox::get_class());
                message_box->fields.MessageProvider = core::api::system::create_message_provider(m_dynamic_name.get());
                MessageBox::RefreshText_1(message_box);
            }
        }));

        m_reactive_effects.push_back(core::reactivity::watch_effect().effect([&]() {
            if (m_icon_visible.get()) {
                [[maybe_unused]] auto icon_type = m_dynamic_type.get();
            }
        }).after([&]() {
            recreate();
        }).finalize());

        m_dynamic_type.set(type);
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
        if (m_icon_visible.get()) {
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
            const app::Vector3 dot_pos{ m_map_position.x, m_map_position.y, 0.0f };
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, dot_pos, false);
        }

        m_previous_dot_position = m_map_position;
        return true;
    }

    bool PlayerIcon::initialize_icon() {
        const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
        if (!il2cpp::unity::is_valid(area_map)) {
            return false;
        }

        const auto icons = area_map->fields._IconManager_k__BackingField->fields.Icons;
        switch (m_dynamic_type.get()) {
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
        const auto area_map_icon = il2cpp::unity::get_component(m_root, types::AreaMapIcon::get_class());
        if (area_map_icon != nullptr) {
            il2cpp::unity::destroy_object(area_map_icon);
        }

        set_layer_recursive(m_root, static_cast<int>(Layer::UI));
        add_to_container(core::api::game::RandoContainer::Multiplayer, m_root);

        const auto transform = il2cpp::unity::get_transform(m_icon);
        const app::Vector3 scale{ MAP_SPRITE_SCALE, MAP_SPRITE_SCALE, 1.0f };
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
        const float delta_time = TimeUtility::get_deltaTime();
        extrapolate_icon_position(delta_time);

        const bool should_be_visible = online && core::api::game::ui::area_map_open() && m_visible.get();
        if (should_be_visible != m_icon_visible.get()) {
            if (m_root == nullptr) {
                if (!initialize()) {
                    return;
                }
            }

            m_icon_visible.set(should_be_visible);
            il2cpp::unity::set_active(m_root, m_icon_visible.get());
            for (const auto& dot : m_dots) {
                il2cpp::unity::set_active(dot.dot, m_icon_visible.get());
            }
        }

        if (m_root != nullptr && should_make_dot()) {
            add_dot();
        }
    }

    bool PlayerIcon::should_make_dot() {
        m_time_until_next_dot -= TimeUtility::get_fixedDeltaTime();
        const auto dx = m_previous_dot_position.x - m_map_position.x;
        const auto dy = m_previous_dot_position.y - m_map_position.y;
        const auto squared_distance = dx * dx + dy * dy;
        return squared_distance >= DOT_MIN_DISTANCE * DOT_MIN_DISTANCE && m_time_until_next_dot < 0.0f;
    }

    void PlayerIcon::add_dot() {
        const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;

        if (area_map == nullptr) {
            return;
        }

        const auto& dot = m_dots[m_next_dot_index];
        il2cpp::unity::set_active(dot.dot, m_icon_visible.get());
        const app::Vector3 pos{ m_map_position.x, m_map_position.y, 0.0f };
        IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, dot.dot, pos, false);

        update_dot_colors();

        m_previous_dot_position = m_map_position;
        m_time_until_next_dot = DOT_TIMEOUT;
        m_next_dot_index = (m_next_dot_index + 1) % DOT_COUNT;
    }

    void PlayerIcon::update_dot_colors() const {
        auto dot_color = m_dynamic_color.get();
        dot_color.r = (dot_color.r + 1.0f) / 2.0f;
        dot_color.g = (dot_color.g + 1.0f) / 2.0f;
        dot_color.b = (dot_color.b + 1.0f) / 2.0f;

        constexpr int half_dots = DOT_COUNT / 2;
        for (int i = 0; i < half_dots; ++i) {
            dot_color.a = static_cast<float>(i) / half_dots;
            const auto& dot = m_dots[(m_next_dot_index + half_dots + i) % DOT_COUNT];
            UberShaderAPI::SetColor_1(dot.renderer, app::UberShaderProperty_Color__Enum::MainColor, dot_color);
        }
    }

    void PlayerIcon::update_position(const bool online, const float x, const float y) {
        if (abs(x - m_last_facing_pos) > 0.1f) {
            m_facing = x < m_last_facing_pos ? 1 : -1;
            m_last_facing_pos = x;
        }

        set_server_position_on_icon(x, y);

        if (m_root != nullptr && online && should_make_dot()) {
            add_dot();
        }
    }

    void PlayerIcon::set_server_position_on_icon(const float x, const float y) {
        const auto last_server_position = app::Vector2{ m_server_position.x, m_server_position.y };

        m_server_position.x = x;
        m_server_position.y = y;

        if (math::distance2(m_map_position, m_server_position) > MAX_EXTRAPOLATE_DISTANCE_SQUARED) {
            m_extrapolate_velocity = app::Vector2{ 0.f };
        } else if (m_time_since_server_position_update > FLT_EPSILON) {
            m_extrapolate_velocity = (m_server_position - last_server_position) / m_time_since_server_position_update;
        }

        m_map_position.x = x;
        m_map_position.y = y;
        m_time_since_server_position_update = 0.f;
    }

    void PlayerIcon::extrapolate_icon_position(const float delta_time) {
        m_time_since_server_position_update += delta_time;
        if (m_time_since_server_position_update < MAX_EXTRAPOLATE_TIME) {
            m_map_position.x = m_map_position.x + m_extrapolate_velocity.x * delta_time;
            m_map_position.y = m_map_position.y + m_extrapolate_velocity.y * delta_time;
        }
    }

    void PlayerIcon::apply_position() const {
        const app::Vector3 pos{ m_map_position.x, m_map_position.y, 0.f };
        if (m_icon_visible.get()) {
            const auto area_map = types::AreaMapUI::get_class()->static_fields->Instance;
            IconPlacementScaler::PlaceIcon(area_map->fields._IconScaler_k__BackingField, m_root, pos, false);
        }
    }

    void PlayerIcon::update_facing() const {
        if (m_icon_visible.get()) {
            const auto transform = il2cpp::unity::get_transform(m_icon);
            app::Vector3 scale = Transform::get_localScale(transform);
            scale.x = math::lerp(scale.x, static_cast<float>(m_facing) * MAP_SPRITE_SCALE, 20.0f * TimeUtility::get_deltaTime());
            Transform::set_localScale(transform, scale);
        }
    }
} // namespace randomizer::online
