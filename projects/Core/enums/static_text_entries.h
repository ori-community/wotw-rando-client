#pragma once

namespace text_database {
    enum class StaticTextEntry {
        Empty,
        EmptyName,

        // Shops
        Locked,
        Undiscovered,
        UndiscoveredDescription,

        // Lupo
        LupoMarshIntroduction,
        LupoMarshSalesPitch,
        LupoMarshNoSale,
        LupoMarshBroke,
        LupoMarshThanks,

        LupoHollowIntroduction,
        LupoHollowSalesPitch,
        LupoHollowNoSale,
        LupoHollowBroke,
        LupoHollowThanks,

        LupoWellspringIntroduction,
        LupoWellspringSalesPitch,
        LupoWellspringNoSale,
        LupoWellspringBroke,
        LupoWellspringThanks,

        LupoBurrowIntroduction,
        LupoBurrowSalesPitch,
        LupoBurrowNoSale,
        LupoBurrowBroke,
        LupoBurrowThanks,

        LupoReachIntroduction,
        LupoReachSalesPitch,
        LupoReachNoSale,
        LupoReachBroke,
        LupoReachThanks,

        LupoPoolsIntroduction,
        LupoPoolsSalesPitch,
        LupoPoolsNoSale,
        LupoPoolsBroke,
        LupoPoolsThanks,

        LupoDepthsIntroduction,
        LupoDepthsSalesPitch,
        LupoDepthsNoSale,
        LupoDepthsBroke,
        LupoDepthsThanks,

        LupoWastesIntroduction,
        LupoWastesSalesPitch,
        LupoWastesNoSale,
        LupoWastesBroke,
        LupoWastesThanks,

        LupoWillowIntroduction,
        LupoWillowSalesPitch,
        LupoWillowNoSale,
        LupoWillowBroke,
        LupoWillowThanks,

        // Quest reward bullshitting
        QuestReward1,
        QuestReward2,
        QuestReward3,
        QuestReward4,
        QuestReward5,
        QuestReward6,
        QuestReward7,

        // Step 0 quests
        QuestMissingKeyStep0,
        QuestHandToHandStep0,
        QuestTreeKeeperStep0,

        TOTAL
    };
}

using static_text_entry = text_database::StaticTextEntry;
inline int operator*(static_text_entry entry) {
    return static_cast<int>(entry);
}
