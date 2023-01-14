#include <seed/items/message.h>

#include <Core/core.h>

namespace randomizer::seed::items {
    void Message::grant() {
        core::message_controller().queue_central_message(info);
    }
} // namespace randomizer::seed::items
