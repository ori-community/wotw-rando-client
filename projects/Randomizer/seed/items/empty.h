#pragma once

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class Empty final : public BaseItem {
    public:
        void grant() final {}
    };
} // namespace randomizer::seed::items
