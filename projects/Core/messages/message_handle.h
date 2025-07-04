#pragma once

#include <Core/api/messages/message_box.h>

#include <memory>
#include <optional>

namespace core::messages {
    struct MessageHandle {
        enum class MessageState {
            Queued,
            InterruptedByPriorityMessage,
            Visible,
            FadingOut,
            Finished,
        };

        MessageState state = MessageState::Queued;
        std::optional<float> time_left;
        float active_time = 0;
        std::weak_ptr<api::messages::MessageBox> message;
    };
} // namespace core::messages

using message_handle_t = core::messages::MessageHandle;
using message_handle_ptr_t = std::shared_ptr<message_handle_t>;
