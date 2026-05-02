#pragma once
#include <Modloader/app/structs/Vector2.h>
#include <Common/droppable.h>
#include <Randomizer/map/map_icons.h>

namespace randomizer::map::player_icon {
    class PlayerIcon {
    public:
        PlayerIcon();

        void set_name(const std::string& name) const;
        void set_position_and_velocity(const app::Vector2& position, const app::Vector2& velocity);
        void set_color(const SolidColor& color) const;

        core::Property<bool> visible{true};

    private:
        icons::MapIcon::ptr_t m_map_icon;

        common::Droppable::ptr_t m_on_before_update_droppable;
        app::Vector2 m_server_position{};
        app::Vector2 m_server_velocity{};
        float m_extrapolation_time = 0.f;

        void on_before_update();
    };
}
