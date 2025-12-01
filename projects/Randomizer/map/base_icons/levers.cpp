#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 22> icons;

    MapIcon::visibility_effect_fn_t lever_visibility_effect(const core::api::uber_states::UberState& state) {
        return [state](const MapFilter&) -> MapIcon::visibility_t {
            return !state.get<bool>() && show_interactables().get()
                ? MapIcon::Visibilities::visible
                : MapIcon::Visibilities::invisible;
        };
    }

    MapIcon::visibility_effect_fn_t lever_visibility_effect(const core::api::uber_states::UberState& state, int value) {
        return [state, value](const MapFilter&) -> MapIcon::visibility_t {
            return state.get<int>() == value && show_interactables().get()
                ? MapIcon::Visibilities::visible
                : MapIcon::Visibilities::invisible;
        };
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icons = {
            // UpperPools RightBubbleSpamRoomLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-1556.88f, -3979.03f}, lever_visibility_effect({5377, 6398}), MapIcon::ScaleMode::Linear),
            // EastPools LeverRoomLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-1226.78f,-4106.47f}, lever_visibility_effect({5377, 14488}), MapIcon::ScaleMode::Linear),
            // OuterWellspring LifeHarvestEntryLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-1045.24f,-4078.18f}, lever_visibility_effect({26019, 23382}), MapIcon::ScaleMode::Linear),
            // InnerWellspring BelowDrainLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-1117.76f,-3877.37f}, lever_visibility_effect({37858, 31187}), MapIcon::ScaleMode::Linear),
            // InnerWellspring ShortcutLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-1264.12f,-3906.45f}, lever_visibility_effect({37858,34433}), MapIcon::ScaleMode::Linear),
            // InnerWellspring SpinPuzzleLever1
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-1128.94f,-3818.37f}, lever_visibility_effect({37858, 36070}, 0), MapIcon::ScaleMode::Linear),
            // InnerWellspring SpinPuzzleLever2
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-1128.94f,-3818.37f}, lever_visibility_effect({37858, 36070}, 1), MapIcon::ScaleMode::Linear),
            // InnerWellspring SpinPuzzleLever3
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-1161.77f,-3815.72f}, lever_visibility_effect({37858, 36070}, 2), MapIcon::ScaleMode::Linear),
            // LowerReach AboveEntryLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-392.37f,-3975.24f}, lever_visibility_effect({28895, 62198}), MapIcon::ScaleMode::Linear),
            // MidnightBurrows LeverRoomLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-681.11f,-4616.88f}, lever_visibility_effect({24922, 16603}), MapIcon::ScaleMode::Linear),
            // HowlsDen TeleporterLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-400.58f,-4549.77f}, lever_visibility_effect({21786, 55881}), MapIcon::ScaleMode::Linear),
            // MarshSpawn CaveEntranceLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-584.78f,-4370.61f}, lever_visibility_effect({21786, 50453}), MapIcon::ScaleMode::Linear),
            // MarshPastOpher BowAreaLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-308.66f,-4211.15f}, lever_visibility_effect({21786, 50432}), MapIcon::ScaleMode::Linear),
            // EastHollow AboveBashLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-17.03f, -4265.35f}, lever_visibility_effect({937, 22419}), MapIcon::ScaleMode::Linear),
            // WestHollow InFrontPurpleDoorLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-166.30f,-4212.26f}, lever_visibility_effect({937, 42245}, 0), MapIcon::ScaleMode::Linear),
            // WestHollow FarLeftRoomUpperLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-393.86f,-4267.03f}, lever_visibility_effect({937, 42245}, 1), MapIcon::ScaleMode::Linear),
            // WestHollow FarLeftRoomLowerLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-399.11f,-4292.54f}, lever_visibility_effect({937, 57028}), MapIcon::ScaleMode::Linear),
            // WestHollow DashApproachLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{-99.75f,-4439.03f}, lever_visibility_effect({937, 59920}), MapIcon::ScaleMode::Linear),
            // DepthsShrineLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{249.19f,-4531.24f}, lever_visibility_effect({18793, 14503}), MapIcon::ScaleMode::Linear),
            // LowerWastes LeverAreaLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{1868.59f,-3931.08f}, lever_visibility_effect({20120, 48009}), MapIcon::ScaleMode::Linear),
            // UpperWastes MissilePuzzleMiddleLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{2021.90f,-3789.81f}, lever_visibility_effect({20120, 12902}), MapIcon::ScaleMode::Linear),
            // WindtornRuins UpperRuinsDoorLever
            std::make_shared<MapIcon>(MapIcon::Type::Lever, "Lever", app::Vector2{2191.75f,-3868.96f}, lever_visibility_effect({10289, 41277}), MapIcon::ScaleMode::Linear),
        };
    });
}
