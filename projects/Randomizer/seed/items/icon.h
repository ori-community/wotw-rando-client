#pragma once

#include <Randomizer/game/map/map.h>
#include <Randomizer/seed/items/item.h>

#include <vector>

namespace randomizer::seed::items {
    class CreateIcon final : public BaseItem {
    public:
        int id;
        app::WorldMapIconType__Enum type;
        game::map::FilterFlag flags;
        app::Vector2 position;
        bool can_teleport;

        void grant() final;
    };

    class DestroyIcon final : public BaseItem {
    public:
        int id;

        void grant() final;
    };
} // namespace randomizer::seed::items
