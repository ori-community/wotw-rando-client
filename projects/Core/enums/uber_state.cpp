#include <Core/enums/uber_state.h>

#include <unordered_map>

namespace {
    std::unordered_map<UberStateGroup, std::string> custom_group_names = {
        { UberStateGroup::Tree, "trees" },
        { UberStateGroup::OpherShop, "opherShop" },
        { UberStateGroup::TwillenShop, "twillenShop" },
        { UberStateGroup::RandoEvents, "randoEvents" },
        { UberStateGroup::RandoUpgrade, "randoUpgrades" },
        { UberStateGroup::Player, "player" },
        { UberStateGroup::RandoState, "randoState" },
        { UberStateGroup::RandoConfig, "randoConfig" },
        { UberStateGroup::Custom, "custom" },
        { UberStateGroup::BingoState, "bingoState" },
        { UberStateGroup::Appliers, "appliers" },
        { UberStateGroup::Multiworld, "multiworld" },
        { UberStateGroup::RandoStats, "randoStats" },
        { UberStateGroup::LupoShop, "lupoShop" },
        { UberStateGroup::LupoMapCosts, "lupoMapCosts" },
        { UberStateGroup::GromShop, "gromShop" },
        { UberStateGroup::Shrines, "shrines" },
        { UberStateGroup::TuleyShop, "tuleyShop" },
        { UberStateGroup::GladesProjects, "gladesProjects" },
        { UberStateGroup::MapSegments, "mapSegments" },
        { UberStateGroup::Goals, "goals" },
        { UberStateGroup::Skills, "skills" },
        { UberStateGroup::Shards, "shards" },
        { UberStateGroup::Settings, "settings" },
    };
}

std::optional<std::string> custom_uber_state_group_name(UberStateGroup group) {
    const auto it = custom_group_names.find(group);

    if (it != custom_group_names.end()) {
        return it->second;
    }

    return std::nullopt;
}
