#include <Core/uber_states/core_uber_states.h>
#include <Modloader/modloader.h>
#include <Randomizer/map/map_icons.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/uber_states/randomizer_uber_states.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<std::tuple<MapIcon::ptr_t, MapIcon::ptr_t>, 18> icons;

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icons = {
            utils::create_warp_icon({-799, -4310}, [] {
                static auto& teleporter_active = core::uber_states::state<"swampStateGroup", "savePedestalSwampIntroTop">();
                static auto& teleporter_built = randomizer::uber_states::state<"gladesProjects", "spiritWellBuilt">();

                if (!teleporter_built.get()) {
                    return utils::WarpIconState::Invisible;
                }

                return teleporter_active.get()
                    ? utils::WarpIconState::Active
                    : utils::WarpIconState::Inactive;
            }, "Inkwater Marsh"),
            utils::create_warp_icon({-328, -4536}, core::uber_states::state<"howlsDenGRoup", "savePedestal">(), "Howl's Den"),
            utils::create_warp_icon({-150, -4238}, core::uber_states::state<"kwolokGroupDescriptor", 26601>(), "Kwolok's Hollow"),
            utils::create_warp_icon({-307, -4153}, [] {
                static auto& teleporter_active = core::uber_states::state<"hubUberStateGroup", "savePedestal">();
                static auto& teleporter_built = randomizer::uber_states::state<"gladesProjects", "spiritWellBuilt">();

                if (teleporter_built.get() && teleporter_active.get()) {
                    return utils::WarpIconState::Active;
                }

                return utils::WarpIconState::Inactive;
            }, "Glades"),
            utils::create_warp_icon({-1308, -3675}, core::uber_states::state<"wellspringGroupDescriptor", 18181>(), "Wellspring"),
            utils::create_warp_icon({-945, -4582}, core::uber_states::state<"howlsOriginGroup", 42531>(), "Midnight Burrows"),
            utils::create_warp_icon({611, -4162}, core::uber_states::state<"_petrifiedForestGroup", 7071>(), "Woods Entrance"),
            utils::create_warp_icon({1083, -4052}, core::uber_states::state<"_petrifiedForestGroup", 1965>(), "Woods Exit"),
            utils::create_warp_icon({-259, -3962}, core::uber_states::state<"baursReachGroup", 54235>(), "Baur's Reach"),
            utils::create_warp_icon({513, -4361}, core::uber_states::state<"mouldwoodDepthsGroup", 38871>(), "Mouldwood Depths"),
            utils::create_warp_icon({-1316, -4153}, core::uber_states::state<"lagoonStateGroup", 58183>(), "Central Pools"),
            utils::create_warp_icon({-1656, -4171}, core::uber_states::state<"lagoonStateGroup", 1370>(), "Pools Boss"),
            utils::create_warp_icon({1456, -3997}, core::uber_states::state<"_petrifiedForestGroup", 10029>(), "Feeding Grounds"),
            utils::create_warp_icon({1992, -3902}, core::uber_states::state<"windsweptWastesGroupDescriptor", 49994>(), "Central Wastes"),
            utils::create_warp_icon({2044, -3679}, core::uber_states::state<"windsweptWastesGroupDescriptor", 41398>(), "Outer Ruins"),
            utils::create_warp_icon({2130, -3984}, core::uber_states::state<"windtornRuinsGroup", 4928>(), "Inner Ruins"),
            utils::create_warp_icon({422, -3864}, core::uber_states::state<"willowsEndGroup", 41465>(), "Willow's End"),
            utils::create_warp_icon({554, -3609}, core::uber_states::state<"willowsEndGroup", 50867>(), "Shriek"),
        };
    });
}
