#pragma once

#include <Core/enums/actions.h>

#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class Input final : public BaseItem {
    public:
        Action action;

        void grant() final;
    };
} // namespace randomizer::seed::items
