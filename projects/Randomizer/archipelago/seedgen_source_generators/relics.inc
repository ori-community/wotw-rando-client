#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>
#include <Randomizer/location_data/location.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator relics = {
        []() -> std::string { return "relics"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            std::string relic_header;
            for (auto& relic: options.relic_locs) {
                uint8_t group = static_cast<uint8_t>(std::get<1>(relic) >> 24);
                uint8_t state = static_cast<uint16_t>(std::get<1>(relic) >> 8);
                uint8_t value = static_cast<uint8_t>(std::get<1>(relic));


                if (value == 0) {
                    relic_header += std::format("{}|{}|14|{}", group, state, std::get<0>(relic));
                }
                else {
                    relic_header += std::format("{}|{}>={}|14|{}", group, state, value, std::get<0>(relic));
                }
            }
            return relic_header;
        },
    };
}
