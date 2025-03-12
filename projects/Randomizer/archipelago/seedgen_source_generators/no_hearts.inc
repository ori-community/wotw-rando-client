#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_hearts = {
        []() -> std::string { return "no_hearts"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.no_hearts) {
                return std::nullopt;
            }

            return R"WOTWR(
// No Willow Hearts
3|0|8|16155|42976|bool|true
3|0|8|16155|54940|bool|true
3|0|8|16155|24290|bool|true
3|0|8|16155|28478|bool|true
3|0|8|16155|3588|bool|true
3|0|8|16155|65277|bool|true
3|0|8|16155|41488|bool|true
3|0|8|16155|60752|bool|true
)WOTWR";
        },
    };
}
