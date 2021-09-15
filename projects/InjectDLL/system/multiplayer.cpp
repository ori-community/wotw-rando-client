#include <multiplayer.h>
#include <macros.h>

#include <unordered_map>

namespace multiplayer
{
    std::vector<PlayerInfo> players;
    std::unordered_map<std::string, int> player_map;

    std::vector<PlayerInfo> const& get_player_infos()
    {
        return players;
    }
}

INJECT_C_DLLEXPORT void add_player(const char* name)
{
    multiplayer::PlayerInfo& info = multiplayer::players.emplace_back();
    info.name = name;
    info.position = { 0 };
    multiplayer::player_map[name] = multiplayer::players.size() - 1;
}

INJECT_C_DLLEXPORT void remove_player(const char* name)
{
    auto it = multiplayer::player_map.find(name);
    if (it != multiplayer::player_map.end())
    {
        auto player_it = multiplayer::players.erase(multiplayer::players.begin() + it->second);
        for (; player_it != multiplayer::players.end(); ++player_it)
            --multiplayer::player_map[player_it->name];
    }
}

INJECT_C_DLLEXPORT void update_player_position(const char* name, float x, float y, float z)
{
    auto it = multiplayer::player_map.find(name);
    if (it != multiplayer::player_map.end())
    {
        multiplayer::PlayerInfo& info = multiplayer::players[it->second];
        info.position.x = x;
        info.position.y = y;
        info.position.z = z;
    }
}
