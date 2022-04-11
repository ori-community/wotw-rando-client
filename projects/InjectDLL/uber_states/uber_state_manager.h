#pragma once

#include <macros.h>
#include <string>

namespace uber_states
{
    namespace constants
    {
        constexpr int APPLIERS_GROUP_COUNT = 50;

        constexpr int TREE_GROUP_ID = 0;
        constexpr int OPHER_WEAPON_GROUP_ID = 1;
        constexpr int TWILLEN_SHARD_GROUP_ID = 2;
        constexpr int GAME_STATE_GROUP_ID = 3;
        constexpr int RANDO_UPGRADE_GROUP_ID = 4;
        constexpr int RANDO_STATE_GROUP_ID = 6;
        constexpr int RANDO_CONFIG_GROUP_ID = 7;
        constexpr int MAP_FILTER_GROUP_ID = 8;
        constexpr int PLANDO_VARS_GROUP_ID = 9;
        constexpr int BINGO_STATE_GROUP_ID = 10;
        constexpr int APPLIERS_GROUP_ID = 11;
        constexpr int MULTI_VARS_GROUP_ID = 12;
        constexpr int PSEUDO_LOCS_GROUP_ID = 13;
        constexpr int RANDO_STATS_GROUP_ID = 14;
        constexpr int RANDO_VIRTUAL_GROUP_ID = 15;
        constexpr int LUPO_GROUP_ID = 16;
        constexpr int GROM_SHOP_GROUP_ID = 17;
        constexpr int RANDO_GAME_MODES_GROUP_ID = 18;

        const std::string TREE_GROUP_NAME = "trees";
        const std::string OPHER_WEAPON_GROUP_NAME = "opher_weapons";
        const std::string TWILLEN_SHARD_GROUP_NAME = "twillen_shards";
        const std::string RANDO_UPGRADE_GROUP_NAME = "rando_upgrades";
        const std::string GAME_STATE_GROUP_NAME = "game_state";
        const std::string RANDO_STATE_GROUP_NAME = "rando_state";
        const std::string RANDO_CONFIG_GROUP_NAME = "rando_config";
        const std::string MAP_FILTER_GROUP_NAME = "map_filter";
        const std::string PLANDO_VARS_GROUP_NAME = "plando_vars";
        const std::string BINGO_STATE_GROUP_NAME = "bingo_state";
        const std::string APPLIERS_GROUP_NAME = "appliers_serialization";
        const std::string MULTI_VARS_GROUP_NAME = "multi_vars";
        const std::string RANDO_STATS_GROUP_NAME = "rando_stats";
        const std::string RANDO_VIRTUAL_GROUP_NAME = "rando_virtual";
        const std::string LUPO_GROUP_NAME = "lupo";
        const std::string GROM_SHOP_GROUP_NAME = "grom_shop";
        const std::string RANDO_GAME_MODES_GROUP_NAME = "rando_game_modes";
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

    void set_uber_state_value(app::IUberState* uber_state, double value);
    double get_uber_state_value(void* uber_state);
    double get_uber_state_value(app::IUberState* uber_state);
    INJECT_C_DLLEXPORT void set_uber_state_value(int group, int state, double value);
    INJECT_C_DLLEXPORT double get_uber_state_value(int group, int state);

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
