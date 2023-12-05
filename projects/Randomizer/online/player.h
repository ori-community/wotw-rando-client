#pragma once

#include <Randomizer/ghosts.h>
#include <Randomizer/online/player_icon.h>

#include <algorithm>
#include <unordered_map>

namespace randomizer::online {
    class Player {
    public:
        Player(std::string_view id);
        ~Player();

        void recreate() const;
        void update();
        void update_map_position(float x, float y) const;
        void update_ghost(std::string_view ghost_frame_data);

        void set_name(std::string_view value);
        void set_icon(PlayerIcon::Type value) const;
        void set_color(app::Color value);
        void set_online(bool value);
        void set_visible_map(bool value) const;
        void set_visible_world(bool value);

    private:
        std::string m_id;
        std::string m_name;

        bool m_online = true;
        bool m_visible_world = true;

        app::Color m_color = { 1, 1, 1, 1 };

        std::unique_ptr<PlayerIcon> m_map_icon;
        ghosts::RandoGhost m_world_ghost;
    };
} // namespace randomizer::online
