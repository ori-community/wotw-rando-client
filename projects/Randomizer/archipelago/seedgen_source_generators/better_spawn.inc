#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator better_spawn = {
        []() -> std::string { return "better_spawn"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.better_spawn) {
                return std::nullopt;
            }

            return R"WOTWR(
// Better random spawn
3|0|8|20120|12902|bool|true
3|0|8|5377|14488|bool|true
3|0|8|21786|30656|bool|true
3|0|8|21786|40322|bool|true
3|0|8|21786|25095|bool|true
3|0|8|21786|53932|bool|true
)WOTWR";
        },
    };
}
