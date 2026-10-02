#include <Common/ext.h>
#include <Modloader/app/methods/Moon/uberSerializationWisp/PlayerUberStateAreaMapInformation.h>
#include <Modloader/app/types/PlayerUberStateGroup.h>
#include <Modloader/interception.h>
#include <Modloader/interception_macros.h>
#include <Randomizer/seed/seed.h>
#include <unordered_map>
#include <Core/uber_states/core_uber_states.h>
#include <Randomizer/map/fragments.h>


using namespace app::classes;

namespace {
    auto& pools_water_lowered_state = core::uber_states::state<"lumaPoolsStateGroup", "waterLowered">();

    std::unordered_map<std::pair<app::GameWorldAreaID__Enum, int>, core::api::uber_states::UberState<core::api::uber_states::UberStateType::SavePedestalUberState>, pair_hash> area_to_tp = {
        {std::make_pair(app::GameWorldAreaID__Enum::InkwaterMarsh,    2701), core::uber_states::state<"swampStateGroup", 10185>() },
        {std::make_pair(app::GameWorldAreaID__Enum::InkwaterMarsh,    4298), core::uber_states::state<"howlsDenGRoup", 61594>() },
        {std::make_pair(app::GameWorldAreaID__Enum::WaterMill,        5947), core::uber_states::state<"wellspringGroupDescriptor", 18181>() },
        {std::make_pair(app::GameWorldAreaID__Enum::MidnightBurrow,   4817), core::uber_states::state<"howlsOriginGroup", 42531>() },
        {std::make_pair(app::GameWorldAreaID__Enum::KwoloksHollow,    5414), core::uber_states::state<"kwolokGroupDescriptor", 26601>() },
        {std::make_pair(app::GameWorldAreaID__Enum::WellspringGlades, 5176), core::uber_states::state<"hubUberStateGroup", 42096>() },
        {std::make_pair(app::GameWorldAreaID__Enum::BaursReach,       5735), core::uber_states::state<"baursReachGroup", 54235>() },
        {std::make_pair(app::GameWorldAreaID__Enum::MouldwoodDepths,  5083), core::uber_states::state<"mouldwoodDepthsGroup", 38871>() },
        {std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland,   7197), core::uber_states::state<"_petrifiedForestGroup", 7071>() },
        {std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland,   7388), core::uber_states::state<"_petrifiedForestGroup", 1965>() },
        {std::make_pair(app::GameWorldAreaID__Enum::SilentWoodland,   6967), core::uber_states::state<"_petrifiedForestGroup", 10029>() },
        {std::make_pair(app::GameWorldAreaID__Enum::WindsweptWastes,  6092), core::uber_states::state<"windsweptWastesGroupDescriptor", 49994>() },
        {std::make_pair(app::GameWorldAreaID__Enum::WindsweptWastes,  6119), core::uber_states::state<"windsweptWastesGroupDescriptor", 41398>() },
        {std::make_pair(app::GameWorldAreaID__Enum::WindtornRuins,    5448), core::uber_states::state<"windtornRuinsGroup", 4928>() },
        {std::make_pair(app::GameWorldAreaID__Enum::LumaPools,        6073), core::uber_states::state<"lagoonStateGroup", 58183>() },
        {std::make_pair(app::GameWorldAreaID__Enum::LumaPools,        6148), core::uber_states::state<"lagoonStateGroup", 1370>() },
        {std::make_pair(app::GameWorldAreaID__Enum::WillowsEnd,       6124), core::uber_states::state<"willowsEndGroup", 41465>() },
        {std::make_pair(app::GameWorldAreaID__Enum::WillowsEnd,       6432), core::uber_states::state<"willowsEndGroup", 50867>() },
    };

    IL2CPP_INTERCEPT_WITH_ORDER(
        0,
        void,
        Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation,
        SetAreaState,
        app::PlayerUberStateAreaMapInformation* this_ptr,
        app::GameWorldAreaID__Enum area_id,
        int index,
        app::WorldMapAreaState__Enum state,
        app::Vector3 position
    ) {
        next::Moon::uberSerializationWisp::PlayerUberStateAreaMapInformation::SetAreaState(this_ptr, area_id, index, state, position);
        if (state != app::WorldMapAreaState__Enum::Visited) {
            return;
        }

        const auto it = area_to_tp.find(std::make_pair(area_id, index));
        if (it == area_to_tp.end()) {
            return;
        }

        if (it->second == core::uber_states::state<"lagoonStateGroup", 58183>() && !pools_water_lowered_state.get()) {
            // Don't grant TP if we haven't lowered the water, see below.
            return;
        }

        it->second.set(true);
    }

    [[maybe_unused]]
    auto on_luma_pools_water_drained = core::api::uber_states::on_uber_state_changed().register_handler(
        pools_water_lowered_state,
        [](auto) {
            if (pools_water_lowered_state.get() && randomizer::map::fragments::has_been_visited(app::GameWorldAreaID__Enum::LumaPools, 6073)) {
                // Give Luma Pools TP.
                core::uber_states::state<"lagoonStateGroup", 58183>().set(true);
            }
        }
    );
} // namespace
