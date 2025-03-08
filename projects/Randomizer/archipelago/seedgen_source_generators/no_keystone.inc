#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator no_keystone = {
        []() -> std::string { return "no_keystone"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.no_ks) {
                return std::nullopt;
            }

            return R"WOTWR(
// No Keystone doors
3|0|8|20120|28786|bool|true
3|0|8|21786|42309|bool|true
3|0|8|21786|47445|bool|true
3|0|8|21786|59990|bool|true
3|0|8|18793|10758|bool|true
3|0|8|5377|47621|bool|true
3|0|8|28895|4290|bool|true
3|0|8|28895|49900|bool|true
3|0|8|18793|3171|bool|true
3|0|8|58674|21500|bool|true
3|0|8|18793|41544|bool|true
3|0|8|937|1038|byte|3
3|0|8|937|64003|bool|true
)WOTWR";
        },
    };
}
