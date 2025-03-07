#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_quests = {
        []() -> std::string { return "no_quests"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.no_quests) {
                return std::nullopt;
            }

            return R"WOTWR(
// No Quests
3|0|8|48248|51645|int|3
3|0|8|14019|15983|int|3
3|0|8|48248|18458|int|4
3|0|8|14019|50597|int|4
3|0|8|14019|20667|int|3
3|0|8|14019|59708|int|3
3|0|8|14019|7470|bool|true
3|0|8|14019|53103|bool|true
3|0|8|14019|58342|bool|true
3|0|8|23987|14832|bool|true
3|0|4|19|14019|27804|2|8|14019|27804|int|2
3|0|8|14019|33776|int|3
3|0|8|14019|44578|int|2
3|0|8|14019|26394|int|2
3|0|8|937|34641|int|4
3|0|8|42178|40006|byte|3
3|0|8|58674|14313|bool|true
21|51230|8|42178|36609|bool|true
3|0|8|14019|61011|int|5
21|51230|8|14019|27804|int|4
)WOTWR";
        },
    };
}
