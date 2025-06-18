#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator glades_done = {
        []() -> std::string { return "glades_done"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.glades_done) {
                return std::nullopt;
            }

            return R"WOTWR(
// Glades Done
3|0|8|14019|44578|int|2
3|0|8|14019|26394|int|2
3|0|8|42178|33011|byte|3
3|0|8|42178|64583|byte|3
3|0|8|42178|38393|byte|3
3|0|8|42178|47651|byte|3
3|0|8|42178|16254|byte|3
3|0|8|42178|40006|byte|3
3|0|8|17|51230|bool|true
3|0|8|17|23607|bool|true
3|0|8|17|40448|bool|true
3|0|8|17|18751|bool|true
3|0|8|17|16586|bool|true
3|0|8|21|51230|bool|true
3|0|8|21|23607|bool|true
3|0|8|21|40448|bool|true
3|0|8|21|18751|bool|true
3|0|8|21|16586|bool|true
3|0|4|19|14019|33776|1|8|14019|33776|int|1
3|0|8|6|300|bool|true
)WOTWR";
        },
    };
}
