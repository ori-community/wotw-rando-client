#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator better_wellspring = {
        []() -> std::string { return "better_wellspring"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.better_wellspring) {
                return std::nullopt;
            }

            return R"WOTWR(
// Better Wellspring
3|0|8|37858|31962|bool|true
)WOTWR";
        },
    };
}
