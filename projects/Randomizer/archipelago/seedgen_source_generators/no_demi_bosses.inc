#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_demi_bosses = {
        []() -> std::string { return "no_demi_bosses"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.skip_demi_boss) {
                return std::nullopt;
            }

            return R"WOTWR(
// Demi Bosses start as defeated
3|0|8|21786|30656|bool|true
3|0|8|21786|40322|bool|true
3|0|8|21786|25095|bool|true
3|0|8|937|53122|bool|true
3|0|8|937|48534|int|4
3|0|8|16155|28478|bool|true
3|0|8|16155|12971|int|4
)WOTWR";
        },
    };
}
