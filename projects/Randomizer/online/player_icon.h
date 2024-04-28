#pragma once

#include <Randomizer/macros.h>

#include <Common/ext.h>

#include <Core/property.h>

#include <Modloader/app/structs/Renderer.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include <string_view>

namespace randomizer::online {
    class PlayerIcon {
    public:
        enum class Type : int32_t {
            Moki,
            Kii
        };

        explicit PlayerIcon(Type type);
        PlayerIcon(PlayerIcon&& other) = delete;
        PlayerIcon(PlayerIcon const& other) = delete;
        ~PlayerIcon();

        void update(bool online);
        void update_position(bool online, float x, float y);
        void recreate();

        [[nodiscard]] core::Property<app::Color>& color() { return m_dynamic_color; }
        [[nodiscard]] core::Property<std::string>& name() { return m_dynamic_name; }
        [[nodiscard]] core::Property<bool>& visible() { return m_visible; }
        [[nodiscard]] core::Property<Type>& type() { return m_dynamic_type; }

    private:
        bool initialize();
        bool initialize_icon();
        bool should_make_dot();
        void add_dot();
        void update_dot_colors() const;

        void set_server_position_on_icon(float x, float y);
        void extrapolate_icon_position(float delta_time);
        void apply_position();
        void update_facing();

        struct Dot {
            app::GameObject* dot;
            app::Transform* transform;
            app::Renderer* renderer;
        };

        std::vector<std::shared_ptr<core::reactivity::ReactiveEffect>> m_reactive_effects;
        common::registration_handle_t m_on_area_map_destroyed;

        app::Vector2 m_previous_dot_position = { 0 };
        float m_time_until_next_dot = 0;
        int m_next_dot_index = 0;
        std::vector<Dot> m_dots;

        app::Vector2 m_map_position = { 0 };
        int m_facing = 1;
        float m_last_facing_pos = 0.0f;

        // Used for interpolation
        app::Vector2 m_server_position = { 0 };
        app::Vector2 m_extrapolate_velocity = { 0 };
        float m_time_since_server_position_update = 0;

        il2cpp::WeakGCRef<app::GameObject> m_root;
        il2cpp::WeakGCRef<app::GameObject> m_text;
        il2cpp::WeakGCRef<app::GameObject> m_icon;

        core::Property<bool> m_visible;
        core::Property<bool> m_icon_visible;
        core::Property<app::Color> m_dynamic_color;
        core::Property<std::string> m_dynamic_name;
        core::Property<Type> m_dynamic_type;
    };
} // namespace randomizer::online
