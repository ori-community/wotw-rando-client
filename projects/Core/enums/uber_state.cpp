#include <Core/enums/uber_state.h>

#include <unordered_map>

namespace {
    std::unordered_map<UberStateGroup, std::string> group_names = {
        { UberStateGroup::Tree, "trees" },
        { UberStateGroup::OpherShop, "opherWeapons" },
        { UberStateGroup::TwillenShop, "twillenShards" },
        { UberStateGroup::RandoEvents, "randoEvents" },
        { UberStateGroup::RandoUpgrade, "randoUpgrades" },
        { UberStateGroup::RandoState, "randoState" },
        { UberStateGroup::RandoConfig, "randoConfig" },
        { UberStateGroup::MapFilter, "mapFilter" },
        { UberStateGroup::PlandoVars, "plandoVars" },
        { UberStateGroup::BingoState, "bingoState" },
        { UberStateGroup::Appliers, "appliersSerialization" },
        { UberStateGroup::MultiVars, "multiVars" },
        { UberStateGroup::RandoStats, "randoStats" },
        { UberStateGroup::RandoVirtual, "randoVirtual" },
        { UberStateGroup::LupoGroup, "lupo" },
        { UberStateGroup::GromShop, "gromShop" },
        { UberStateGroup::RandoGameModes, "randoGameModes" },
        { UberStateGroup::ShrineStates, "shrineStates" },
        { UberStateGroup::TuleyShop, "tuleyShop" },
        { UberStateGroup::GladesProjects, "gladesProjects" },

        { UberStateGroup::npcsStateGroup, "npcsStateGroup" }
    };
}

std::string uber_state_group_name(UberStateGroup group) {
    auto it = group_names.find(group);
    return it != group_names.end() ? it->second : "unknown";
}
