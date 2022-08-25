#pragma once

#include <uber_states/uber_state_interface.h>

#include <memory>
#include <vector>

namespace randomizer {
    class Pickup {
    public:
        Pickup() {};
        virtual ~Pickup() {};
        virtual void grant() = 0;
    private:
    };

    class PickupList {
    public:
        void grant();
        bool collect(uber_states::UberStateCondition condition);

        void add(std::shared_ptr<Pickup>&& p);
        bool empty() const;

        std::string display_name() const;
    private:
        std::vector<std::shared_ptr<Pickup>> pickups;
    };
}
