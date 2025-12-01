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
    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        // We use Anchor::BottomLeft here because we are flipping the sprite.
        map_side_background = std::make_unique<core::api::graphics::Sprite>(core::api::graphics::Sprite::Anchor::BottomLeft);
        il2cpp::unity::set_object_name(map_side_background->get_game_object(), "map_side_background");

        map_side_background->layer(Layer::UI);
        map_side_background->local_scale({8, -8, 8});

        auto top_left = get(core::api::screen_position::ScreenPosition::TopLeft, false);
        top_left.z = -1.0f;
        map_side_background->local_position(top_left);

        map_side_background->texture(core::api::graphics::textures::get_texture_from_identifier("file:assets/textures/gradient_corner_bottom_left.png"));

        const auto scale_position_component = il2cpp::unity::add_component<app::ScalePositionForAspectRatio>(
            map_side_background->get_game_object(), types::ScalePositionForAspectRatio::get_class()
        );
        ScalePositionForAspectRatio::ctor(scale_position_component);
        map_side_background->enabled(false);


    });

    core::Property<std::string> map_message_side_text(core::TextID::SideMapMessage);
    core::reactivity::ReactiveEffect::ptr_t on_map_message_side_changed;
    std::shared_ptr<core::api::messages::MessageBox> box;

    void update_side_map_message() {
        auto processed_text = std::string(map_message_side_text.get());
        box->text().processor()->process(processed_text);
        box->text().set(std::format("<s_0.9>{}</>", processed_text));
    }

    void show_map_message_side() {
        if (box == nullptr) {
            box = std::make_shared<core::api::messages::MessageBox>();
            box->set_name("map_message_side");
            box->coordinate_system().set(core::api::messages::CoordinateSystem::Relative);
            box->position().set(0.05f, 0.05f, -1.1f);

            box->text_line_spacing().set(0.8f);
            box->text_alignment().set(app::AlignmentMode__Enum::Left);
            box->box_horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Left);
            box->box_vertical_anchor().set(app::VerticalAnchorMode__Enum::Top);
            box->box_width().set(10.0f);
            box->show_background().set(false);
            box->text_processor(randomizer::general_text_processor());

            on_map_message_side_changed = core::reactivity::watch_effect().effect(map_message_side_text).after(&update_side_map_message).finalize();
        }

        box->show(true, false);
        map_side_background->enabled(true);
    }

    void hide_map_message_side() {
        if (box == nullptr) {
            return;
        }

        box->hide(true);
        map_side_background->enabled(false);
    }

    core::reactivity::ReactiveEffect::ptr_t visibility_effect;

    auto on_area_map_open = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, [](auto, auto) {
        visibility_effect = core::reactivity::watch_effect()
            .effect(randomizer::map::filter::current_map_filter())
            .after([] {
                if (!randomizer::map::filter::quests_ui_should_be_visible()) {
                    show_map_message_side();
                } else {
                    hide_map_message_side();
                }
            })
            .finalize();
    });

    auto on_area_map_closed = core::api::game::event_bus().register_handler(GameEvent::CloseAreaMap, EventTiming::After, [](auto, auto) {
        visibility_effect = nullptr;
        hide_map_message_side();
    });
} // namespace
