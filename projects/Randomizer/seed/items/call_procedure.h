#pragma once

#include <Randomizer/seed/items/item.h>

#include <functional>

namespace randomizer::seed::items {
    class CallProcedure final : public BaseItem {
    public:
        int procedure;

        void grant() override;
        std::string to_string() const override;
    };
} // namespace randomizer::seed::items
