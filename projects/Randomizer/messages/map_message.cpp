#include <Randomizer/messages/map_message.h>
#include <randomizer.h>

#include <Core/core.h>
#include <Core/messages/message_controller.h>
#include <text_processors/ability.h>

namespace randomizer::messages {
    std::shared_ptr<core::api::messages::MessageBox> box;

    void show_map_message(std::string_view text) {
        if (box == nullptr) {
            box = std::make_shared<core::api::messages::MessageBox>();
            box->position().set(0, 0, 0);

            box->screen_position().set(core::api::messages::ScreenPosition::BottomCenter);
            box->alignment().set(app::AlignmentMode__Enum::Center);
            box->horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Center);
            box->vertical_anchor().set(app::VerticalAnchorMode__Enum::Bottom);
            box->use_world_coordinates().set(false);
            box->show_box(false);
            box->text_processor(general_text_processor());
        }

        box->text().process_and_set(text);
        box->show(true);
    }

    void hide_map_message() {
        if (box != nullptr) {
            box->hide(true);
        }
    }
}
