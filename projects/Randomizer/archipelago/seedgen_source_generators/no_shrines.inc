#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_shrines = {
        []() -> std::string { return "no_shrines"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.skip_shrine) {
                return std::nullopt;
            }

            return R"WOTWR(
// Combat Shrines start as completed
3|0|8|21786|2869|bool|true
3|0|8|24922|45011|bool|true
3|0|8|18793|12512|bool|true
3|0|8|58674|56043|bool|true
3|0|8|44310|58796|bool|true
)WOTWR";
        },
    };
}
