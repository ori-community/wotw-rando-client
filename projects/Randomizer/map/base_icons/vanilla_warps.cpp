#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<std::tuple<MapIcon::ptr_t, MapIcon::ptr_t>, 18> icons;

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icons = {
            utils::create_warp_icon({-799, -4310}, [] {
                static core::api::uber_states::UberState teleporter_active(21786, 10185);
                static core::api::uber_states::UberState teleporter_built(21, 16825);

                if (!teleporter_built.get<bool>()) {
                    return utils::WarpIconState::Invisible;
                }

                return teleporter_active.get<bool>()
                    ? utils::WarpIconState::Active
                    : utils::WarpIconState::Inactive;
            }, "Inkwater Marsh"),
            utils::create_warp_icon({-328, -4536}, core::api::uber_states::UberState(11666, 61594), "Howl's Den"),
            utils::create_warp_icon({-150, -4238}, core::api::uber_states::UberState(937, 26601), "Kwolok's Hollow"),
            utils::create_warp_icon({-307, -4153}, [] {
                static core::api::uber_states::UberState teleporter_active(42178, 42096);
                static core::api::uber_states::UberState teleporter_built(21, 16825);

                if (teleporter_built.get<bool>() && teleporter_active.get<bool>()) {
                    return utils::WarpIconState::Active;
                }

                return utils::WarpIconState::Inactive;
            }, "Glades"),
            utils::create_warp_icon({-1308, -3675}, core::api::uber_states::UberState(53632, 18181), "Wellspring"),
            utils::create_warp_icon({-945, -4582}, core::api::uber_states::UberState(24922, 42531), "Midnight Burrows"),
            utils::create_warp_icon({611, -4162}, core::api::uber_states::UberState(58674, 7071), "Woods Entrance"),
            utils::create_warp_icon({1083, -4052}, core::api::uber_states::UberState(58674, 1965), "Woods Exit"),
            utils::create_warp_icon({-259, -3962}, core::api::uber_states::UberState(28895, 54235), "Baur's Reach"),
            utils::create_warp_icon({513, -4361}, core::api::uber_states::UberState(18793, 38871), "Mouldwood Depths"),
            utils::create_warp_icon({-1316, -4153}, core::api::uber_states::UberState(945, 58183), "Central Pools"),
            utils::create_warp_icon({-1656, -4171}, core::api::uber_states::UberState(945, 1370), "Pools Boss"),
            utils::create_warp_icon({1456, -3997}, core::api::uber_states::UberState(58674, 10029), "Feeding Grounds"),
            utils::create_warp_icon({1992, -3902}, core::api::uber_states::UberState(20120, 49994), "Central Wastes"),
            utils::create_warp_icon({2044, -3679}, core::api::uber_states::UberState(20120, 41398), "Outer Ruins"),
            utils::create_warp_icon({2130, -3984}, core::api::uber_states::UberState(10289, 4928), "Inner Ruins"),
            utils::create_warp_icon({422, -3864}, core::api::uber_states::UberState(16155, 41465), "Willow's End"),
            utils::create_warp_icon({576, -3610}, core::api::uber_states::UberState(16155, 50867), "Shriek"),
        };
    });
}
