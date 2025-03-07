#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_hand = {
        []() -> std::string { return "no_hand"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.no_hand_quest) {
                return std::nullopt;
            }

            return R"WOTWR(
// Remove Hand to Hand
3|0|8|14019|26318|int|11
)WOTWR";
        },
    };
}
