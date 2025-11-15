#pragma once

namespace core {
    enum class TextID {
        Empty = 0,
        EmptyName = 1,
        QuestReward = 3,

        // Lupo Maps
        LupoMarshIntroduction = 8010, // 8000 + (GameWorldAreaID * 10) + 0
        LupoMarshSalesPitch = 8011, // 8000 + (GameWorldAreaID * 10) + 1
        LupoMarshNoSale = 8012, // 8000 + (GameWorldAreaID * 10) + 2
        LupoMarshBroke = 8013, // 8000 + (GameWorldAreaID * 10) + 3
        LupoMarshThanks = 8014, // 8000 + (GameWorldAreaID * 10) + 4

        LupoHollowIntroduction = 8020, // 8000 + (GameWorldAreaID * 10) + 0
        LupoHollowSalesPitch = 8021, // 8000 + (GameWorldAreaID * 10) + 1
        LupoHollowNoSale = 8022, // 8000 + (GameWorldAreaID * 10) + 2
        LupoHollowBroke = 8023, // 8000 + (GameWorldAreaID * 10) + 3
        LupoHollowThanks = 8024, // 8000 + (GameWorldAreaID * 10) + 4

        LupoWellspringIntroduction = 8040, // 8000 + (GameWorldAreaID * 10) + 0
        LupoWellspringSalesPitch = 8041, // 8000 + (GameWorldAreaID * 10) + 1
        LupoWellspringNoSale = 8042, // 8000 + (GameWorldAreaID * 10) + 2
        LupoWellspringBroke = 8043, // 8000 + (GameWorldAreaID * 10) + 3
        LupoWellspringThanks = 8044, // 8000 + (GameWorldAreaID * 10) + 4

        LupoBurrowIntroduction = 8050, // 8000 + (GameWorldAreaID * 10) + 0
        LupoBurrowSalesPitch = 8051, // 8000 + (GameWorldAreaID * 10) + 1
        LupoBurrowNoSale = 8052, // 8000 + (GameWorldAreaID * 10) + 2
        LupoBurrowBroke = 8053, // 8000 + (GameWorldAreaID * 10) + 3
        LupoBurrowThanks = 8054, // 8000 + (GameWorldAreaID * 10) + 4

        LupoReachIntroduction = 8070, // 8000 + (GameWorldAreaID * 10) + 0
        LupoReachSalesPitch = 8071, // 8000 + (GameWorldAreaID * 10) + 1
        LupoReachNoSale = 8072, // 8000 + (GameWorldAreaID * 10) + 2
        LupoReachBroke = 8073, // 8000 + (GameWorldAreaID * 10) + 3
        LupoReachThanks = 8074, // 8000 + (GameWorldAreaID * 10) + 4

        LupoPoolsIntroduction = 8080, // 8000 + (GameWorldAreaID * 10) + 0
        LupoPoolsSalesPitch = 8081, // 8000 + (GameWorldAreaID * 10) + 1
        LupoPoolsNoSale = 8082, // 8000 + (GameWorldAreaID * 10) + 2
        LupoPoolsBroke = 8083, // 8000 + (GameWorldAreaID * 10) + 3
        LupoPoolsThanks = 8084, // 8000 + (GameWorldAreaID * 10) + 4

        LupoDepthsIntroduction = 8090, // 8000 + (GameWorldAreaID * 10) + 0
        LupoDepthsSalesPitch = 8091, // 8000 + (GameWorldAreaID * 10) + 1
        LupoDepthsNoSale = 8092, // 8000 + (GameWorldAreaID * 10) + 2
        LupoDepthsBroke = 8093, // 8000 + (GameWorldAreaID * 10) + 3
        LupoDepthsThanks = 8094, // 8000 + (GameWorldAreaID * 10) + 4

        LupoWastesIntroduction = 8110, // 8000 + (GameWorldAreaID * 10) + 0
        LupoWastesSalesPitch = 8111, // 8000 + (GameWorldAreaID * 10) + 1
        LupoWastesNoSale = 8112, // 8000 + (GameWorldAreaID * 10) + 2
        LupoWastesBroke = 8113, // 8000 + (GameWorldAreaID * 10) + 3
        LupoWastesThanks = 8114, // 8000 + (GameWorldAreaID * 10) + 4

        LupoWillowIntroduction = 8140, // 8000 + (GameWorldAreaID * 10) + 0
        LupoWillowSalesPitch = 8141, // 8000 + (GameWorldAreaID * 10) + 1
        LupoWillowNoSale = 8142, // 8000 + (GameWorldAreaID * 10) + 2
        LupoWillowBroke = 8143, // 8000 + (GameWorldAreaID * 10) + 3
        LupoWillowThanks = 8144, // 8000 + (GameWorldAreaID * 10) + 4

        QuestMissingKeyStep0 = 50,
        QuestHandToHandStep0 = 51,
        QuestTreeKeeperStep0 = 52,

        // Spirit Trial Texts (the ones that show up above the spirit trial start)
        TrialTextMarsh = 100,
        TrialTextHollow = 101,
        TrialTextWellspring = 102,
        TrialTextWoods = 103,
        TrialTextReach = 104,
        TrialTextDepths = 105,
        TrialTextPools = 106,
        TrialTextWastes = 107,

        MapMessage = 200,
        SideMapMessage = 201,
    };
} // namespace core
