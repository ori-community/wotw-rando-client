#pragma once

#include <Core/api/messages/message_box.h>
#include <Core/messages/message_display.h>

#include <Modloader/app/structs/Vector4.h>

namespace core::dev {
    enum class StatusType {
        Info,
        Warning,
        Error
    };

    struct StatusDisplayConfig {
        struct StatusHeader {
            std::string header;
            bool format_overall_status;
            float size;
        };

        struct StatusEntry {
            std::string format = "{}";
            float size = 0.75;
            bool play_sound = false; // TODO: Make this take a sound event to play instead.
        };

        int max_line_count = 5;
        app::Vector3 position;
        app::Vector4 padding;
        app::Vector2 margins;
        std::optional<StatusHeader> header;
        std::unordered_map<StatusType, StatusEntry> entries;

        app::AlignmentMode__Enum alignment = app::AlignmentMode__Enum::Center;
        app::HorizontalAnchorMode__Enum horizontal_anchor = app::HorizontalAnchorMode__Enum::Center;
        app::VerticalAnchorMode__Enum vertical_anchor = app::VerticalAnchorMode__Enum::Middle;
        std::optional<api::screen_position::ScreenPosition> screen_position = api::screen_position::ScreenPosition::MiddleCenter;
    };

    class CORE_DLLEXPORT StatusDisplay {
    public:
        StatusDisplay(StatusDisplayConfig config);

        void report(StatusType type, std::string const& message, float duration = 0);
        void update(float delta_time);

        messages::MessageDisplay& display() { return m_display; }

    private:
        messages::MessageDisplay m_display;
        StatusDisplayConfig m_config;
    };
} // namespace core::dev
