#pragma once

#include <Core/api/messages/message_box.h>

#include <memory>
#include <optional>

namespace core::messages {
    struct QueuedMessageHandle {
        enum class QueuedMessageState {
            Queued,
            InterruptedByPriorityMessage,
            Visible,
            FadingOut,
            Finished,
        };

        QueuedMessageState state = QueuedMessageState::Queued;
        std::optional<float> time_left;
        float active_time = 0;
        std::weak_ptr<api::messages::MessageBox> message;
    };
} // namespace core::messages

using message_handle_t = core::messages::QueuedMessageHandle;
using message_handle_ptr_t = std::shared_ptr<message_handle_t>;
