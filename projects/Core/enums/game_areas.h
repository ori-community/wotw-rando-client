#pragma once

#include <Core/macros.h>
#include <Modloader/app/structs/GameWorldAreaID__Enum.h>
#include <nlohmann/json.hpp>

enum class GameArea {
    Inkwater,
    Hollow,
    Glades,
    Wellspring,
    Luma,
    Burrows,
    Reach,
    Woods,
    Depths,
    Wastes,
    Ruins,
    Willow,
    Shop,
    Void,
    TOTAL,
};

NLOHMANN_JSON_SERIALIZE_ENUM(
    GameArea,
    {
        { GameArea::Inkwater, "Inkwater" },
        { GameArea::Hollow, "Hollow" },
        { GameArea::Glades, "Glades" },
        { GameArea::Wellspring, "Wellspring" },
        { GameArea::Luma, "Luma" },
        { GameArea::Burrows, "Burrows" },
        { GameArea::Reach, "Reach" },
        { GameArea::Woods, "Woods" },
        { GameArea::Depths, "Depths" },
        { GameArea::Wastes, "Wastes" },
        { GameArea::Ruins, "Ruins" },
        { GameArea::Willow, "Willow" },
        { GameArea::Shop, "Shop" },
        { GameArea::Void, "Void" },
    }
);

CORE_DLLEXPORT GameArea convert_to_game_area(app::GameWorldAreaID__Enum area);