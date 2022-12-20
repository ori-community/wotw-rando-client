#pragma once

#include <Core/macros.h>

/**
 * This enum matches `ZoneType` in C#
 */
enum class GameArea {
    Marsh,
    Hollow,
    Glades,
    Wellspring,
    Pools,
    Burrows,
    Reach,
    Woods,
    Depths,
    Wastes,
    Ruins,
    Willow,
    Shop,
    Void
};

CORE_DLLEXPORT GameArea convert_to_game_area(app::GameWorldAreaID__Enum area);