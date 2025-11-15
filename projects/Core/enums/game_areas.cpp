#include <Core/enums/game_areas.h>

GameArea convert_to_game_area(app::GameWorldAreaID__Enum area) {
    switch (area) {
        case app::GameWorldAreaID__Enum::None:
        case app::GameWorldAreaID__Enum::Riverlands: // Sadge
        case app::GameWorldAreaID__Enum::GorlekMines: // Double sadge
            return GameArea::Void;
        case app::GameWorldAreaID__Enum::InkwaterMarsh:
            return GameArea::Marsh;
        case app::GameWorldAreaID__Enum::KwoloksHollow:
            return GameArea::Hollow;
        case app::GameWorldAreaID__Enum::WellspringGlades:
            return GameArea::Glades;
        case app::GameWorldAreaID__Enum::WaterMill:
            return GameArea::Wellspring;
        case app::GameWorldAreaID__Enum::MidnightBurrow:
            return GameArea::Burrows;
        case app::GameWorldAreaID__Enum::SilentWoodland:
        case app::GameWorldAreaID__Enum::WeepingRidge:
            return GameArea::Woods;
        case app::GameWorldAreaID__Enum::BaursReach:
            return GameArea::Reach;
        case app::GameWorldAreaID__Enum::LumaPools:
            return GameArea::Pools;
        case app::GameWorldAreaID__Enum::MouldwoodDepths:
            return GameArea::Depths;
        case app::GameWorldAreaID__Enum::WindsweptWastes:
            return GameArea::Wastes;
        case app::GameWorldAreaID__Enum::WindtornRuins:
            return GameArea::Ruins;
        case app::GameWorldAreaID__Enum::WillowsEnd:
            return GameArea::Willow;
    }

    return GameArea::Void;
}