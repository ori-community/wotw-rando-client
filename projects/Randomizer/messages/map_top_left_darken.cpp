#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/screen_position.h>
#include <Modloader/app/methods/GameMapUI.h>
#include <Modloader/app/methods/QuestIconsUI.h>
#include <Modloader/app/methods/QuestsUI.h>
#include <Modloader/app/types/AreaMapUI.h>
#include <Modloader/app/types/QuestIconsUI.h>
#include <Modloader/interception_macros.h>
#include <Modloader/app/methods/ScalePositionForAspectRatio.h>
#include <Modloader/app/types/ScalePositionForAspectRatio.h>
#include <Randomizer/randomizer.h>

#include "Randomizer/map/map_filter.h"

using namespace app::classes;

namespace {
    std::unique_ptr<core::api::graphics::Sprite> map_side_background;
    core::reactivity::ReactiveEffect::ptr_t visibility_effect;
    core::api::uber_states::UberState map_side_background_state(UberStateGroup::RandoState, 600);

    [[maybe_unused]]
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        // We use Anchor::BottomLeft here because we are flipping the sprite.
        map_side_background = std::make_unique<core::api::graphics::Sprite>(core::api::graphics::Sprite::Anchor::BottomLeft);
        il2cpp::unity::set_object_name(map_side_background->get_game_object(), "map_side_background");

        map_side_background->layer(Layer::UI);
        map_side_background->local_scale({12, -16, 8});

        auto top_left = get(core::api::screen_position::ScreenPosition::TopLeft, false);
        top_left.z = -1.0f;
        map_side_background->local_position(top_left);

        map_side_background->texture(core::api::graphics::textures::get_texture_from_identifier("file:textures/gradient_corner_bottom_left.png"));

        const auto scale_position_component = il2cpp::unity::add_component<app::ScalePositionForAspectRatio>(
            map_side_background->get_game_object(), types::ScalePositionForAspectRatio::get_class()
        );
        ScalePositionForAspectRatio::ctor(scale_position_component);
        map_side_background->enabled(false);
    });

    [[maybe_unused]]
    auto on_area_map_open = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, [](auto, auto) {
        visibility_effect = core::reactivity::watch_effect()
            .effect([&] {
                map_side_background->enabled(map_side_background_state.get<bool>());
            })
            .finalize();
    });

    [[maybe_unused]]
    auto on_area_map_closed = core::api::game::event_bus().register_handler(GameEvent::CloseAreaMap, EventTiming::After, [](auto, auto) {
        visibility_effect = nullptr;
        map_side_background->enabled(false);
    });
} // namespace
