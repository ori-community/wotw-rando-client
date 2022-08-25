#pragma once

#include <macros.h>
#include <randomizer/pickups/pickup.h>
#include <uber_states/uber_state_interface.h>

#include <magic_enum.hpp>

#include <algorithm>
#include <numeric>
#include <memory>
#include <unordered_map>

namespace randomizer {
    enum class ZoneType {
        Marsh,
        Hollow,
        Glades,
        Wellspring,
        Pools,
        Burrows,
        Reach,
        Woods,
        Depths,
        Wastes,
        Ruins,
        Willow,
        Shop,
        Void
    };

    ZoneType get_zone(uber_states::UberStateCondition location);

    class PickupCollection {
    public:
        using conditions = std::unordered_map<uber_states::UberStateCondition, PickupList>;
        using states = std::unordered_map<uber_states::UberState, conditions>;
        using conditioned_pickup = std::optional<std::pair<uber_states::UberStateCondition, PickupList>>;

        conditioned_pickup get_eq_condition(uber_states::UberState state, double value);
        conditioned_pickup get_eq_condition(uber_states::UberState state);
        conditioned_pickup pickup_with_condition(uber_states::UberState state, double value);
        PickupList pickup(uber_states::UberStateCondition cond);
        PickupList pickup(uber_states::UberState state, double value);
        bool has_pickup(uber_states::UberState state, double value);
        bool collect(uber_states::UberState state, double value);

        void add(uber_states::UberStateCondition condition, std::shared_ptr<Pickup>&& pickup);
        void clear();

        int pickup_count(ZoneType zone);

    private:
        std::unordered_map<uber_states::UberStateCondition, PickupList> uber_state_equals_pickups;
        states uber_state_pickups;
    };
}