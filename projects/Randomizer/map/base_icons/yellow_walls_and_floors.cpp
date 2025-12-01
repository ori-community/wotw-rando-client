#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 2> icons;

    MapIcon::visibility_effect_fn_t wall_visibility_effect(const core::api::uber_states::UberState& state) {
        return [state](const MapFilter&) -> MapIcon::visibility_t {
            return !state.get<bool>() && show_interactables().get()
                ? MapIcon::Visibilities::visible
                : MapIcon::Visibilities::invisible;
        };
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icons = {
            // WoodsMain.YellowWallEXYellowWall
            std::make_shared<MapIcon>(MapIcon::Type::YellowWall, "Yellow Wall", app::Vector2{1066.15f, -4098.06f}, wall_visibility_effect({58674, 29622}), MapIcon::ScaleMode::Linear),
            // WoodsMain.FourKeystoneRoomYellowWall
            std::make_shared<MapIcon>(MapIcon::Type::YellowWall, "Yellow Wall", app::Vector2{900.41f, -4144.29f}, wall_visibility_effect({58674, 54686}), MapIcon::ScaleMode::Linear),
        };
    });
}
