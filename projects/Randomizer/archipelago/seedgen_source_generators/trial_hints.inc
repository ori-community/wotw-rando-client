#pragma once

#include <Randomizer/archipelago/archipelago_seedgen.h>

namespace randomizer::archipelago::seedgen_source_generators {
    const ArchipelagoSeedGeneratorOptionSourceGenerator trial_hints = {
        []() -> std::string { return "trial_hints"; },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::unordered_set<std::string> {
            if (!options.trial_hints) {
                return {};
            }

            return {
                "MarshPastOpher.SpiritTrial",
                "WestHollow.SpiritTrial",
                "OuterWellspring.SpiritTrial",
                "WoodsMain.SpiritTrial",
                "LowerReach.SpiritTrial",
                "LowerDepths.SpiritTrial",
                "EastPools.SpiritTrial",
                "LowerWastes.SpiritTrial"
            };
        },
        [](const ArchipelagoSeedGeneratorOptions& options) -> std::optional<std::string> {
            if (!options.trial_hints) {
                return std::nullopt;
            }

            return R"WOTWR(
44964|45951=1|6|Complete the Marsh Spirit Trial to gain\n[ap_item_on_location(MarshPastOpher.SpiritTrial)]
3|100|4|29|100|Reward: [ap_item_on_location(MarshPastOpher.SpiritTrial)]
44964|25545=1|6|Complete the Hollow Spirit Trial to gain\n[ap_item_on_location(WestHollow.SpiritTrial)]
3|101|4|29|101|Reward: [ap_item_on_location(WestHollow.SpiritTrial)]
44964|11512=1|6|Complete the Wellspring Spirit Trial to gain\n[ap_item_on_location(OuterWellspring.SpiritTrial)]
3|102|4|29|102|Reward: [ap_item_on_location(OuterWellspring.SpiritTrial)]
44964|22703=1|6|Complete the Woods Spirit Trial to gain\n[ap_item_on_location(WoodsMain.SpiritTrial)]
3|103|4|29|103|Reward: [ap_item_on_location(WoodsMain.SpiritTrial)]
44964|23661=1|6|Complete the Reach Spirit Trial to gain\n[ap_item_on_location(LowerReach.SpiritTrial)]
3|104|4|29|104|Reward: [ap_item_on_location(LowerReach.SpiritTrial)]
44964|28552=1|6|Complete the Mouldwood Spirit Trial to gain\n[ap_item_on_location(LowerDepths.SpiritTrial)]
3|105|4|29|105|Reward: [ap_item_on_location(LowerDepths.SpiritTrial)]
44964|54686=1|6|Complete the Luma Spirit Trial to gain\n[ap_item_on_location(EastPools.SpiritTrial)]
3|106|4|29|106|Reward: [ap_item_on_location(EastPools.SpiritTrial)]
44964|30767=1|6|Complete the Wastes Spirit Trial to gain\n[ap_item_on_location(LowerWastes.SpiritTrial)]
3|107|4|29|107|Reward: [ap_item_on_location(LowerWastes.SpiritTrial)]
)WOTWR";
        },
    };
}
