#pragma once

#include <Core/enums/game_areas.h>
#include <Core/save_meta/save_meta.h>
#include <Randomizer/macros.h>

namespace randomizer::timing {
    extern bool disable_ability_tracking;

    void notify_pickup_collected(GameArea area, const std::string& location_name);
}
