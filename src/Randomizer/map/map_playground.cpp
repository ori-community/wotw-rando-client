/*
#include <Core/api/game/game.h>
#include <Core/api/uber_states/uber_state.h>
#include <Core/settings.h>
#include <Core/text/text_database.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/types/Input_Cmd.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>
#include <Randomizer/randomizer.h>

#include "Randomizer/input/rando_bindings.h"
#include "map_icons.h"

namespace {
    using namespace app::classes;
    using namespace randomizer::map::icons;
    using namespace randomizer::map::filter;

    map_icon_handle_t test_icon_1;
    map_icon_handle_t test_icon_2;
    map_icon_handle_t test_icon_3;

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        test_icon_1 = std::make_shared<MapIcon>();
        test_icon_1->type.set(MapIcon::Type::EnergyFragment);
        test_icon_1->world_position.set({-766, -4284});
    });

    [[maybe_unused]]
    auto on_binding1 = randomizer::input::single_input_bus().register_handler(Action::Binding1, EventTiming::After, [](auto, auto) {
        test_icon_2 = std::make_shared<MapIcon>();
        test_icon_2->type.set(MapIcon::Type::EnergyFragment);
        test_icon_2->world_position.set({-736, -4284});
        test_icon_2->label_text.set("Hallo Welt");
        test_icon_2->visibility_fn.set([] (const MapFilter filter) {
            return filter == MapFilter::InLogic;
        });
    });

    [[maybe_unused]]
    auto on_binding2 = randomizer::input::single_input_bus().register_handler(Action::Binding2, EventTiming::After, [](auto, auto) {
        if (test_icon_2 != nullptr) {
            test_icon_2->type.set(MapIcon::Type::BonusItem);
        }
    });

    [[maybe_unused]]
    auto on_binding3 = randomizer::input::single_input_bus().register_handler(Action::Binding3, EventTiming::After, [](auto, auto) {
        test_icon_3 = std::make_shared<MapIcon>();
        test_icon_3->type.set(MapIcon::Type::SavePedestal);
        test_icon_3->can_be_teleported_to.set(true);
        test_icon_3->label_text.set("Catch me if you can!");
        test_icon_3->visibility_fn.set([] (const MapFilter filter) {
            return filter == MapFilter::Warps;
        });
    });

    auto time = 0.f;
    [[maybe_unused]]
    auto on_fixed_update = core::api::game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [](auto, auto) {
        if (test_icon_3 != nullptr) {
            time += TimeUtility::get_fixedDeltaTime();

            constexpr app::Vector2 center{-736, -4284};
            constexpr float radius = 50.f;
            test_icon_3->world_position.set({
                center.x + std::sin(time) * radius,
                center.y + std::cos(time) * radius,
            });
        }
    });
} // namespace
*/
