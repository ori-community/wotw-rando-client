#pragma once

#include <string>
#include <vector>

namespace multiplayer
{
    struct PlayerInfo
    {
        std::string name;
        app::Vector2 position;
    };

    std::vector<PlayerInfo> const& get_players();
}

