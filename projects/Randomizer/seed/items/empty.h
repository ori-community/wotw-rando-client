#pragma once

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class Empty final : public BaseItem {
    public:
        void grant() override {}
        std::string to_string() override { return std::format("Empty: stop = {}, skip = {}", stop.get(), skip.get()); }
    };
} // namespace randomizer::seed::items
