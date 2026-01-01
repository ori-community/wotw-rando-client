#pragma once

#include <Core/property.h>

namespace randomizer::map::filter {
    enum class MapFilter {
        InLogic,
        Collectibles,
        Quests,
        Players,
        Spoiler,
    };

    core::Property<MapFilter>& current_map_filter();
    core::Property<bool>& show_interactables();
    bool quests_ui_should_be_visible();
}
