#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_trials = {
        []() -> std::string { return "no_trials"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.no_trials) {
                return std::nullopt;
            }

            return R"WOTWR(
// No Trials
3|0|8|44964|45951|int|2
3|0|8|44964|25545|int|2
3|0|8|44964|11512|int|2
3|0|8|44964|54686|int|2
3|0|8|44964|22703|int|2
3|0|8|44964|23661|int|2
3|0|8|44964|28552|int|2
3|0|8|44964|30767|int|2
)WOTWR";
        },
    };
}
