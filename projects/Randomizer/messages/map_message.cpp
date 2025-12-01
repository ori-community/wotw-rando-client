#include <Core/api/game/game.h>
#include <Core/core.h>
#include <Core/enums/game_event.h>
#include <Core/messages/message_controller.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/text_processors/ability.h>

namespace randomizer::messages {
    core::Property<std::string> map_message_text(core::TextID::MapMessage);
    core::reactivity::ReactiveEffect::ptr_t on_map_message_changed;
    std::shared_ptr<core::api::messages::MessageBox> box;

    void update_map_message() {
        auto processed_text = std::string(map_message_text.get());
        box->text().processor()->process(processed_text);

        const auto length = processed_text.length();

        if (length > 250) {
            box->text().set(std::format("<s_0.8><ls_0.7>{}</></>", processed_text));
        } else if (length > 125) {
            box->text().set(std::format("<s_0.9><ls_0.8>{}</></>", processed_text));
        } else {
            box->text().set(processed_text);
        }
    }

    void show_map_message() {
        if (box == nullptr) {
            box = std::make_shared<core::api::messages::MessageBox>();
            box->set_name("map_message");
            box->coordinate_system().set(core::api::messages::CoordinateSystem::Relative);
            box->position().set(0.5, 0.95, 0);

            box->text_alignment().set(app::AlignmentMode__Enum::Center);
            box->box_horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Center);
            box->box_vertical_anchor().set(app::VerticalAnchorMode__Enum::Bottom);
            box->show_background().set(false);
            box->text_processor(general_text_processor());

            on_map_message_changed = core::reactivity::watch_effect().effect(map_message_text).after(&update_map_message).finalize();
        }

        box->show(true, false);
    }

    void hide_map_message() {
        if (box == nullptr) {
            return;
        }

        box->hide(true);
    }

    [[maybe_unused]] auto on_map_opened = core::api::game::event_bus().register_handler(GameEvent::OpenAreaMap, EventTiming::After, [](auto, auto) {
        show_map_message();
    });

    [[maybe_unused]] auto on_map_closed = core::api::game::event_bus().register_handler(GameEvent::CloseAreaMap, EventTiming::After, [](auto, auto) {
        hide_map_message();
    });
} // namespace randomizer::messages
