#include <Core/enums/uber_state.h>

#include <unordered_map>

namespace {
    std::unordered_map<UberStateGroup, std::string> custom_group_names = {
        { UberStateGroup::Tree, "trees" },
        { UberStateGroup::OpherShop, "opherShop" },
        { UberStateGroup::TwillenShop, "twillenShop" },
        { UberStateGroup::RandoUpgrade, "randoUpgrades" },
        { UberStateGroup::Player, "player" },
        { UberStateGroup::RandoState, "randoState" },
        { UberStateGroup::RandoConfig, "randoConfig" },
        { UberStateGroup::CustomBooleans, "customBooleans" },
        { UberStateGroup::CustomIntegers, "customIntegers" },
        { UberStateGroup::CustomFloats, "customFloats" },
        { UberStateGroup::BingoState, "bingoState" },
        { UberStateGroup::Multiworld, "multiworld" },
        { UberStateGroup::RandoStats, "randoStats" },
        { UberStateGroup::LupoShop, "lupoShop" },
        { UberStateGroup::GromShop, "gromShop" },
        { UberStateGroup::Shrines, "shrines" },
        { UberStateGroup::TuleyShop, "tuleyShop" },
        { UberStateGroup::GladesProjects, "gladesProjects" },
        { UberStateGroup::MapSegments, "mapSegments" },
        { UberStateGroup::Goals, "goals" },
        { UberStateGroup::Skills, "skills" },
        { UberStateGroup::Shards, "shards" },
        { UberStateGroup::UI, "ui" },
        { UberStateGroup::Doors, "doors" },
        { UberStateGroup::KnownDoorConnections, "knownDoorConnections" },
        { UberStateGroup::Settings, "settings" },
        { UberStateGroup::Input, "input" },
        { UberStateGroup::RandomValueGenerator, "randomValueGenerator" },
    };
}

std::optional<std::string> custom_uber_state_group_name(UberStateGroup group) {
    const auto it = custom_group_names.find(group);

    if (it != custom_group_names.end()) {
        return it->second;
    }

    return std::nullopt;
}
