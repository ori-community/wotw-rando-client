#pragma once
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

        std::optional<app::Vector2> m_live_position = std::nullopt;
    };
}
