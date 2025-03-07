#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator shrine_hints = {
        []() -> std::string { return "shrine_hints"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            if (!options.hints) {
                return {};
            }

            return {
                "MarshPastOpher.CombatShrine",
                "HowlsDen.CombatShrine",
                "WestGlades.CombatShrine",
                "WoodsMain.CombatShrine",
                "LowerDepths.CombatShrine"
            };
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.hints) {
                return std::nullopt;
            }

            return R"WOTWR(
19|0=1|4|17|44310|9902|0|8|9|16|int|+1
19|1=1|4|17|21786|18109|0|8|9|14|int|+1
19|2=1|4|17|24922|13993|0|8|9|15|int|+1
19|4=1|4|17|58674|29265|0|8|9|17|int|+1
19|3=1|4|17|18793|31937|0|8|9|18|int|+1
9|14|6|Complete the Marsh Combat Shrine to gain\n[ap_item_on_location(MarshPastOpher.CombatShrine)]
9|15|6|Complete the Howl's Den Combat Shrine to gain\n[ap_item_on_location(HowlsDen.CombatShrine)]
9|16|6|Complete the Glades Combat Shrine to gain\n[ap_item_on_location(WestGlades.CombatShrine)]
9|17|6|Complete the Woods Combat Shrine to gain\n[ap_item_on_location(WoodsMain.CombatShrine)]
9|18|6|Complete the Mouldwood Combat Shrine to gain\n[ap_item_on_location(LowerDepths.CombatShrine)]
)WOTWR";
        },
    };
}
