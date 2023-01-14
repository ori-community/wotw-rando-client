#pragma once

#include <Randomizer/seed/items/item.h>

#include <functional>

namespace randomizer::seed::items {
    class CallProcedure final : public BaseItem {
    public:
        int procedure;

        void grant() final;
    };
} // namespace randomizer::seed::items
