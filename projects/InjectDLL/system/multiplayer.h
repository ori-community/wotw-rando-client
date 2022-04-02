#pragma once

#include <string>
#include <vector>
#include <system/textures.h>

namespace multiplayer
{
    enum PlayerIcon : int32_t {
        Moki,
        Kii
    };

    struct PlayerInfo
    {
        std::wstring id;
        std::wstring name;
        app::Vector2 position;
        bool online = true;
        bool visible = true;
        app::Color color;
        PlayerIcon icon;

        // Internal
        int text_box = 0;
        uint64_t avatar_icon = 0;
        uint64_t map_avatar_icon = 0;
        float last_facing_pos = 0.0f;
        float last_facing = 1.0f;
        int facing = 1;

        // Dots
        struct Dot
        {
            app::GameObject* dot;
            app::Transform* transform;
            app::Renderer* renderer;
        };

        app::Vector2 previous_dot_position;
        float time_until_next_dot = 0;
        int next_dot_index = 0;
        std::vector<Dot> dots;
    };

    //std::vector<PlayerInfo> const& get_players();
    //PlayerInfo const* get_player(std::wstring str);
    app::Color const& get_local_player_color();
}

