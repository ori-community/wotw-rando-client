#pragma once

#include <string>
#include <vector>
#include <system/textures.h>

namespace multiplayer
{
    struct PlayerInfo
    {
        std::wstring id;
        std::wstring name;
        app::Vector2 position;
        bool online = true;
        app::Color color;
        std::shared_ptr<textures::TextureData> texture;
        int avatar_id = 0;
    };

    std::vector<PlayerInfo> const& get_players();
    PlayerInfo const* get_player(std::wstring str);
    app::Color const& get_local_player_color();
}

