#include <multiplayer.h>
#include <macros.h>

#include <unordered_map>

namespace multiplayer
{
    std::vector<PlayerInfo> players;
    std::unordered_map<std::wstring, int> player_map;

    std::vector<PlayerInfo> const& get_players()
    {
        return players;
    }

    PlayerInfo const& get_player(std::wstring str)
    {
        return players[multiplayer::player_map[str]];
    }
}

INJECT_C_DLLEXPORT void add_player(const wchar_t* id, const wchar_t* name)
{
    multiplayer::PlayerInfo& info = multiplayer::players.emplace_back();
    info.id = id;
    info.name = name;
    info.position = { 0 };
    info.online = true;
    multiplayer::player_map[id] = multiplayer::players.size() - 1;
}

INJECT_C_DLLEXPORT void remove_player(const wchar_t* id)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        auto player_it = multiplayer::players.erase(multiplayer::players.begin() + it->second);
        for (; player_it != multiplayer::players.end(); ++player_it)
            --multiplayer::player_map[player_it->id];
    }
}

INJECT_C_DLLEXPORT void update_player_position(const wchar_t* id, float x, float y)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        multiplayer::PlayerInfo& info = multiplayer::players[it->second];
        info.position.x = x;
        info.position.y = y;
    }
}

INJECT_C_DLLEXPORT void set_player_online(const wchar_t* id, bool online)
{
    auto it = multiplayer::player_map.find(id);
    if (it != multiplayer::player_map.end())
    {
        multiplayer::PlayerInfo& info = multiplayer::players[it->second];
        info.online = online;
    }
}
