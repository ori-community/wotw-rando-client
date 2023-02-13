#pragma once

#include <Core/api/messages/message_box.h>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>

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
        bool instant_fade = false;
        bool prioritized = false;
        app::Vector2 margins{ 0, 0 }; // Top-Bottom
        app::Vector4 padding{ 0, 1, 0, 1 }; // Top-Left-Bottom-Right
        std::optional<app::Vector3>
            world_position = std::nullopt;
    };

    struct MessageInfo {
        std::optional<float> duration;
        std::optional<std::string> queue;
        bool prioritized = false; // Only applies in queue.
        bool instant_fade = false;
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
            float active_time = 0;
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
        void update_priority_message(float y_position);
        void update_active_messages(int& total_lines, float& y_position);
        void update_message_queue(int& total_lines, float& y_position);
        void create_message(CentralMessageInfo info, int& total_lines, float& y_position);
        void limit_central_queue();
    };
} // namespace core::api::messages
