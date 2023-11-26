#include <randomizer.h>
#include <seed/items/message.h>

#include <Core/core.h>
#include <messages/map_message.h>

namespace randomizer::seed::items {
    void Message::grant() {
        auto copy = info;
        std::string text = copy.text.get();
        general_text_processor()->process(*general_text_processor(), text);
        copy.text.assign(text);
        core::message_controller().queue_central(copy, should_save_as_last);
    }

    std::string Message::to_string() {
        return std::format("show message {}", info.text.get());
    }

    void MapMessage::grant() {
        if (message.empty()) {
            messages::hide_map_message();
        } else {
            messages::show_map_message(message);
        }
    }

    std::string MapMessage::to_string() {
        return std::format("show map message {}", message);
    }
} // namespace randomizer::seed::items
