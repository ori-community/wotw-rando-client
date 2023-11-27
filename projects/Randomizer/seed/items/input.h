#pragma once

#include <Core/enums/actions.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class Input final : public BaseItem {
    public:
        Action action;

        void grant() final;
        std::string to_string() const override;
    };
} // namespace randomizer::seed::items
