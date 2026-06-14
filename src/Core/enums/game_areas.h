#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <nlohmann/json.hpp>

enum class GameArea {
    Marsh,
    Hollow,
    Glades,
    Wellspring,
    Woods,
    Reach,
    Depths,
    Pools,
    Wastes,
    Ruins,
    Willow,
    Burrows,
    Shop,
    Void,
    TOTAL,
};

NLOHMANN_JSON_SERIALIZE_ENUM(
    GameArea,
    {
        { GameArea::Marsh, "Inkwater" },
        { GameArea::Hollow, "Hollow" },
        { GameArea::Glades, "Glades" },
        { GameArea::Wellspring, "Wellspring" },
        { GameArea::Woods, "Woods" },
        { GameArea::Reach, "Reach" },
        { GameArea::Depths, "Depths" },
        { GameArea::Pools, "Luma" },
        { GameArea::Wastes, "Wastes" },
        { GameArea::Ruins, "Ruins" },
        { GameArea::Willow, "Willow" },
        { GameArea::Burrows, "Burrows" },
        { GameArea::Shop, "Shop" },
        { GameArea::Void, "Void" },
    }
);

CORE_DLLEXPORT GameArea convert_to_game_area(app::GameWorldAreaID__Enum area);
