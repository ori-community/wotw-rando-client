#pragma once

#include <Core/api/messages/message_box.h>

#include <memory>
#include <optional>
#include <string_view>
#include <utility>

namespace core::api::messages {

    struct CentralMessageInfo {
        std::string text;
        float duration = 3.f;
        bool should_save_as_last = false;
        bool show_box = true;
        bool instant = false;
        bool prioritized = false;
        std::optional<app::Vector3> world_position = std::nullopt;
    };

    struct MessageInfo {
        std::optional<float> duration;
        std::optional<std::string> queue;
        bool priority = false;
        bool instant = false;
        bool play_sound = false;
    };

    class CORE_DLLEXPORT MessageController {
    public:
        enum class MessageState {
            Waiting,
            Paused,
            Showing,
            Finished
        };

        struct SyncHandle {
            MessageState state = MessageState::Waiting;
            std::optional<float> time_left;
            float active_time;
        };

        using sync_handle = std::shared_ptr<MessageController::SyncHandle>;

        MessageController();
        ~MessageController();

        // Handles showing / hiding the given messagebox based on info provided.
        sync_handle queue_message(std::shared_ptr<MessageBox> message, MessageInfo info);
        void queue_central_message(CentralMessageInfo info);
        void requeue_last_central_message();
        void clear_central_messages();

        void central_text_processor(std::shared_ptr<text::ITextProcessor> text_processor) { m_text_processor = std::move(text_processor); }

    private:
        struct MessageControllerData;
        std::unique_ptr<MessageControllerData> m_data;
        std::shared_ptr<text::ITextProcessor> m_text_processor;

        void update();
        void limit_central_queue();
    };
} // namespace core::api::messages
