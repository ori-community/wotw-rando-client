#pragma once

#include <Core/enums/game_areas.h>
#include <Core/save_meta/save_meta.h>
#include <Randomizer/macros.h>

namespace randomizer::timing {
    RANDOMIZER_DLLEXPORT extern bool disable_ability_tracking;
}

RANDOMIZER_C_DLLEXPORT void notify_pickup_collected(GameArea area, const char* location_name);