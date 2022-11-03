#include <Core/enums/uber_state.h>

#include <unordered_map>

namespace {
    std::unordered_map<UberStateGroup, std::string> group_names = {
        { UberStateGroup::Tree, "trees" },
        { UberStateGroup::OpherWeapon, "opher_weapons" },
        { UberStateGroup::TwillenShard, "twillen_shards" },
        { UberStateGroup::GameState, "game_state" },
        { UberStateGroup::RandoUpgrade, "rando_upgrades" },
        { UberStateGroup::RandoState, "rando_state" },
        { UberStateGroup::RandoConfig, "rando_config" },
        { UberStateGroup::MapFilter, "map_filter" },
        { UberStateGroup::PlandoVars, "plando_vars" },
        { UberStateGroup::BingoState, "bingo_state" },
        { UberStateGroup::Appliers, "appliers_serialization" },
        { UberStateGroup::MultiVars, "multi_vars" },
        { UberStateGroup::PseuodoLocs, "pseuodo_locs" },
        { UberStateGroup::RandoStats, "rando_stats" },
        { UberStateGroup::RandoVirtual, "rando_virtual" },
        { UberStateGroup::LupoGroup, "lupo" },
        { UberStateGroup::GromShop, "grom_shop" },
        { UberStateGroup::RandoGameModes, "rando_game_modes" },
        { UberStateGroup::ShrineStates, "shrine_states" },

        { UberStateGroup::npcsStateGroup, "npcsStateGroup" }
    };
}

std::string uber_state_group_name(UberStateGroup group) {
    auto it = group_names.find(group);
    return it != group_names.end() ? it->second : "unknown";
}
