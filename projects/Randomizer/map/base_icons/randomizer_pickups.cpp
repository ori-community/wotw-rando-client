#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>

namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::vector<MapIcon::ptr_t> icons;
    core::reactivity::ReactiveEffect::ptr_t map_icon_sets_update_effect;

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        map_icon_sets_update_effect = core::reactivity::watch_effect()
            .effect(randomizer::seedgen_service().map_icon_sets())
            .after([&] {
                icons.clear();

                const auto& map_icon_sets = randomizer::seedgen_service().map_icon_sets().get();

                if (!map_icon_sets.has_value()) {
                    return;
                }

                for (const auto& [map_icon_set_index, map_icon_set]: map_icon_sets->sets | std::views::enumerate) {
                    for (const auto& position : map_icon_set.positions) {
                        icons.push_back(
                            std::make_shared<MapIcon>(
                                map_icon_set.kind,
                                map_icon_set.label,
                                position,
                                [=](const MapFilter& filter) {
                                    if (filter != MapFilter::InLogic && filter != MapFilter::Collectibles) {
                                        return MapIcon::Visibilities::invisible;
                                    }

                                    for (auto& condition: map_icon_set.visible_if_any) {
                                        if (condition.resolve()) {
                                            if (filter == MapFilter::InLogic) {
                                                const auto& reachable_map_icon_indices = randomizer::seedgen_service().reachable_map_icon_set_indices().get();

                                                return reachable_map_icon_indices.contains(map_icon_set_index)
                                                    ? MapIcon::Visibilities::visible
                                                    : MapIcon::Visibilities::out_of_logic();
                                            }

                                            return MapIcon::Visibilities::visible;
                                        }
                                    }

                                    return MapIcon::Visibilities::invisible;
                                }
                            )
                        );
                    }
                }
            })
            .finalize();
    });
}
