#include <Core/uber_states/core_uber_states.h>
#include <Modloader/modloader.h>
#include <Randomizer/map/map_icons.h>
#include <Randomizer/randomizer.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 2> icons;

    template<typename BOOLEAN_UBER_STATE_T> requires core::api::uber_states::ReadableUberState<bool, BOOLEAN_UBER_STATE_T>
    MapIcon::visibility_effect_fn_t wall_visibility_effect(BOOLEAN_UBER_STATE_T& state) {
        return [&state](const MapFilter&) -> MapIcon::visibility_t {
            return !state.get() && show_interactables().get()
                ? MapIcon::Visibilities::visible
                : MapIcon::Visibilities::invisible;
        };
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().on<modloader::events::GameReady>([](auto) {
        icons = {
            // WoodsMain.YellowWallEXYellowWall
            std::make_shared<MapIcon>(MapIcon::Type::YellowWall, "Yellow Wall", app::Vector2{1066.15f, -4098.06f}, wall_visibility_effect(core::uber_states::state<58674, 29622>()), MapIcon::ScaleMode::Linear),
            // WoodsMain.FourKeystoneRoomYellowWall
            std::make_shared<MapIcon>(MapIcon::Type::YellowWall, "Yellow Wall", app::Vector2{900.41f, -4144.29f}, wall_visibility_effect(core::uber_states::state<58674, 54686>()), MapIcon::ScaleMode::Linear),
        };
    });
}
