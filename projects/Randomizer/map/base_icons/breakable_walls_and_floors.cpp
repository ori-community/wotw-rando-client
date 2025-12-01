#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 8 + 4> icons;

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
            // EastHollow.AboveBashFloor
            std::make_shared<MapIcon>(MapIcon::Type::StompableFloor, "Breakable Floor", app::Vector2{-1.94f, -4233.09f}, wall_visibility_effect({937, 40225}), MapIcon::ScaleMode::Linear),
            // MarshPastOpher.PoolsPathFloor
            std::make_shared<MapIcon>(MapIcon::Type::StompableFloor, "Breakable Floor", app::Vector2{-715.79f, -4183.53f}, wall_visibility_effect({9593, 17659}), MapIcon::ScaleMode::Linear),
            // GladesTown.TwillenFloor
            std::make_shared<MapIcon>(MapIcon::Type::StompableFloor, "Breakable Floor", app::Vector2{-438.08f, -4155.57f}, wall_visibility_effect({44310, 55192}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.MantisLureFloor
            std::make_shared<MapIcon>(MapIcon::Type::StompableFloor, "Breakable Floor", app::Vector2{-414.44f, -4369.12f}, wall_visibility_effect({21786, 61900}), MapIcon::ScaleMode::Linear),
            // HowlsDen.BoneBridge
            std::make_shared<MapIcon>(MapIcon::Type::StompableFloor, "Breakable Floor", app::Vector2{-416.88f, -4488.71f}, wall_visibility_effect({21786, 808}), MapIcon::ScaleMode::Linear),
            // HowlsDen.ShrineFloor
            std::make_shared<MapIcon>(MapIcon::Type::StompableFloor, "Breakable Floor", app::Vector2{-375.53f, -4554.87f}, wall_visibility_effect({21786, 6994}), MapIcon::ScaleMode::Linear),
            // EastPools.BelowEntryLeverBubble
            std::make_shared<MapIcon>(MapIcon::Type::StompableFloor, "Breakable Floor", app::Vector2{-1217.10f, -4160.64f}, wall_visibility_effect({5377, 64337}), MapIcon::ScaleMode::Linear),
            // LowerReach.MortarTPFloor
            std::make_shared<MapIcon>(MapIcon::Type::StompableFloor, "Breakable Floor", app::Vector2{-334.43f, -3994.51f}, wall_visibility_effect({28895, 8664}), MapIcon::ScaleMode::Linear),

            // EastHollow.SilentSwimWall
            std::make_shared<MapIcon>(MapIcon::Type::BreakableWall, "Breakable Wall", app::Vector2{342.50f, -4232.40f}, wall_visibility_effect({58674, 11400}), MapIcon::ScaleMode::Linear, 40.f),
            // PoolsApproach.UnderwaterWallBroken
            std::make_shared<MapIcon>(MapIcon::Type::BreakableWall, "Breakable Wall", app::Vector2{-893.78f, -4194.63f}, wall_visibility_effect({945, 55795}), MapIcon::ScaleMode::Linear, -25.f),
            // PoolsApproach.WheelWallLeft
            std::make_shared<MapIcon>(MapIcon::Type::BreakableWall, "Breakable Wall", app::Vector2{-1004.40f, -4240.14f}, wall_visibility_effect({945, 28631}), MapIcon::ScaleMode::Linear),
            // PoolsApproach.WheelWallRight
            std::make_shared<MapIcon>(MapIcon::Type::BreakableWall, "Breakable Wall", app::Vector2{-962.67f, -4239.92f}, wall_visibility_effect({945, 39004}), MapIcon::ScaleMode::Linear),
        };
    });
}
