#pragma once

#include <Randomizer/macros.h>
#include <Core/enums/game_areas.h>
#include <Core/save_meta/save_meta.h>
#include <Randomizer/timing/game_stats.h>

RANDOMIZER_C_DLLEXPORT void notify_pickup_collected(GameArea area, const char* location_name);