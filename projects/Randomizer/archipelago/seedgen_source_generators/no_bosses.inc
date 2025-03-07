#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_bosses = {
        []() -> std::string { return "no_bosses"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.skip_boss) {
                return std::nullopt;
            }

            return R"WOTWR(
// Skip Bosses
945|58403=3|8|945|58403|int|6
945|58403=3|4|8|-1958|-4067|mute
18793|26713=2|8|18793|26713|int|4
18793|26713=5|8|18793|26713|int|7
16155|47278=1|8|16155|47278|byte|2
16155|47278=1|4|12|999
16155|47278=1|4|13|999
16155|47278=3|8|16155|47278|byte|0
16155|47278=3|8|16155|54148|bool|false
16155|47278=3|8|16155|27024|bool|false
16155|47278=3|8|16155|44311|bool|false
16155|47278=3|8|16155|37648|bool|false
16155|47278=3|8|16155|38867|bool|false
16155|47278=3|8|16155|49408|bool|false
16155|47278=3|8|16155|49744|bool|false
16155|47278=3|8|16155|21083|bool|false
16155|47278=3|8|16155|45630|bool|false
16155|47278=3|8|16155|5826|bool|false
16155|47278=3|8|16155|3670|bool|false
16155|47278=3|8|16155|63705|bool|false
16155|47278=3|8|34543|11226|bool|true
16155|47278=3|4|0|553.947|-3609.157
16155|47278=3|4|16|WarpCredits
)WOTWR";
        },
    };
}
