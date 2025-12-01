#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 12> icons;

    MapIcon::visibility_effect_fn_t keystone_door_visibility_effect(const core::api::uber_states::UberState& state) {
        return [state](const MapFilter&) -> MapIcon::visibility_t {
            return !state.get<bool>() && show_interactables().get()
                ? MapIcon::Visibilities::visible
                : MapIcon::Visibilities::invisible;
        };
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icons = {
            // UpperReach.GrenadeKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorFour, "Keystone Door", app::Vector2{-168.34f, -3908.40f}, keystone_door_visibility_effect({28895, 49900}), MapIcon::ScaleMode::Linear),
            // LowerReach.TrialKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorFour, "Keystone Door", app::Vector2{86.00f, -4042.93f}, keystone_door_visibility_effect({28895, 4290}), MapIcon::ScaleMode::Linear),
            // MarshSpawn.RegenKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorTwo, "Keystone Door", app::Vector2{-584.07f, -4389.53f}, keystone_door_visibility_effect({21786, 42309}), MapIcon::ScaleMode::Linear),
            // HowlsDen.BoneBridgeKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorTwo, "Keystone Door", app::Vector2{-462.90f, -4487.00f}, keystone_door_visibility_effect({21786, 47445}), MapIcon::ScaleMode::Linear),
            // UpperPools.WaterDashKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorFour, "Keystone Door", app::Vector2{-1470.17f, -4070.76f}, keystone_door_visibility_effect({5377, 47621}), MapIcon::ScaleMode::Linear),
            // MarshPastOpher.EyestoneDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorTwo, "Keystone Door", app::Vector2{-311.30f, -4225.00f}, keystone_door_visibility_effect({937, 64003}), MapIcon::ScaleMode::Linear),
            // UpperDepths.EntryKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorTwo, "Keystone Door", app::Vector2{281.66f, -4407.40f}, keystone_door_visibility_effect({21786, 59990}), MapIcon::ScaleMode::Linear),
            // UpperDepths.CentralKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorTwo, "Keystone Door", app::Vector2{439.43f, -4480.55f}, keystone_door_visibility_effect({18793, 10758}), MapIcon::ScaleMode::Linear),
            // WoodsEntry.MudKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorTwo, "Keystone Door", app::Vector2{682.23f, -4176.23f}, keystone_door_visibility_effect({58674, 21500}), MapIcon::ScaleMode::Linear),
            // WoodsMain.WindRoomKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorFour, "Keystone Door", app::Vector2{948.52f, -4133.13f}, keystone_door_visibility_effect({18793, 41544}), MapIcon::ScaleMode::Linear),
            // MidnightBurrows.TabletKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorFour, "Keystone Door", app::Vector2{-831.82f, -4524.79f}, keystone_door_visibility_effect({18793, 3171}), MapIcon::ScaleMode::Linear),
            // UpperWastes.SandKSDoor
            std::make_shared<MapIcon>(MapIcon::Type::KeystoneDoorTwo, "Keystone Door", app::Vector2{1912.20f, -3790.95f}, keystone_door_visibility_effect({20120, 28786}), MapIcon::ScaleMode::Linear),
        };
    });
}
