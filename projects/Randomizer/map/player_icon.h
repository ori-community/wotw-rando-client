#pragma once
#include <Modloader/app/structs/Vector2.h>
#include <Common/droppable.h>
#include <Randomizer/map/map_icons.h>

namespace randomizer::map::player_icon {
    class PlayerIcon {
    public:
        PlayerIcon();

        void set_name(const std::string& name) const;
        void set_live_position(const app::Vector2& position);
        void set_color(const SolidColor& color) const;

        core::Property<bool> visible{true};

    private:
        icons::MapIcon::ptr_t m_map_icon;

        common::Droppable::ptr_t m_on_before_update_droppable;
        app::Vector2 m_live_position{};
        std::optional<std::chrono::time_point<std::chrono::steady_clock>> m_live_position_time = std::nullopt;
        app::Vector2 m_velocity{};
        float m_extrapolation_time = 0.f;

        void on_before_update();
    };
}
