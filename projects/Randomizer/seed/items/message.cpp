#include <Randomizer/randomizer.h>
#include <Randomizer/seed/items/message.h>

#include <Core/core.h>
#include <Randomizer/messages/map_message.h>

namespace randomizer::seed::items {
    void Message::grant() {
        core::message_controller().queue_central(info, should_save_as_last);
    }

    std::string Message::to_string() const {
        return std::format("show message '{}'", info.text.get());
    }

    void MapMessage::grant() {
        if (message.empty()) {
            messages::hide_map_message();
        } else {
            messages::show_map_message(message);
        }
    }

    std::string MapMessage::to_string() const {
        return std::format("show map message '{}'", message);
    }
} // namespace randomizer::seed::items
