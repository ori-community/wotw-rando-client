#pragma once

#include <Randomizer/seed/items/item.h>

#include <functional>

namespace randomizer::seed::items {
    class CallProcedure final : public BaseItem {
    public:
        int procedure;

        void grant() final;
        std::string to_string() override;
    };
} // namespace randomizer::seed::items
