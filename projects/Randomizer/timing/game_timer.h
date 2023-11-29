#pragma once

#include <Core/enums/game_areas.h>

namespace randomizer::timing {
    extern bool disable_ability_tracking;

    void notify_pickup_collected(GameArea area, const std::string& location_name);
}
