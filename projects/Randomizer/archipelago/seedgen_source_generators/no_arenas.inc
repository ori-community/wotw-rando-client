#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_arenas = {
        []() -> std::string { return "no_arenas"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.skip_arena) {
                return std::nullopt;
            }

            return R"WOTWR(
// Combat Arenas start as completed
3|0|8|21786|35598|bool|true
3|0|8|28895|42209|bool|true
3|0|8|9593|59418|bool|true
3|0|8|9593|25130|int|3
3|0|8|36153|23584|bool|true
3|0|8|37858|8487|int|5
3|0|8|5377|53480|byte|4
)WOTWR";
        },
    };
}
