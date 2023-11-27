#pragma once

#include <Randomizer/game/map/map.h>
#include <Randomizer/seed/items/item.h>

namespace randomizer::seed::items {
    class CreateIcon final : public BaseItem {
    public:
        int id;
        std::string label;
        app::WorldMapIconType__Enum type;
        game::map::FilterFlag flags;
        app::Vector2 position;
        bool can_teleport;

        void grant() final;
        std::string to_string() const override;
    };

    class DestroyIcon final : public BaseItem {
    public:
        int id;

        void grant() final;
        std::string to_string() const override;
    };

    void destroy_all_seed_icons();
} // namespace randomizer::seed::items
