#pragma once

#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector4.h>

#include <Core/api/messages/message_box.h>
#include <Core/messages/message_handle.h>
#include <Core/text/text_processor.h>

#include <memory>
#include <optional>
#include <utility>

namespace core::messages {
    struct MessageInfo {
        Property<std::string> text;
        float duration = 3.f;
        bool show_box = true;
        bool instant_fade = false;
        bool prioritized = false;
        bool play_sound = true;
        app::Vector2 margins{ 0.1, 0.1 }; // Top-Bottom
        app::Vector4 padding{ 0, 1, 0, 1 }; // Top-Left-Bottom-Right
        float line_spacing = 1.f;
        std::optional<app::Vector3> pickup_position = std::nullopt; // Pickup position in world space. Used for the animation.
    };

    enum class MessageDisplayAnchor {
        Top,
        Bottom,
    };

    enum class MessageDisplayExpandDirection {
        Downwards,
        Upwards,
    };

    class CORE_DLLEXPORT MessageDisplay {
    public:
        MessageDisplay(std::optional<int> max_line_count, std::optional<int> max_in_queue);

        message_handle_ptr_t push(MessageInfo info);
        void clear();

        void text_processor(auto text_processor) { m_text_processor = std::move(text_processor); }
        auto& text_processor() { return m_text_processor; }

        void update(float delta_time);

        Property<app::Vector3>& position() { return m_position; };
        Property<std::optional<int>>& max_line_count() { return m_max_line_count; };
        Property<std::optional<int>>& max_in_queue() { return m_max_in_queue; };

        Property<app::AlignmentMode__Enum>& alignment() { return m_alignment; }
        Property<app::HorizontalAnchorMode__Enum>& horizontal_anchor() { return m_horizontal_anchor; }
        Property<app::VerticalAnchorMode__Enum>& message_vertical_anchor() { return m_message_vertical_anchor; }
        Property<MessageDisplayAnchor>& display_vertical_anchor() { return m_display_vertical_anchor; }
        Property<MessageDisplayExpandDirection>& expand_direction() { return m_expand_direction; }

        unsigned long long get_active_messages_count() const;

    private:
        struct MessageData {
            std::shared_ptr<api::messages::MessageBox> message;
            MessageInfo info;
            message_handle_ptr_t handle;
        };

        static void update_time(MessageData& data, float delta_time);

        void update_priority_message(int& total_lines, app::Vector3& cursor_position, float delta_time);
        void update_active_messages(int& total_lines, app::Vector3& cursor_position, float delta_time);
        void update_message_queue(int& total_lines, app::Vector3& cursor_position);
        void update_message_position(MessageData& data, int& total_lines, app::Vector3& cursor_position, float delta_time);
        bool handle_active_message(MessageData& data, int& total_lines, app::Vector3& cursor_position, float fade_out, float delta_time);
        void show_message_box(MessageData& data, int& total_lines, app::Vector3& position);
        int get_expand_direction_y_multiplier() const;

        // Max distance between player and pickup where the message position animation should be played
        const float m_max_distance_squared_for_message_position_animation = std::powf(10.f, 2.f);
        Property<app::Vector3> m_position;
        Property<std::optional<int>> m_max_line_count;
        Property<std::optional<int>> m_max_in_queue;

        Property<app::AlignmentMode__Enum> m_alignment;
        Property<app::HorizontalAnchorMode__Enum> m_horizontal_anchor;
        Property<app::VerticalAnchorMode__Enum> m_message_vertical_anchor;
        Property<MessageDisplayAnchor> m_display_vertical_anchor;
        Property<MessageDisplayExpandDirection> m_expand_direction;

        std::optional<MessageData> m_last_message;
        std::optional<MessageData> m_priority_message;
        std::optional<MessageData> m_active_priority_message;
        std::vector<MessageData> m_messages;
        std::vector<MessageData> m_active_messages;

        std::shared_ptr<text::ITextProcessor> m_text_processor;
    };
} // namespace core::messages
