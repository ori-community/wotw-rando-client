#include <Randomizer/randomizer.h>
#include <Randomizer/map/map_icons.h>
#include <Modloader/modloader.h>


namespace {
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    std::array<std::tuple<MapIcon::ptr_t, MapIcon::ptr_t>, 23> icons;

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        icons = {
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {-208.3, -4159.8}, 1),
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {-329.1, -4119.4}, 3),
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {-394.1, -4131.8}, 5),
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {-229.8, -4090.8}, 7),
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {-387.7, -4156.6}, 9),
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {-205.5, -4129.3}, 11),
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {-365.7, -4181.4}, 13),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {-856.3, -4052.6}, 15),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {-1292.4, -3949.0}, 16),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {-891.1, -3987.2}, 17),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {-1252.1, -3884.3}, 18),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {-813.1, -3968.0}, 19),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {-1179.1, -3727.0}, 20),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {-836.8, -3922.6}, 21),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {-1238.4, -3679.2}, 22),
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {-32.6, -3922.5}, 23),
            utils::create_entrance_icon(utils::EntranceIconSize::Small, {469.1, -4175.8}, 25),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {2111.8, -3604.9}, 27),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {2199.5, -3823.1}, 28),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {1062.8, -3645.1}, 29),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {493.7, -3945.6}, 30),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {515.5, -3740.5}, 31),
            utils::create_entrance_icon(utils::EntranceIconSize::Normal, {580.0, -3604.9}, 32),
        };
    });
}
