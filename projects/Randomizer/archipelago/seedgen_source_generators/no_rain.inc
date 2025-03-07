#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_rain = {
        []() -> std::string { return "no_rain"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.no_rain) {
                return std::nullopt;
            }

            return R"WOTWR(
// No rain
3|0|8|6|401|bool|true
3|0|8|21786|30656|bool|true
3|0|8|21786|40322|bool|true
3|0|8|21786|25095|bool|true
)WOTWR";
        },
    };
}
