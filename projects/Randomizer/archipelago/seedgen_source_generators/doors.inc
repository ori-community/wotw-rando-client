#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator doors = {
        []() -> std::string { return "doors"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.door_rando) {
                return std::nullopt;
            }
            std::string door_rando;
            for (int i = 0; i < 32; ++i) {
                door_rando += std::format("3|0|8|27|{}|int|{}\n", i + 1, options.door_data[i]);
                door_rando += std::format("3|0|8|28|{}|bool|false\n", i + 1);
                door_rando += std::format("28|{}|8|28|{}|bool|true\n", i + 1, options.door_data[i]);
            }
            return door_rando;
        },
    };
}
