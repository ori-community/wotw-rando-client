#pragma once

namespace text_database
{
    enum class StaticTextEntries
    {
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

        TOTAL
    };
}

using static_text_entries = text_database::StaticTextEntries;
inline int operator *(static_text_entries entry) { return static_cast<int>(entry); }
