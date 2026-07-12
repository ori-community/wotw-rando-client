#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator skip_cutscenes = {
        []() -> std::string { return "skip_cutscenes"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            return {};
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.no_cs) {
                return std::nullopt;
            }

            return R"WOTWR(
3|0|8|11666|4220|bool|true
3|0|8|58674|41644|bool|true
3|0|8|58674|37811|bool|true
3|0|8|5377|35023|bool|true
3|0|8|48248|3846|bool|true
3|0|8|945|9367|bool|true
3|0|8|48248|40451|bool|true
3|0|8|48248|37364|bool|true
3|0|8|20120|55196|bool|true
3|0|8|24922|45740|bool|true
3|0|8|37858|25031|bool|true
3|0|8|5377|21700|bool|true
3|0|4|19|14019|48794|1|8|14019|48794|int|1
3|0|4|19|937|34641|2|8|937|34641|int|2
3|0|8|10289|3621|bool|true
3|0|8|21786|51018|bool|true
3|0|8|28895|2108|bool|true
3|0|8|37858|23225|bool|true
3|0|8|16155|32922|bool|true
3|0|8|31136|3441|bool|true
3|0|8|7|20|bool|true
3|0|8|48248|5982|bool|true
3|0|8|48248|55122|bool|true
3|0|8|48248|46745|bool|true
3|0|8|48248|25267|int|2
3|0|8|48248|12799|int|3
3|0|8|48248|34756|bool|true
3|0|8|48248|6194|bool|true
3|0|8|48248|9394|bool|true
3|0|8|14019|57552|int|2
3|0|8|42178|50418|bool|true
3|0|8|48248|7646|bool|true
3|0|8|48248|45751|bool|true
3|0|8|48248|54806|bool|true
3|0|8|48248|46471|bool|true
3|0|8|48248|7321|bool|true
3|0|8|48248|30073|bool|true
3|0|8|14019|24683|int|4
3|0|8|48248|10337|int|2
3|0|8|48248|8985|bool|true
3|0|8|48248|56448|bool|true
3|0|8|48248|5186|bool|true
3|0|8|58674|58268|bool|true
3|0|8|3440|20131|bool|true
3|0|8|14019|16509|int|2
3|0|8|14019|30596|int|2
3|0|8|48248|7160|bool|true
3|0|8|48248|15833|bool|true
3|0|8|48248|52065|bool|true
3|0|8|48248|13320|bool|true
3|0|8|48248|5269|bool|true
3|0|8|14019|24683|int|5
3|0|4|17|14019|44578|0|8|14019|44578|int|1
46462|59806|8|937|6778|bool|true
24|14|8|18793|25789|bool|true
937|10071|8|9|0|int|2
!18793|63291|8|9|0|int|2
!28895|25522|8|9|0|int|2
!945|49747|8|9|0|int|2
9|0=2|4|17|937|10071|1|4|17|28895|25522|1|4|17|18793|63291|1|4|17|945|49747|1|8|10289|3804|bool|true
!10289|22102|8|58674|36832|bool|true
!10289|22102|8|58674|61616|int|6
)WOTWR";
        },
    };
}
