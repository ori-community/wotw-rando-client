#pragma once

#include <Core/api/messages/message_box.h>
#include <Core/messages/message_sync_handle.h>

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>

#include <memory>
#include <optional>
#include <string_view>
#include <utility>

namespace core::messages {

    struct MessageInfo {
        std::string text;
        float duration = 3.f;
        bool show_box = true;
        bool instant_fade = false;
        bool prioritized = false;
        bool play_sound = true;
        app::Vector2 margins{ 0.1, 0.1 }; // Top-Bottom
        app::Vector4 padding{ 0, 1, 0, 1 }; // Top-Left-Bottom-Right
        std::optional<app::Vector3> starting_world_position = std::nullopt;
    };

    class CORE_DLLEXPORT MessageDisplay {
    public:
        MessageDisplay(std::optional<int> max_line_count, std::optional<int> max_in_queue);

        message_sync_handle push(MessageInfo info);
        void clear();

        void text_processor(auto text_processor) { m_text_processor = std::move(text_processor); }

        void update(float delta_time);

        DynamicValue<bool>& display_in_world() { return m_display_in_world; };
        DynamicValue<app::Vector3>& position() { return m_position; };
        DynamicValue<std::optional<int>>& max_line_count() { return m_max_line_count; };
        DynamicValue<std::optional<int>>& max_in_queue() { return m_max_in_queue; };

        DynamicValue<app::AlignmentMode__Enum>& alignment() { return m_alignment; }
        DynamicValue<app::HorizontalAnchorMode__Enum>& horizontal_anchor() { return m_horizontal_anchor; }
        DynamicValue<app::VerticalAnchorMode__Enum>& vertical_anchor() { return m_vertical_anchor; }
        DynamicValue<std::optional<api::messages::ScreenPosition>>& screen_position() { return m_screen_position; }

    private:
        struct MessageData {
            std::shared_ptr<api::messages::MessageBox> message;
            MessageInfo info;
            message_sync_handle sync;
        };

        static void update_time(MessageData& data, float delta_time);

        void update_priority_message(float delta_time);
        void update_active_messages(int& total_lines, app::Vector3& position, float delta_time);
        void update_message_queue(int& total_lines, app::Vector3& position);
        void update_message_position(MessageData& data, int& total_lines, app::Vector3& position, float delta_time);
        bool handle_active_message(MessageData& data, int& total_lines, app::Vector3& position, float fade_out, float delta_time);
        void populate_data(MessageData& data, int& total_lines, app::Vector3& position);

        const float m_max_length_from_position = 20.f;
        bool m_showing_priority = false;
        DynamicValue<bool> m_display_in_world;
        DynamicValue<app::Vector3> m_position;
        DynamicValue<std::optional<int>> m_max_line_count;
        DynamicValue<std::optional<int>> m_max_in_queue;

        DynamicValue<app::AlignmentMode__Enum> m_alignment;
        DynamicValue<app::HorizontalAnchorMode__Enum> m_horizontal_anchor;
        DynamicValue<app::VerticalAnchorMode__Enum> m_vertical_anchor;
        DynamicValue<std::optional<api::messages::ScreenPosition>> m_screen_position;

        std::optional<MessageData> m_last_message;
        std::optional<MessageData> m_priority_message;
        std::optional<MessageData> m_priority_message_data;
        std::vector<MessageData> m_messages;
        std::vector<MessageData> m_active_messages;

        std::shared_ptr<text::ITextProcessor> m_text_processor;
    };
} // namespace core::messages
