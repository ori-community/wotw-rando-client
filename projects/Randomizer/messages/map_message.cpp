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
            box->position() = app::Vector3{
                0, 0.0, 0
            };

            box->screen_position() = core::api::messages::ScreenPosition::BottomCenter;
            box->alignment() = app::AlignmentMode__Enum::Center;
            box->horizontal_anchor() = app::HorizontalAnchorMode__Enum::Center;
            box->vertical_anchor() = app::VerticalAnchorMode__Enum::Bottom;
            box->use_world_coordinates() = false;
            box->show_box(false);
            box->text().text_processor(general_text_processor());
        }

        box->text().set(text);
        box->refresh_text();
        box->show(true);
    }

    void hide_map_message() {
        if (box != nullptr) {
            box->hide(true);
        }
    }
}
