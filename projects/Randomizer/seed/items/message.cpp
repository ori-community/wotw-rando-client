#include <seed/items/message.h>

#include <Core/core.h>

namespace randomizer::seed::items {
    void Message::grant() {
        core::message_controller().queue_central(info, should_save_as_last);
    }
} // namespace randomizer::seed::items
