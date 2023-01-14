#include <Randomizer/macros.h>
#include <constants.h>

#include <Common/ext.h>

#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/types/PlayerUberStateGroup.h>
#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

#include <unordered_map>

using namespace app::classes;

namespace {
    // NOLINTBEGIN(readability-magic-numbers)
    std::unordered_map<std::pair<app::GameWorldAreaID__Enum, int>, int, pair_hash> area_to_tp = {
        { std::make_pair(app::GameWorldAreaID__Enum::InkwaterMarsh, 2701), 16 }, // Marsh
        { std::make_pair(app::GameWorldAreaID__Enum::InkwaterMarsh, 4298), 1 }, // Howls Den
        { std::make_pair(app::GameWorldAreaID__Enum::WaterMill, 5947), 3 }, // Wellspring
        { std::make_pair(app::GameWorldAreaID__Enum::MidnightBurrow, 4817), 0 }, // Burrows
        { std::make_pair(app::GameWorldAreaID__Enum::KwoloksHollow, 5414), 5 }, // Hollow
        { std::make_pair(app::GameWorldAreaID__Enum::WellspringGlades, 5176), 17 }, // Glades
        { std::make_pair(app::GameWorldAreaID__Enum::BaursReach, 5735), 4 }, // Reach
        { std::make_pair(app::GameWorldAreaID__Enum::MouldwoodDepths, 5083), 6 }, // Depths
        { std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland, 7197), 7 }, // West Woods
        { std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland, 7388), 8 }, // East Woods
        { std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland, 6967), 9 }, // West Wastes
        { std::make_pair(app::GameWorldAreaID__Enum::WindsweptWastes, 6092), 10 }, // East Wastes
        { std::make_pair(app::GameWorldAreaID__Enum::WindsweptWastes, 6119), 11 }, // Outer Ruins
        { std::make_pair(app::GameWorldAreaID__Enum::WindtornRuins, 5448), 14 }, // Ruins
        { std::make_pair(app::GameWorldAreaID__Enum::LumaPools, 6073), 2 }, // East Pools
        { std::make_pair(app::GameWorldAreaID__Enum::LumaPools, 6148), 13 }, // West Pools
        { std::make_pair(app::GameWorldAreaID__Enum::WillowsEnd, 6124), 12 }, // Willow
        { std::make_pair(app::GameWorldAreaID__Enum::WillowsEnd, 6432), 15 }, // Shriek
    };
    // NOLINTEND(readability-magic-numbers)

    IL2CPP_INTERCEPT(Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation, void, SetAreaState, (app::PlayerUberStateAreaMapInformation * this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3 position)) {
        next::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
        if (state != app::WorldMapAreaState__Enum::Visited) {
            return;
        }

        auto it = area_to_tp.find(std::make_pair(area_id, index));
        if (it == area_to_tp.end()) {
            return;
        }

        // TODO: Implement this.
        // if (type == TeleporterType.EastPools && !UberGet.Bool(5377, 63173))
        //     return;
        //
        // GrantOnNextUpdate.Add(type);
    }
} // namespace
