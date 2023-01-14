#pragma once

#include <ghosts.h>
#include <online/player_icon.h>

#include <algorithm>
#include <unordered_map>

namespace online {
    class Player {
    public:
        Player();
        ~Player();

        void recreate();
        void update();
        void update_map_position(float x, float y);
        void update_ghost(std::string_view ghost_frame_data);

        void set_icon(PlayerIcon::Type value);
        void set_color(app::Color value);
        void set_online(bool value);
        void set_visible_map(bool value);
        void set_visible_world(bool value);

    private:
        std::wstring id;
        std::wstring name;

        bool online = true;
        bool visible_world = true;

        app::Color color = { 1, 1, 1, 1 };

        std::unique_ptr<PlayerIcon> map_icon;
        ghosts::RandoGhost world_ghost;
    };
} // namespace online
