#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator open_mode = {
        []() -> std::string { return "open_mode"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.open_mode) {
                return std::nullopt;
            }

            return R"WOTWR(
// Open Mode
3|0|8|6|401|bool|true
3|0|8|21786|30656|bool|true
3|0|8|21786|40322|bool|true
3|0|8|21786|25095|bool|true
3|0|8|21786|53932|bool|true
3|0|8|21786|23177|bool|true
3|0|8|21786|35166|bool|true
3|0|8|21786|59922|bool|true
3|0|8|24922|13349|bool|true
3|0|8|24922|2524|bool|true
3|0|8|937|64003|bool|true
3|0|8|937|59850|bool|true
3|0|8|937|6778|bool|true
3|0|8|937|22419|bool|true
3|0|8|42178|5815|bool|true
3|0|8|37858|23644|bool|true
3|0|8|37858|9487|bool|true
3|0|8|37858|31962|bool|true
3|0|8|18793|25789|bool|true
3|0|8|28895|62198|bool|true
3|0|8|28895|48757|bool|true
3|0|8|28895|20731|bool|true
3|0|8|28895|37287|bool|true
3|0|8|28895|42209|bool|true
3|0|8|20120|12902|bool|true
3|0|8|10289|41277|bool|true
3|0|8|10289|43103|bool|true
3|0|8|36153|23584|bool|true
3|0|8|5377|14488|bool|true
3|0|8|5377|10782|bool|true
3|0|8|5377|29911|bool|true
3|0|8|5377|15402|bool|true
)WOTWR";
        },
    };
}
