#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 29 + 20> icons;

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
            // UpperPools.RightKwolokOneWayWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-1589.13f, -4141.08f}, wall_visibility_effect({5377, 3831}), MapIcon::ScaleMode::Linear),
            // UpperPools.BubbleSpamUnderwaterWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-1585.84f, -4072.42f}, wall_visibility_effect({5377, 65413}), MapIcon::ScaleMode::Linear),
            // EastPools.NextToLupoOreWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-1380.37f, -4162.27f}, wall_visibility_effect({5377, 63922}), MapIcon::ScaleMode::Linear),
            // EastPools.UltraBashShardWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-1283.65f, -4206.19f}, wall_visibility_effect({5377, 56302}), MapIcon::ScaleMode::Linear),
            // PoolsApproach.MarshBreakableWallWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-819.22f, -4184.47f}, wall_visibility_effect({945, 43451}), MapIcon::ScaleMode::Linear),
            // OuterWellspring.RightWallECWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-739.64f, -3987.75f}, wall_visibility_effect({53632, 3382}), MapIcon::ScaleMode::Linear),
            // InnerWellspring.AboveSpinArenaEXWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-1226.80f, -3738.14f}, wall_visibility_effect({37858, 21874}), MapIcon::ScaleMode::Linear),
            // LowerReach.BreakWallEXWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-199.48f, -4042.06f}, wall_visibility_effect({28895, 30794}), MapIcon::ScaleMode::Linear),
            // WoodsMain.BehindWallOreWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{983.44f, -4172.78f}, wall_visibility_effect({58674, 39950}), MapIcon::ScaleMode::Linear),
            // UpperDepths.SwimECWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{124.58f, -4424.03f}, wall_visibility_effect({18793, 21022}), MapIcon::ScaleMode::Linear),
            // LowerDepths.CombatShrineWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{248.78f, -4511.68f}, wall_visibility_effect({18793, 65202}), MapIcon::ScaleMode::Linear),
            // LowerDepths.CentralUpperWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{535.04f, -4505.11f}, wall_visibility_effect({18793, 64772}), MapIcon::ScaleMode::Linear),
            // MarshPastOpher.PoolsPathMiddleWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-736.73f, -4165.99f}, wall_visibility_effect({9593, 34704}), MapIcon::ScaleMode::Linear),
            // MarshPastOpher.SpiritTrialStartWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-573.51f, -4312.59f}, wall_visibility_effect({21786, 44253}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.PathToOpherWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-674.98f, -4307.18f}, wall_visibility_effect({21786, 23177}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.FightRoomEXWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-786.33f, -4451.45f}, wall_visibility_effect({9593, 47420}), MapIcon::ScaleMode::Linear),
            // HowlsDen.AboveBoneBridgeWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-447.81f, -4434.10f}, wall_visibility_effect({21786, 29636}), MapIcon::ScaleMode::Linear),
            // HowlsDen.UpperLoopEntranceWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-403.44f, -4450.41f}, wall_visibility_effect({21786, 876}), MapIcon::ScaleMode::Linear),
            // HowlsDen.SwordTreeLeftWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-351.03f, -4484.47f}, wall_visibility_effect({21786, 53932}), MapIcon::ScaleMode::Linear),
            // HowlsDen.SwordTreeRightWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-269.59f, -4477.27f}, wall_visibility_effect({21786, 9402}), MapIcon::ScaleMode::Linear),
            // HowlsDen.SwordTreeUpperLeftWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-245.13f, -4438.78f}, wall_visibility_effect({21786, 25147}), MapIcon::ScaleMode::Linear),
            // MidnightBurrows.DenConnectionWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-575.90f, -4544.8f}, wall_visibility_effect({24922, 2524}), MapIcon::ScaleMode::Linear),
            // UpperWastes.TeleporterOreWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{1924.14f, -3876.33f}, wall_visibility_effect({26019, 1274}), MapIcon::ScaleMode::Linear),
            // HowlsDen.UpperLoopHCWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{-338.00f, -4439.00f}, wall_visibility_effect({21786, 34008}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.ShortcutWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{476.16f, -3834.50f}, wall_visibility_effect({16155, 37558}), MapIcon::ScaleMode::Linear, -30.f),
            // WillowsEnd.LupoPortalWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{496.00f, -3856.73f}, wall_visibility_effect({16155, 3096}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.BoulderHeartWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{610.25f, -3914.16f}, wall_visibility_effect({16155, 21899}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.RedirectHeartWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{701.48f, -3801.981f}, wall_visibility_effect({18793, 5315}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.CheeseWheelWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallRight, "Breakable Wall", app::Vector2{308.85f, -3793.21f}, wall_visibility_effect({16155, 36353}), MapIcon::ScaleMode::Linear),

            // OuterWellspring.LifeHarvestEntryWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-974.01f, -4041.36f}, wall_visibility_effect({53632, 62781}), MapIcon::ScaleMode::Linear),
            // InnerWellspring.DrainAreaExitWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-1089.87f, -3951.63f}, wall_visibility_effect({53632, 9366}), MapIcon::ScaleMode::Linear),
            // LowerReach.EastFurnaceWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-74.44f, -3983.53f}, wall_visibility_effect({28895, 34098}), MapIcon::ScaleMode::Linear),
            // WestHollow.HiddenECWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-221.31f, -4301.87f}, wall_visibility_effect({937, 10140}), MapIcon::ScaleMode::Linear),
            // WindtornRuins.LowerExit
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{1930.13f, -4003.15f}, wall_visibility_effect({20120, 9095}), MapIcon::ScaleMode::Linear),
            // UpperDepths.LightcatcherSeedWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{473.51f, -4432.10f}, wall_visibility_effect({18793, 15855}), MapIcon::ScaleMode::Linear),
            // UpperDepths.OutsideMoraFightWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{556.82f, -4374.07f}, wall_visibility_effect({18793, 13349}), MapIcon::ScaleMode::Linear),
            // MarshPastOpher.SpiritTrialFinishWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-468.80f, -4322.70f}, wall_visibility_effect({9593, 23319}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.BelowBridgeWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-736.80f, -4333.24f}, wall_visibility_effect({21786, 33430}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.LeftTokkEXWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-749.05f, -4422.41f}, wall_visibility_effect({21786, 40424}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.RecklessShardWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-492.91f, -4409.03f}, wall_visibility_effect({21786, 35925}), MapIcon::ScaleMode::Linear),
            // HowlsDen.UpperLoopExitWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-405.72f, -4433.38f}, wall_visibility_effect({21786, 25291}), MapIcon::ScaleMode::Linear),
            // HowlsDen.SwordTreeUpperRightWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-296.10f, -4440.34f}, wall_visibility_effect({21786, 30928}), MapIcon::ScaleMode::Linear),
            // HowlsDen.AboveTPEXWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-382.45f, -4501.86f}, wall_visibility_effect({21786, 22570}), MapIcon::ScaleMode::Linear),
            // HowlsDen.HiddenRoomWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-496.95f, -4481.27f}, wall_visibility_effect({21786, 11343}), MapIcon::ScaleMode::Linear),
            // LowerWastes.MinerBridgeWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{1836.15f, -3973.32f}, wall_visibility_effect({7228, 4034}), MapIcon::ScaleMode::Linear),
            // PoolsApproach.KelpECWall
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-917.53f, -4167.90f}, wall_visibility_effect({945, 3487}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.AboveTeleporterPortal
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{454.31f, -3817.40f}, wall_visibility_effect({16155, 33738}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.TokkBarrier
            std::make_shared<MapIcon>(MapIcon::Type::OneWayWallLeft, "Breakable Wall", app::Vector2{-655.03f, -4417.32f}, wall_visibility_effect({21786, 35166}), MapIcon::ScaleMode::Linear),
        };
    });
}
