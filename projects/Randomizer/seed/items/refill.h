#pragma once

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class Refill final : public BaseItem {
    public:
        enum class RefillType {
            Health,
            Energy,
            HealthAndEnergy
        };

        RefillType type;

        void grant() final;
        std::string to_string() override;
    };
} // namespace randomizer::seed::items
