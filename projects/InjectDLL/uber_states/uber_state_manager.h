#pragma once

#include <macros.h>
#include <string>

namespace uber_states
{
    namespace constants
    {
        constexpr int TREE_GROUP_ID = 0;
        constexpr int OPHER_WEAPON_GROUP_ID = 1;
        constexpr int TWILLEN_SHARD_GROUP_ID = 2;
        constexpr int RANDO_STATS_GROUP_ID = 6;
        constexpr int RANDO_CONFIG_GROUP_ID = 7;
        constexpr int MAP_FILTER_GROUP_ID = 8;

        const std::string TREE_GROUP_NAME = "trees";
        const std::string OPHER_WEAPON_GROUP_NAME = "opher_weapons";
        const std::string TWILLEN_SHARD_GROUP_NAME = "twillen_shards";
        const std::string RANDO_STATS_GROUP_NAME = "rando_stats";
        const std::string RANDO_CONFIG_GROUP_NAME = "rando_config";
        const std::string MAP_FILTER_GROUP_NAME = "map_filter";
    }

    // Mainly useful for reevaluating listeners when a state should have changed but it didn't.
    void apply_uber_state_no_notify(app::IUberState* uber_state);

    app::UberID* get_uber_state_id(app::IUberState* uber_state);
    app::UberID* get_uber_state_group_id(app::IUberState* uber_state);
    std::string get_uber_state_name(app::IUberState* uber_state);
    std::string get_uber_state_group_name(app::IUberState* uber_state);
    std::string tostring(app::IUberState* uber_state);

    app::UberID create_uber_id(int id);
    app::IUberState* get_uber_state_untyped(app::UberID& group_id, app::UberID& state_id);

    void set_uber_state_value(app::IUberState* uber_state, float value);
    float get_uber_state_value(app::IUberState* uber_state);
    INJECT_C_DLLEXPORT void set_uber_state_value(int group, int state, float value);
    INJECT_C_DLLEXPORT float get_uber_state_value(int group, int state);
    INJECT_C_DLLEXPORT void refresh_player_uber_descriptor();

    template<typename Return = app::IUberState>
    Return* get_uber_state(int group_id, int state_id)
    {
        auto group = create_uber_id(group_id);
        auto state = create_uber_id(state_id);
        return reinterpret_cast<Return*>(get_uber_state_untyped(group, state));
    }

    template<typename Return = app::IUberState>
    Return* get_uber_state(app::UberID& group_id, app::UberID& state_id)
    {
        return reinterpret_cast<Return*>(get_uber_state_untyped(group_id, state_id));
    }
}
