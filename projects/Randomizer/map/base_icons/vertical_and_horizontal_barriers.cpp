#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 23 + 19> icons;

    MapIcon::visibility_effect_fn_t wall_visibility_effect(const core::api::uber_states::UberState& state) {
        return [state](const MapFilter&) -> MapIcon::visibility_t {
            return !state.get<bool>() && show_interactables().get()
                ? MapIcon::Visibilities::visible
                : MapIcon::Visibilities::invisible;
        };
    }

    MapIcon::visibility_effect_fn_t wall_visibility_effect(const core::api::uber_states::UberState& state, int value) {
        return [state, value](const MapFilter&) -> MapIcon::visibility_t {
            return state.get<int>() < value && show_interactables().get()
                ? MapIcon::Visibilities::visible
                : MapIcon::Visibilities::invisible;
        };
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icons = {
            // UpperPools.RightBubbleSpamRoomDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-1631.08f, -3999.65f}, wall_visibility_effect({5377, 6398}), MapIcon::ScaleMode::Linear),
            // UpperPools.DrainPuzzleEntranceDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-1394.21f, -4056.01f}, wall_visibility_effect({5377, 15402}), MapIcon::ScaleMode::Linear),
            // UpperPools.DrainPuzzleExitDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-1317.92f, -4076.12f}, wall_visibility_effect({5377, 29911}), MapIcon::ScaleMode::Linear),
            // EastPools.BehindEntryDoorDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-1236.84f, -4160.87f}, wall_visibility_effect({5377, 14488}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.LeverECDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-630.00f, -4416.08f}, wall_visibility_effect({21786, 50453}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.FightRoomDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-830.44f, -4449.56f}, wall_visibility_effect({21786, 35598}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.LifepactLedgeDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-925.96f, -4396.51f}, wall_visibility_effect({9593, 59418}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.FightRoomDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-508.83f, -4524.72f}, wall_visibility_effect({9593, 25130}, 3), MapIcon::ScaleMode::Linear),
            // MarshSpawn.BurrowsEntryDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-861.47f, -4489.63f}, wall_visibility_effect({24922, 59146}), MapIcon::ScaleMode::Linear),
            // MarshPastOpher.UpperBowAreaLeftDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-454.31f, -4194.12f}, wall_visibility_effect({21786, 50691}), MapIcon::ScaleMode::Linear),
            // MarshPastOpher.UpperBowAreaRightDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-401.21f, -4187.53f}, wall_visibility_effect({21786, 41817}), MapIcon::ScaleMode::Linear),
            // WestHollow.InFrontPurpleDoorDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-170.96f, -4234.85f}, wall_visibility_effect({937, 59850}), MapIcon::ScaleMode::Linear),
            // WestHollow.DashApproachDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-96.46f, -4420.66f}, wall_visibility_effect({937, 59920}), MapIcon::ScaleMode::Linear),
            // WestHollow.QuickshotShardDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-290.98f, -4324.42f}, wall_visibility_effect({937, 32165}), MapIcon::ScaleMode::Linear),
            // WestHollow.RockPuzzleDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-319.09f, -4274.01f}, wall_visibility_effect({937, 22716}), MapIcon::ScaleMode::Linear),
            // EastHollow.VoiceDoorPlatformDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-97.62f, -4220.52f}, wall_visibility_effect({937, 6778}), MapIcon::ScaleMode::Linear),
            // EastHollow.AboveDepthsDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{41.55f, -4300.00f}, wall_visibility_effect({937, 22419}), MapIcon::ScaleMode::Linear),
            // LowerReach.CentralDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-353.98f, -4007.03f}, wall_visibility_effect({28895, 62198}), MapIcon::ScaleMode::Linear),
            // LowerReach.TeleporterDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-237.51f, -3959.39f}, wall_visibility_effect({28895, 48757}), MapIcon::ScaleMode::Linear),
            // InnerWellspring.WaterSwitchEXDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-1214.00f, -3968.16f}, wall_visibility_effect({37858, 6338}), MapIcon::ScaleMode::Linear),
            // InnerWellspring.SpinPuzzleDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{-1197.57f, -3804.02f}, wall_visibility_effect({37858, 8487}, 5), MapIcon::ScaleMode::Linear),
            // UpperWastes.MissilePuzzleRightDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{2036.78f, -3817.48f}, wall_visibility_effect({20120, 12902}), MapIcon::ScaleMode::Linear),
            // WindtornRuins.FallenPillarDoor
            std::make_shared<MapIcon>(MapIcon::Type::VerticalDoor, "Barrier", app::Vector2{2075.10f, -4010.31f}, wall_visibility_effect({10289, 43103}), MapIcon::ScaleMode::Linear),

            // MarshSpawn.BurrowsEntryDoorH
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-902.33f, -4495.88f}, wall_visibility_effect({24922, 13349}), MapIcon::ScaleMode::Linear),
            // HowlsDen.LaserKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-422.10f, -4537.97f}, wall_visibility_effect({21786, 55881}), MapIcon::ScaleMode::Linear),
            // InnerWellspring.DrainAreaEntranceDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-1132.65f, -3967.69f}, wall_visibility_effect({37858, 31187}), MapIcon::ScaleMode::Linear),
            // InnerWellspring.ShortcutWheelDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-1227.78f, -3897.71f}, wall_visibility_effect({37858, 34433}), MapIcon::ScaleMode::Linear),
            // InnerWellspring.LaserOreDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-1042.55f, -3905.18f}, wall_visibility_effect({37858, 31104}), MapIcon::ScaleMode::Linear),
            // InnerWellspring.TopSecondRoomWheelDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-1168.16f, -3707.90f}, wall_visibility_effect({37858, 31962}), MapIcon::ScaleMode::Linear),
            // LowerReach.WindBottomEXDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-214.43f, -4047.05f}, wall_visibility_effect({28895, 59394}), MapIcon::ScaleMode::Linear),
            // LowerReach.ArenaAreaDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{77.53f, -3995.44f}, wall_visibility_effect({28895, 42209}), MapIcon::ScaleMode::Linear),
            // UpperDepths.EntryDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{150.83f, -4304.75f}, wall_visibility_effect({18793, 25789}), MapIcon::ScaleMode::Linear),
            // LowerDepths.DepthsShrineDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{236.26f, -4522.36f}, wall_visibility_effect({18793, 14503}), MapIcon::ScaleMode::Linear),
            // WindtornRuins.UpperRuinsDoorH
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{2138.49f, -3873.16f}, wall_visibility_effect({10289, 41277}), MapIcon::ScaleMode::Linear),
            // WindtornRuins.EscapeRevisitECDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{2053.36f, -4024.47f}, wall_visibility_effect({10289, 19890}, 3), MapIcon::ScaleMode::Linear),
            // WeepingRidge.BottomElevatorDoor
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{1138.73f, -3797.06f}, wall_visibility_effect({36153, 23584}), MapIcon::ScaleMode::Linear),
            // WestHollow.FarLeftRoomDoorH
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-338.55f, -4281.97f}, wall_visibility_effect({937, 57028}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.Log
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-720.58f, -4327.00f}, wall_visibility_effect({21786, 59922}), MapIcon::ScaleMode::Linear),
            // LowerReach.BearBridgeBroken
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{-436.50f, -4031.14f}, wall_visibility_effect({28895, 49329}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.SpinPortalsHeartUpperBarrier
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{504.64f, -3646.78f}, wall_visibility_effect({16155, 24290}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.SpinPortalsHeartLowerBarrier
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{510.95f, -3686.30f}, wall_visibility_effect({16155, 24290}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.GrappleWheelsHeartBarrier
            std::make_shared<MapIcon>(MapIcon::Type::HorizontalDoor, "Barrier", app::Vector2{427.91f, -3933.00f}, wall_visibility_effect({16155, 60752}), MapIcon::ScaleMode::Linear),
        };
    });
}
