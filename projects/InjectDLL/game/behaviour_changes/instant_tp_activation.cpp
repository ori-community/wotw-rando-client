#include <constants.h>
#include <macros.h>
#include <interop/csharp_bridge.h>

#include <Common/ext.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception.h>
#include <Il2CppModLoader/interception_macros.h>

#include <unordered_map>

namespace
{
    std::unordered_map<std::pair<app::GameWorldAreaID__Enum, int>, int, pair_hash> area_to_tp = {
        { std::make_pair(app::GameWorldAreaID__Enum_InkwaterMarsh, 2701), 16 },     // Marsh
        { std::make_pair(app::GameWorldAreaID__Enum_InkwaterMarsh, 4298), 1 },      // Howls Den
        { std::make_pair(app::GameWorldAreaID__Enum_WaterMill, 5947), 3 },          // Wellspring
        { std::make_pair(app::GameWorldAreaID__Enum_MidnightBurrow, 4817), 0 },     // Burrows
        { std::make_pair(app::GameWorldAreaID__Enum_KwoloksHollow, 5414), 5 },      // Hollow
        { std::make_pair(app::GameWorldAreaID__Enum_WellspringGlades, 5176), 17 },  // Glades
        { std::make_pair(app::GameWorldAreaID__Enum_BaursReach, 5735), 4 },         // Reach
        { std::make_pair(app::GameWorldAreaID__Enum_MouldwoodDepths, 5083), 6 },    // Depths
        { std::make_pair(app::GameWorldAreaID__Enum_SilentWoodland, 7197), 7 },     // West Woods
        { std::make_pair(app::GameWorldAreaID__Enum_SilentWoodland, 7388), 8 },     // East Woods
        { std::make_pair(app::GameWorldAreaID__Enum_SilentWoodland, 6967), 9 },     // West Wastes
        { std::make_pair(app::GameWorldAreaID__Enum_WindsweptWastes, 6092), 10 },   // East Wastes
        { std::make_pair(app::GameWorldAreaID__Enum_WindsweptWastes, 6119), 11 },   // Outer Ruins
        { std::make_pair(app::GameWorldAreaID__Enum_WindtornRuins, 5448), 14 },     // Ruins
        { std::make_pair(app::GameWorldAreaID__Enum_LumaPools, 6073), 2 },          // East Pools
        { std::make_pair(app::GameWorldAreaID__Enum_LumaPools, 6148), 13 },         // West Pools
        { std::make_pair(app::GameWorldAreaID__Enum_WillowsEnd, 6124), 12 },        // Willow
        { std::make_pair(app::GameWorldAreaID__Enum_WillowsEnd, 6432), 15 },        // Shriek
    };

    IL2CPP_INTERCEPT(Moon.uberSerializationWisp, PlayerUberStateAreaMapInformation, void, SetAreaState,
        (app::PlayerUberStateAreaMapInformation* this_ptr, app::GameWorldAreaID__Enum area_id, int index, app::WorldMapAreaState__Enum state, app::Vector3* position)) {
        PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
        if (state != app::WorldMapAreaState__Enum_Visited)
            return;

        auto it = area_to_tp.find(std::make_pair(area_id, index));
        if (it == area_to_tp.end())
            return;

        csharp_bridge::on_found_tp(it->second);
    }

    IL2CPP_BINDING(Moon.uberSerializationWisp, PlayerUberStateAreaMapInformation, app::WorldMapAreaState__Enum, GetAreaState,
        (app::PlayerUberStateAreaMapInformation* this_ptr, app::GameWorldAreaID__Enum area, int index));
}

INJECT_C_DLLEXPORT bool is_visited(app::GameWorldAreaID__Enum area, int index)
{
    auto player_group = il2cpp::get_class<app::PlayerUberStateGroup__Class>("", "PlayerUberStateGroup")->static_fields->Instance;
    if (!il2cpp::unity::is_valid(player_group))
        return false;

    auto ami = player_group->fields.PlayerUberState->fields.m_state->fields.AreaMapInfo;
    return PlayerUberStateAreaMapInformation::GetAreaState(ami, area, index) == app::WorldMapAreaState__Enum_Visited;
}
