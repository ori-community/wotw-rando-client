#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 5> icons;

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
            // LowerReach.MeltIceEXWall
            std::make_shared<MapIcon>(MapIcon::Type::IceWall, "Ice", app::Vector2{-332.48f, -4033.75f}, wall_visibility_effect({28895, 17510}), MapIcon::ScaleMode::Linear),
            // LowerReach.SnowballWall
            std::make_shared<MapIcon>(MapIcon::Type::IceWall, "Ice", app::Vector2{-128.94f, -3983.67f}, wall_visibility_effect({28895, 20731}), MapIcon::ScaleMode::Linear, 45.f),
            // LowerReach.TeleporterWall
            std::make_shared<MapIcon>(MapIcon::Type::IceWall, "Ice", app::Vector2{-288.84f, -3961.02f}, wall_visibility_effect({28895, 8934}), MapIcon::ScaleMode::Linear),
            // UpperReach.TreeRoomWall
            std::make_shared<MapIcon>(MapIcon::Type::IceWall, "Ice", app::Vector2{-138.69f, -3929.32f}, wall_visibility_effect({28895, 7616}), MapIcon::ScaleMode::Linear),
            // UpperReach.TreeRoomFloor
            std::make_shared<MapIcon>(MapIcon::Type::IceFloor, "Ice", app::Vector2{-149.95f, -3915.99f}, wall_visibility_effect({28895, 38120}), MapIcon::ScaleMode::Linear),
        };
    });
}
