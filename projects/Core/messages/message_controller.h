#pragma once

#include <Core/api/messages/message_box.h>
#include <Core/messages/message_display.h>

#include <memory>
#include <optional>

namespace core::messages {
    struct IndependentMessageInfo {
        std::optional<float> duration;
        std::optional<std::string> queue;
        bool prioritized = false; // Only applies in queue.
        bool instant_fade = false;
        bool play_sound = false;
    };

    class CORE_DLLEXPORT MessageController {
    public:
        MessageController();
        ~MessageController();

        // Handles showing / hiding the given messagebox based on info provided.
        message_handle_ptr_t queue(std::shared_ptr<api::messages::MessageBox> message, IndependentMessageInfo info);
        message_handle_ptr_t queue_central(MessageInfo info);
        void update(float delta_time);
        void clear_central();

        MessageDisplay& central_display() { return m_central_display; }

    private:
        struct MessageData {
            std::shared_ptr<api::messages::MessageBox> message;
            IndependentMessageInfo info;
            message_handle_ptr_t handle;
        };

        class MessageQueue {
        public:
            void update(float delta_time);
            message_handle_ptr_t add(std::shared_ptr<api::messages::MessageBox> message, IndependentMessageInfo info);

        private:
            std::vector<MessageData> m_priority_data;
            std::vector<MessageData> m_normal_data;
            std::optional<MessageData> m_current;
        };

        static void update_time(const MessageData& data, const float delta_time);

        MessageDisplay m_central_display;
        std::unordered_map<std::string, MessageQueue> m_queues;
        std::vector<MessageData> m_unqueued_messages;
    };
} // namespace core::messages
