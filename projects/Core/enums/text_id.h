#pragma once

namespace core {
    enum class TextID {
        Empty = 0,
        EmptyName = 1,
        QuestReward = 3,

        // Shops
        OpherSlot0_Normal_Name = 13000, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot0_Normal_Description = 13001, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot0_Locked_Name = 13002, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot0_Locked_Description = 13003, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot0_Hidden_Name = 13004, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot0_Hidden_Description = 13005, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot1_Normal_Name = 13010, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot1_Normal_Description = 13011, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot1_Locked_Name = 13012, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot1_Locked_Description = 13013, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot1_Hidden_Name = 13014, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot1_Hidden_Description = 13015, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot2_Normal_Name = 13020, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot2_Normal_Description = 13021, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot2_Locked_Name = 13022, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot2_Locked_Description = 13023, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot2_Hidden_Name = 13024, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot2_Hidden_Description = 13025, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot3_Normal_Name = 13030, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot3_Normal_Description = 13031, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot3_Locked_Name = 13032, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot3_Locked_Description = 13033, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot3_Hidden_Name = 13034, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot3_Hidden_Description = 13035, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot4_Normal_Name = 13040, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot4_Normal_Description = 13041, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot4_Locked_Name = 13042, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot4_Locked_Description = 13043, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot4_Hidden_Name = 13044, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot4_Hidden_Description = 13045, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot5_Normal_Name = 13050, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot5_Normal_Description = 13051, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot5_Locked_Name = 13052, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot5_Locked_Description = 13053, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot5_Hidden_Name = 13054, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot5_Hidden_Description = 13055, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot6_Normal_Name = 13060, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot6_Normal_Description = 13061, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot6_Locked_Name = 13062, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot6_Locked_Description = 13063, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot6_Hidden_Name = 13064, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot6_Hidden_Description = 13065, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot7_Normal_Name = 13070, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot7_Normal_Description = 13071, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot7_Locked_Name = 13072, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot7_Locked_Description = 13073, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot7_Hidden_Name = 13074, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot7_Hidden_Description = 13075, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot8_Normal_Name = 13080, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot8_Normal_Description = 13081, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot8_Locked_Name = 13082, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot8_Locked_Description = 13083, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot8_Hidden_Name = 13084, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot8_Hidden_Description = 13085, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot9_Normal_Name = 13090, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot9_Normal_Description = 13091, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot9_Locked_Name = 13092, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot9_Locked_Description = 13093, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot9_Hidden_Name = 13094, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot9_Hidden_Description = 13095, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot10_Normal_Name = 13100, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot10_Normal_Description = 13101, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot10_Locked_Name = 13102, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot10_Locked_Description = 13103, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot10_Hidden_Name = 13104, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot10_Hidden_Description = 13105, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        OpherSlot11_Normal_Name = 13110, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        OpherSlot11_Normal_Description = 13111, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        OpherSlot11_Locked_Name = 13112, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        OpherSlot11_Locked_Description = 13113, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        OpherSlot11_Hidden_Name = 13114, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        OpherSlot11_Hidden_Description = 13115, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot0_Normal_Name = 14000, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot0_Normal_Description = 14001, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot0_Locked_Name = 14002, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot0_Locked_Description = 14003, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot0_Hidden_Name = 14004, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot0_Hidden_Description = 14005, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot1_Normal_Name = 14010, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot1_Normal_Description = 14011, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot1_Locked_Name = 14012, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot1_Locked_Description = 14013, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot1_Hidden_Name = 14014, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot1_Hidden_Description = 14015, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot2_Normal_Name = 14020, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot2_Normal_Description = 14021, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot2_Locked_Name = 14022, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot2_Locked_Description = 14023, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot2_Hidden_Name = 14024, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot2_Hidden_Description = 14025, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot3_Normal_Name = 14030, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot3_Normal_Description = 14031, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot3_Locked_Name = 14032, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot3_Locked_Description = 14033, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot3_Hidden_Name = 14034, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot3_Hidden_Description = 14035, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot4_Normal_Name = 14040, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot4_Normal_Description = 14041, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot4_Locked_Name = 14042, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot4_Locked_Description = 14043, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot4_Hidden_Name = 14044, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot4_Hidden_Description = 14045, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot5_Normal_Name = 14050, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot5_Normal_Description = 14051, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot5_Locked_Name = 14052, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot5_Locked_Description = 14053, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot5_Hidden_Name = 14054, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot5_Hidden_Description = 14055, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot6_Normal_Name = 14060, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot6_Normal_Description = 14061, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot6_Locked_Name = 14062, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot6_Locked_Description = 14063, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot6_Hidden_Name = 14064, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot6_Hidden_Description = 14065, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        TwillenSlot7_Normal_Name = 14070, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        TwillenSlot7_Normal_Description = 14071, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        TwillenSlot7_Locked_Name = 14072, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        TwillenSlot7_Locked_Description = 14073, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        TwillenSlot7_Hidden_Name = 14074, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        TwillenSlot7_Hidden_Description = 14075, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        LupoSlot0_Normal_Name = 10000, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        LupoSlot0_Normal_Description = 10001, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        LupoSlot0_Locked_Name = 10002, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        LupoSlot0_Locked_Description = 10003, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        LupoSlot0_Hidden_Name = 10004, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        LupoSlot0_Hidden_Description = 10005, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        LupoSlot1_Normal_Name = 10010, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        LupoSlot1_Normal_Description = 10011, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        LupoSlot1_Locked_Name = 10012, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        LupoSlot1_Locked_Description = 10013, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        LupoSlot1_Hidden_Name = 10014, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        LupoSlot1_Hidden_Description = 10015, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        LupoSlot2_Normal_Name = 10020, // 10000 + (ShopType * 1000) + (Slot index * 10) + 0
        LupoSlot2_Normal_Description = 10021, // 10000 + (ShopType * 1000) + (Slot index * 10) + 1
        LupoSlot2_Locked_Name = 10022, // 10000 + (ShopType * 1000) + (Slot index * 10) + 2
        LupoSlot2_Locked_Description = 10023, // 10000 + (ShopType * 1000) + (Slot index * 10) + 3
        LupoSlot2_Hidden_Name = 10024, // 10000 + (ShopType * 1000) + (Slot index * 10) + 4
        LupoSlot2_Hidden_Description = 10025, // 10000 + (ShopType * 1000) + (Slot index * 10) + 5

        GromSlot1_Normal_Name = 11000, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        GromSlot1_Normal_Description = 11001, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        GromSlot1_Locked_Name = 11002, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        GromSlot1_Locked_Description = 11003, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        GromSlot1_Hidden_Name = 11004, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        GromSlot1_Hidden_Description = 11005, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        GromSlot2_Normal_Name = 11010, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        GromSlot2_Normal_Description = 11011, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        GromSlot2_Locked_Name = 11012, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        GromSlot2_Locked_Description = 11013, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        GromSlot2_Hidden_Name = 11014, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        GromSlot2_Hidden_Description = 11015, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        GromSlot3_Normal_Name = 11020, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        GromSlot3_Normal_Description = 11021, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        GromSlot3_Locked_Name = 11022, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        GromSlot3_Locked_Description = 11023, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        GromSlot3_Hidden_Name = 11024, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        GromSlot3_Hidden_Description = 11025, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        GromSlot4_Normal_Name = 11030, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        GromSlot4_Normal_Description = 11031, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        GromSlot4_Locked_Name = 11032, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        GromSlot4_Locked_Description = 11033, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        GromSlot4_Hidden_Name = 11034, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        GromSlot4_Hidden_Description = 11035, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        GromSlot5_Normal_Name = 11040, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        GromSlot5_Normal_Description = 11041, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        GromSlot5_Locked_Name = 11042, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        GromSlot5_Locked_Description = 11043, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        GromSlot5_Hidden_Name = 11044, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        GromSlot5_Hidden_Description = 11045, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        GromSlot6_Normal_Name = 11050, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        GromSlot6_Normal_Description = 11051, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        GromSlot6_Locked_Name = 11052, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        GromSlot6_Locked_Description = 11053, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        GromSlot6_Hidden_Name = 11054, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        GromSlot6_Hidden_Description = 11055, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        GromSlot0_Normal_Name = 11060, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        GromSlot0_Normal_Description = 11061, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        GromSlot0_Locked_Name = 11062, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        GromSlot0_Locked_Description = 11063, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        GromSlot0_Hidden_Name = 11064, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        GromSlot0_Hidden_Description = 11065, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        TuleySlot0_Normal_Name = 12000, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        TuleySlot0_Normal_Description = 12001, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        TuleySlot0_Locked_Name = 12002, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        TuleySlot0_Locked_Description = 12003, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        TuleySlot0_Hidden_Name = 12004, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        TuleySlot0_Hidden_Description = 12005, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        TuleySlot1_Normal_Name = 12010, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        TuleySlot1_Normal_Description = 12011, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        TuleySlot1_Locked_Name = 12012, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        TuleySlot1_Locked_Description = 12013, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        TuleySlot1_Hidden_Name = 12014, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        TuleySlot1_Hidden_Description = 12015, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        TuleySlot2_Normal_Name = 12020, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        TuleySlot2_Normal_Description = 12021, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        TuleySlot2_Locked_Name = 12022, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        TuleySlot2_Locked_Description = 12023, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        TuleySlot2_Hidden_Name = 12024, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        TuleySlot2_Hidden_Description = 12025, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        TuleySlot3_Normal_Name = 12030, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        TuleySlot3_Normal_Description = 12031, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        TuleySlot3_Locked_Name = 12032, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        TuleySlot3_Locked_Description = 12033, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        TuleySlot3_Hidden_Name = 12034, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        TuleySlot3_Hidden_Description = 12035, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        TuleySlot4_Normal_Name = 12040, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        TuleySlot4_Normal_Description = 12041, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        TuleySlot4_Locked_Name = 12042, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        TuleySlot4_Locked_Description = 12043, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        TuleySlot4_Hidden_Name = 12044, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        TuleySlot4_Hidden_Description = 12045, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

        TuleySlot5_Normal_Name = 12050, // 11000 + (ShopType * 1000) + (Slot index * 10) + 0
        TuleySlot5_Normal_Description = 12051, // 11000 + (ShopType * 1000) + (Slot index * 10) + 1
        TuleySlot5_Locked_Name = 12052, // 11000 + (ShopType * 1000) + (Slot index * 10) + 2
        TuleySlot5_Locked_Description = 12053, // 11000 + (ShopType * 1000) + (Slot index * 10) + 3
        TuleySlot5_Hidden_Name = 12054, // 11000 + (ShopType * 1000) + (Slot index * 10) + 4
        TuleySlot5_Hidden_Description = 12055, // 11000 + (ShopType * 1000) + (Slot index * 10) + 5

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

using text_id = core::TextID;
