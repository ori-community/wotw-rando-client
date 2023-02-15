#pragma once

#include <Core/api/messages/message_box.h>

#include <memory>
#include <optional>

namespace core::messages {
    struct MessageSyncHandle {
        enum class MessageState {
            Waiting,
            Paused,
            Showing,
            Finished
        };

        MessageState state = MessageState::Waiting;
        std::optional<float> time_left;
        float active_time = 0;
        std::weak_ptr<api::messages::MessageBox> message;
    };
} // namespace core::messages

using message_sync_handle_type = core::messages::MessageSyncHandle;
using message_sync_handle = std::shared_ptr<message_sync_handle_type>;
