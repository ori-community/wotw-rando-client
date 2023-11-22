#include <seed/items/message.h>

#include <Core/core.h>
#include <messages/map_message.h>

namespace randomizer::seed::items {
    void Message::grant() {
        core::message_controller().queue_central(info, should_save_as_last);
    }

    void MapMessage::grant() {
        if (message.empty()) {
            messages::hide_map_message();
        } else {
            messages::show_map_message(message);
        }
    }
} // namespace randomizer::seed::items
