#pragma once

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/game_areas.h>

#include <Modloader/app/structs/Vector2.h>

#include <optional>

namespace randomizer::location_data {
    enum class LocationType {
        SpiritLight = 0,
        Shard = 1,
        Life = 2,
        Energy = 3,
        Ore = 4,
        ShardSlot = 5,
        Keystone = 6,
        Eyestone = 7,
        Quest = 8,
        Ability = 9,
        Shop = 10,
        Wisp = 11,
        Seed = 12,
        MapShop = 13,
        Unknown = 15
    };

    class Location {
    public:
        std::string name;
        GameArea area;
        LocationType type;
        core::api::uber_states::UberStateCondition condition;
        std::optional<app::Vector2> position;
        std::optional<app::Vector2> map_position;
    };
} // namespace randomizer::location_data
