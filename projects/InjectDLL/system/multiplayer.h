#pragma once

#include <string>
#include <vector>

namespace multiplayer
{
    struct PlayerInfo
    {
        std::string name;
        app::Vector3 position;
    };

    std::vector<PlayerInfo> const& get_player_infos();
}

