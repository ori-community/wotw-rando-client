#include <randomizer/pickups/pickup_collection.h>

namespace randomizer {

    ZoneType get_zone(uber_states::UberStateCondition location) {
        return ZoneType::Void;
    }

    PickupCollection::conditioned_pickup PickupCollection::get_eq_condition(uber_states::UberState state, double value) {
        uber_states::UberStateCondition cond{ state, uber_states::UberStateCondition::Operator::Equals, value };
        auto it = uber_state_equals_pickups.find(cond);
        if (it == uber_state_equals_pickups.end())
            return conditioned_pickup();

        return std::make_pair(cond, it->second);
    }

    PickupCollection::conditioned_pickup PickupCollection::get_eq_condition(uber_states::UberState state) {
        return get_eq_condition(state, state.get());
    }

    PickupCollection::conditioned_pickup PickupCollection::pickup_with_condition(uber_states::UberState state, double value) {
        auto conditions = uber_state_pickups[state];
        for (auto condition : conditions)
            if (condition.first.resolve(value))
                return condition;

        return get_eq_condition(state, value);
    }

    PickupList PickupCollection::pickup(uber_states::UberStateCondition cond) {
        if (cond.op != uber_states::UberStateCondition::Operator::Equals) {
            auto it_conditions = uber_state_pickups.find(cond.state);
            if (it_conditions == uber_state_pickups.end())
                return PickupList();

            auto it_pickups = it_conditions->second.find(cond);
            return it_pickups != it_conditions->second.end() ? it_pickups->second : PickupList();
        }

        auto it = uber_state_equals_pickups.find(cond);
        return it != uber_state_equals_pickups.end() ? it->second : PickupList();
    }

    PickupList PickupCollection::pickup(uber_states::UberState state, double value) {
        auto pickup = pickup_with_condition(state, value);
        return pickup.has_value() ? pickup.value().second : PickupList();
    }

    void PickupCollection::clear() {
        uber_state_equals_pickups.clear();
        uber_state_pickups.clear();
    }

    bool PickupCollection::has_pickup(uber_states::UberState state, double value) {
        auto pickup = pickup_with_condition(state, value);
        return pickup.has_value() && !pickup.value().second.empty();
    }

    bool PickupCollection::collect(uber_states::UberState state, double value) {
        auto collected = false;
        auto conditions = uber_state_pickups[state];
        for (auto condition : conditions)
            if (condition.first.resolve(state, value))
                collected |= condition.second.collect(condition.first);

        auto eq = get_eq_condition(state);
        if (eq.has_value())
            collected |= eq.value().second.collect(eq.value().first);

        return collected;
    }

    void PickupCollection::add(uber_states::UberStateCondition condition, std::shared_ptr<Pickup>&& pickup) {
        if (condition.op == uber_states::UberStateCondition::Operator::Equals)
            uber_state_equals_pickups[condition].add(std::move(pickup));
        else
            uber_state_pickups[condition.state][condition].add(std::move(pickup));
    }

    int PickupCollection::pickup_count(ZoneType zone) {
        auto count = std::accumulate(uber_state_pickups.begin(), uber_state_pickups.end(), 0, [zone](int sum, states::value_type const& value) {
            return sum + static_cast<int>(std::count_if(value.second.begin(), value.second.end(), [zone](conditions::value_type const& pickup) {
                return !pickup.second.empty() && get_zone(pickup.first) == zone;
            }));
        });
        
        count += static_cast<int>(std::count_if(uber_state_equals_pickups.begin(), uber_state_equals_pickups.end(), [zone](conditions::value_type const& pickup) {
            return !pickup.second.empty() && get_zone(pickup.first) == zone;
        }));

        return 0;
    }
} // namespace randomizer
