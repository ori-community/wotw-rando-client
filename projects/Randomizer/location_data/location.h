#pragma once

#include <Core/api/uber_states/uber_state_condition.h>
#include <Core/enums/game_areas.h>

#include <Modloader/app/structs/Vector2.h>

#include <optional>

namespace randomizer::location_data {
    enum class LocationType {
        SpiritLight = 0,
        Shard = 1,
        HealthFragment = 2,
        EnergyFragment = 3,
        GorlekOre = 4,
        ShardSlot = 5,
        Keystone = 6,
        Eyestone = 7,
        QuestItem = 8,
        Skill = 9,
        Shop = 10,
        Wisp = 11,
        Seed = 12,
        Lupo = 13,
        RaceStart = 14,
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
