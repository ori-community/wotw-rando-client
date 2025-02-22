#include <Core/core.h>
#include <Core/messages/message_controller.h>
#include <Randomizer/messages/map_message.h>
#include <Randomizer/randomizer.h>
#include <Randomizer/text_processors/ability.h>

namespace randomizer::messages {
    std::shared_ptr<core::api::messages::MessageBox> box;

    void show_map_message(std::string_view text) {
        if (box == nullptr) {
            box = std::make_shared<core::api::messages::MessageBox>();
            box->position().set(0, 0, 0);

            box->screen_position().set(core::api::screen_position::ScreenPosition::BottomCenter);
            box->alignment().set(app::AlignmentMode__Enum::Center);
            box->horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Center);
            box->vertical_anchor().set(app::VerticalAnchorMode__Enum::Bottom);
            box->use_world_coordinates().set(false);
            box->show_box().set(false);
            box->text_processor(general_text_processor());
        }

        auto processed_text = std::string(text);
        box->text().processor()->process(processed_text);

        const auto length = processed_text.length();

        if (length > 250) {
            box->text().set(std::format("<s_0.8><ls_0.7>{}</></>", processed_text));
        } else if (length > 125) {
            box->text().set(std::format("<s_0.9><ls_0.8>{}</></>", processed_text));
        } else {
            box->text().set(processed_text);
        }

        box->show(true, false);
    }

    void hide_map_message() {
        if (box != nullptr) {
            box->hide(true);
        }
    }
} // namespace randomizer::messages
