#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator spawn = {
        []() -> std::string { return "spawn"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            std::string output = std::format("Spawn: {}, {}  // {}\n", options.spawn_x, options.spawn_y, options.spawn_anchor);
            output += std::format(R"WOTWR(3|1|4|22|0|{}|{}|Warp to Spawn)WOTWR", options.spawn_x, options.spawn_y);

            return output;
        },
    };
}
