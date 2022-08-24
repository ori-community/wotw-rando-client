#pragma once

#include <features/ghosts.h>
#include <randomizer/render/textures.h>
#include <string>
#include <vector>

namespace multiplayer {
    enum PlayerIcon : int32_t {
        Moki,
        Kii
    };

    struct PlayerInfo {
        struct Icon {
            uint64_t handle = 0;
            app::Vector2 position = { 0 };
            int facing = 1;
            float last_facing_pos = 0.0f;
            bool visible = true;

            // Used for interpolation
            app::Vector2 server_position = { 0 };
            app::Vector2 extrapolate_velocity = { 0 };
            float time_since_server_position_update = 0;

            app::GameObject* root = nullptr;
            app::GameObject* text = nullptr;
            app::GameObject* icon = nullptr;
        };

        std::wstring id;
        std::wstring name;
        int64_t name_handle = 0;
        bool online = true;
        bool world_visible = true;
        bool map_visible = true;
        app::Color color = { 1, 1, 1, 1 };
        PlayerIcon icon = PlayerIcon::Moki;

        // Internal
        // Icon world_avatar;
        Icon map_avatar;
        ghosts::RandoGhost world_ghost;

        // Dots
        struct Dot {
            app::GameObject* dot;
            app::Transform* transform;
            app::Renderer* renderer;
        };

        app::Vector2 previous_dot_position = { 0 };
        float time_until_next_dot = 0;
        int next_dot_index = 0;
        std::vector<Dot> dots;
    };

    app::Color const& get_local_player_color();
} // namespace multiplayer
