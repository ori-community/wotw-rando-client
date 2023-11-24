#include <Core/dev/status_display.h>

namespace core::dev {
    const std::string OK_COLOR = "6dff38ff";
    const std::string WARNING_COLOR = "ffc700ff";
    const std::string ERROR_COLOR = "cc0011ff";

    StatusDisplay::StatusDisplay(StatusDisplayConfig config)
            : m_display(config.max_line_count, std::nullopt)
            , m_config(config) {
        // TODO: Change position if header is enabled.
        m_display.position() = m_config.position;
        m_display.alignment() = m_config.alignment;
        m_display.horizontal_anchor() = m_config.horizontal_anchor;
        m_display.vertical_anchor() = m_config.vertical_anchor;
        m_display.screen_position() = m_config.screen_position;
        if (!m_config.entries.contains(StatusType::Warning)) {
            m_config.entries[StatusType::Warning].format = "<hex_ffc700ff>{}</>";
        }

        if (!m_config.entries.contains(StatusType::Error)) {
            auto& entry = m_config.entries[StatusType::Error];
            entry.format = "<hex_cc0011ff>{}</>";
            entry.play_sound = true;
        }
    }

    void StatusDisplay::report(StatusType type, std::string const& message, float duration) {
        // Need to hold all the sync handles so we can check what the worst condition is.
        const auto& [format, size, play_sound] = m_config.entries[type];
        const messages::MessageInfo info{
            .text = std::format("<s_{:.3}>{}</>", size, message),
            .duration = duration,
            .show_box = false,
            .play_sound = play_sound,
            .margins = m_config.margins,
            .padding = m_config.padding,
        };

        m_display.push(info);
    }

    void StatusDisplay::update(float delta_time) {
        // TODO: Update Header

        m_display.update(delta_time);
    }
} // namespace core::dev
