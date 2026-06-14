#pragma once

#include <Core/api/uber_states/uber_state.h>

enum class TeleporterType {
    Burrows = 0,
    HowlsDen = 1,
    EastPools = 2,
    Wellspring = 3,
    Reach = 4,
    Hollow = 5,
    Depths = 6,
    WestWoods = 7,
    EastWoods = 8,
    FeedingGrounds = 9,
    Wastes = 10,
    OuterRuins = 11,
    WillowsEnd = 12,
    WestPools = 13,
    InnerRuins = 14,
    Shriek = 15,
    Marsh = 16,
    Glades = 17,
};

CORE_DLLEXPORT std::unordered_map<TeleporterType, core::api::uber_states::UberState> const& teleporter_map();
CORE_DLLEXPORT core::api::uber_states::UberState tp_type_to_state(TeleporterType type);
