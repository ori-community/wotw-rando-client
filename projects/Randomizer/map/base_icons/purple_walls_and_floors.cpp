#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 11 + 6> icons;

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
            // EastHollow.GladesApproachOrePurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{-105.57f, -4188.93f}, wall_visibility_effect({937, 54236}), MapIcon::ScaleMode::Linear),
            // Glades.GromsPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{-161.21f, -4153.89f}, wall_visibility_effect({42178, 5815}), MapIcon::ScaleMode::Linear),
            // EastPools.PurpleWallHCPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{-1285.69f, -4083.48f}, wall_visibility_effect({5377, 31145}), MapIcon::ScaleMode::Linear),
            // LowerWastes.PurpleWallEXPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{1543.66f, -3996.14f}, wall_visibility_effect({20120, 51985}), MapIcon::ScaleMode::Linear),
            // LowerWastes.LastStandShardPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{1826.43f, -3934.01f}, wall_visibility_effect({20120, 16172}), MapIcon::ScaleMode::Linear),
            // UpperPools.DrainRoomPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{-1350.80f, -4060.85f}, wall_visibility_effect({20120, 43231}), MapIcon::ScaleMode::Linear),
            // UpperWastes.LeverPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{2016.79f, -3790.23f}, wall_visibility_effect({20120, 33775}), MapIcon::ScaleMode::Linear),
            // UpperWastes.PurpleWallHCPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{2038.27f, -3840.74f}, wall_visibility_effect({20120, 55388}), MapIcon::ScaleMode::Linear),
            // EastPools.CentralRoomPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{-1479.52f, -4167.19f}, wall_visibility_effect({5377, 10782}), MapIcon::ScaleMode::Linear),
            // UpperWastes.PastKsDoorPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{1972.57f, -3804.00f}, wall_visibility_effect({20120, 1348}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.RedirectHeartPurpleWall
            std::make_shared<MapIcon>(MapIcon::Type::PurpleWall, "Breakable Wall", app::Vector2{637.30f, -3834.38f}, wall_visibility_effect({36153, 60795}), MapIcon::ScaleMode::Linear),


            // EastPools.LupoAreaPurpleFloor
            std::make_shared<MapIcon>(MapIcon::Type::PurpleFloor, "Breakable Floor", app::Vector2{-1415.27f, -4165.21f}, wall_visibility_effect({5377, 8451}), MapIcon::ScaleMode::Linear),
            // EastPools.UltraBashShardPurpleFloor
            std::make_shared<MapIcon>(MapIcon::Type::PurpleFloor, "Breakable Floor", app::Vector2{-1290.61f, -4200.00f}, wall_visibility_effect({5377, 4463}), MapIcon::ScaleMode::Linear),
            // EastPools.ArenaPurpleFloor
            std::make_shared<MapIcon>(MapIcon::Type::PurpleFloor, "Breakable Floor", app::Vector2{-1340.64f, -4144.72f}, wall_visibility_effect({5377, 22978}), MapIcon::ScaleMode::Linear),
            // EastPools.TokkBubblePurpleFloor
            std::make_shared<MapIcon>(MapIcon::Type::PurpleFloor, "Breakable Floor", app::Vector2{-1270.32f, -4192.00f}, wall_visibility_effect({5377, 26170}), MapIcon::ScaleMode::Linear),
            // WestHollow.AboveBashTreePurpleFloor
            std::make_shared<MapIcon>(MapIcon::Type::PurpleFloor, "Breakable Floor", app::Vector2{-6.00f, -4269.69f}, wall_visibility_effect({937, 45349}), MapIcon::ScaleMode::Linear),
            // UpperWastes.MinerExPurpleFloor
            std::make_shared<MapIcon>(MapIcon::Type::PurpleFloor, "Breakable Floor", app::Vector2{1993.33f, -3827.12f}, wall_visibility_effect({20120, 60960}), MapIcon::ScaleMode::Linear),
        };
    });
}
