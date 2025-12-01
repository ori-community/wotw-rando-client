#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<MapIcon::ptr_t, 8> icons;

    MapIcon::visibility_effect_fn_t heart_visibility_effect(const core::api::uber_states::UberState& state) {
        return [state](const MapFilter&) -> MapIcon::visibility_t {
            return !state.get<bool>() && show_interactables().get()
                ? MapIcon::Visibilities::visible
                : MapIcon::Visibilities::invisible;
        };
    }

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icons = {
            // WillowsEnd.BoulderHeart
            std::make_shared<MapIcon>(MapIcon::Type::CreepHeart, "Willow Heart", app::Vector2{573.64f, -3882.84f}, heart_visibility_effect({16155, 41488}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.BurrowHeart
            std::make_shared<MapIcon>(MapIcon::Type::CreepHeart, "Willow Heart", app::Vector2{724.46f, -3633.37f}, heart_visibility_effect({16155, 3588}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.GlideHeart
            std::make_shared<MapIcon>(MapIcon::Type::CreepHeart, "Willow Heart", app::Vector2{290.10f, -3790.22f}, heart_visibility_effect({16155, 42976}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.GrappleWheelsHeart
            std::make_shared<MapIcon>(MapIcon::Type::CreepHeart, "Willow Heart", app::Vector2{423.16f, -3923.23f}, heart_visibility_effect({16155, 60752}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.MinibossHeart
            std::make_shared<MapIcon>(MapIcon::Type::CreepHeart, "Willow Heart", app::Vector2{398.44f, -3760.63f}, heart_visibility_effect({16155, 28478}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.RedirectHeart
            std::make_shared<MapIcon>(MapIcon::Type::CreepHeart, "Willow Heart", app::Vector2{650.40f, -3832.92f}, heart_visibility_effect({16155, 65277}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.SpinLasersHeart
            std::make_shared<MapIcon>(MapIcon::Type::CreepHeart, "Willow Heart", app::Vector2{394.46f, -3811.60f}, heart_visibility_effect({16155, 54940}), MapIcon::ScaleMode::Linear),
            // WillowsEnd.SpinPortalsHeart
            std::make_shared<MapIcon>(MapIcon::Type::CreepHeart, "Willow Heart", app::Vector2{524.82f, -3630.91f}, heart_visibility_effect({16155, 24290}), MapIcon::ScaleMode::Linear),
        };
    });
}
