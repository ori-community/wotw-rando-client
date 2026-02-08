#include <Core/dev/status_display.h>

#include <Core/api/screen_position.h>

namespace core::dev {
    const std::string OK_COLOR = "6dff38ff";
    const std::string WARNING_COLOR = "ffc700ff";
    const std::string ERROR_COLOR = "cc0011ff";

    StatusDisplay::StatusDisplay(StatusDisplayConfig config)
            : m_display(config.max_line_count, std::nullopt)
            , m_config(config) {
        // TODO: Change position if header is enabled.

        m_display.alignment().set(m_config.alignment);
        m_display.horizontal_anchor().set(m_config.horizontal_anchor);
        m_display.message_vertical_anchor().set(m_config.vertical_anchor);

        if (!m_config.entries.contains(StatusType::Warning)) {
            m_config.entries[StatusType::Warning].format = "<hex_ffc700ff>{}</>";
        }

        if (!m_config.entries.contains(StatusType::Error)) {
            auto& entry = m_config.entries[StatusType::Error];
            entry.format = "<hex_cc0011ff>{}</>";
        }
    }

    void StatusDisplay::report(StatusType type, std::string const& message, float duration) {
        // Need to hold all the sync handles so we can check what the worst condition is.
        const auto& [format, size] = m_config.entries[type];
        const messages::MessageInfo info{
            .text = Property<std::string>(std::format("<s_{:.3}>{}</>", size, message)),
            .duration = duration,
            .show_box = false,
            .instant_fade = true,
            .play_sound = false,
            .margins = m_config.margins,
            .padding = m_config.padding,
        };

        m_display.push(info);
    }

    void StatusDisplay::update(const float delta_time) {
        auto top_left = api::screen_position::get(api::screen_position::ScreenPosition::TopLeft);
        top_left.x += 0.1f;
        top_left.y -= 0.1f;

        m_display.position().set(top_left);
        m_display.update(delta_time);
    }
} // namespace core::dev
