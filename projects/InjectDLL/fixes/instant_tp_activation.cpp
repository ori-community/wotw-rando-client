#include <constants.h>
#include <dll_main.h>
#include <csharp_bridge.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

namespace
{
    enum GameWorldAreaID__Enum : int32_t {
        GameWorldAreaID__Enum_None = 0,
        GameWorldAreaID__Enum_InkwaterMarsh = 1,
        GameWorldAreaID__Enum_KwoloksHollow = 2,
        GameWorldAreaID__Enum_WellspringGlades = 3,
        GameWorldAreaID__Enum_WaterMill = 4,
        GameWorldAreaID__Enum_MidnightBurrow = 5,
        GameWorldAreaID__Enum_SilentWoodland = 6,
        GameWorldAreaID__Enum_BaursReach = 7,
        GameWorldAreaID__Enum_LumaPools = 8,
        GameWorldAreaID__Enum_MouldwoodDepths = 9,
        GameWorldAreaID__Enum_WeepingRidge = 10,
        GameWorldAreaID__Enum_WindsweptWastes = 11,
        GameWorldAreaID__Enum_GorlekMines = 12,
        GameWorldAreaID__Enum_WindtornRuins = 13,
        GameWorldAreaID__Enum_WillowsEnd = 14,
        GameWorldAreaID__Enum_Riverlands = 15,
    };
    std::unordered_map<std::pair<app::GameWorldAreaID__Enum, int>, std::pair<int, int>, pair_hash> area_to_tp = {
        { std::make_pair(app::GameWorldAreaID__Enum_InkwaterMarsh, 2701), std::make_pair(-798, -4308) },    // Marsh
        { std::make_pair(app::GameWorldAreaID__Enum_InkwaterMarsh, 4298), std::make_pair(-328, -4534) },    // Howls Den
        { std::make_pair(app::GameWorldAreaID__Enum_WaterMill, 5947), std::make_pair(-1308, -3672) },       // Wellspring
        { std::make_pair(app::GameWorldAreaID__Enum_MidnightBurrow, 4817), std::make_pair(-944, -4580) },   // Burrows
        { std::make_pair(app::GameWorldAreaID__Enum_KwoloksHollow, 5414), std::make_pair(-150, -4236) },    // Hollow
        { std::make_pair(app::GameWorldAreaID__Enum_WellspringGlades, 5176), std::make_pair(-307, -4151) }, // Glades
        { std::make_pair(app::GameWorldAreaID__Enum_BaursReach, 5735), std::make_pair(-259, -3959) },       // Reach
        { std::make_pair(app::GameWorldAreaID__Enum_MouldwoodDepths, 5083), std::make_pair(513, -4359) },   // Depths
        { std::make_pair(app::GameWorldAreaID__Enum_SilentWoodland, 7197), std::make_pair(611, -4159) },    // West Woods
        { std::make_pair(app::GameWorldAreaID__Enum_SilentWoodland, 7388), std::make_pair(1082, -4050) },   // East Woods
        { std::make_pair(app::GameWorldAreaID__Enum_SilentWoodland, 6967), std::make_pair(1456, -3995) },   // West Wastes
        { std::make_pair(app::GameWorldAreaID__Enum_WindsweptWastes, 6092), std::make_pair(1992, -3900) },  // East Wastes
        { std::make_pair(app::GameWorldAreaID__Enum_WindsweptWastes, 6119), std::make_pair(2043, -3677) },  // Outer Ruins
        { std::make_pair(app::GameWorldAreaID__Enum_WindtornRuins, 5448), std::make_pair(2130, -3982) },    // Ruins
        //{ std::make_pair(app::GameWorldAreaID__Enum_LumaPools, 6073), std::make_pair(-1316, -4151) },       // East Pools
        { std::make_pair(app::GameWorldAreaID__Enum_LumaPools, 6148), std::make_pair(-1656, -4168) },       // West Pools
        { std::make_pair(app::GameWorldAreaID__Enum_WillowsEnd, 6124), std::make_pair(421, -3862) },        // Willow
    };

    IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateAreaMapInformation, void, SetAreaState,
        (app::PlayerUberStateAreaMapInformation* this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3* position)) {
        PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
        if (state != app::WorldMapAreaState__Enum_Visited)
            return;

        auto it = area_to_tp.find(std::make_pair(area_id, index));
        if (it == area_to_tp.end())
            return;

        csharp_bridge::on_map_tp_active(it->second.first, it->second.second);
    }
}
