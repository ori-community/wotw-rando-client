#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>
#include <Randomizer/archipelago/archipelago_ids.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator relics = {
        []() -> std::string { return "relics"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            std::string relic_header;
            for (auto& relic: options.relic_locs) {
                location_data::Location relic_location = ids::get_location_from_id(std::get<1>(relic));
                const int group = relic_location.condition.state.group_int();
                const int state = relic_location.condition.state.state();
                const int value = relic_location.condition.lower_bound_value();

                if (value == 1) {
                    relic_header += std::format("{}|{}|14|{}\n", group, state, std::get<0>(relic));
                } else {
                    relic_header += std::format("{}|{}>={}|14|{}\n", group, state, value, std::get<0>(relic));
                }
            }
            return relic_header;
        },
    };
}
