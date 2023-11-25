#pragma once

#include <Common/registration_handle.h>
#include <Core/dynamic_value.h>
#include <Core/macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/ScaleToTextBox.h>

#include <nlohmann/json.hpp>
#include <string_view>

namespace core::api::messages {

    enum class ScreenPosition {
        TopLeft = 0,
        TopCenter = 1,
        TopRight = 2,
        MiddleLeft = 3,
        MiddleCenter = 4,
        MiddleRight = 5,
        BottomLeft = 6,
        BottomCenter = 7,
        BottomRight = 8
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        ScreenPosition,
        {
            { ScreenPosition::TopLeft, "TopLeft" },
            { ScreenPosition::TopCenter, "TopCenter" },
            { ScreenPosition::TopRight, "TopRight" },
            { ScreenPosition::MiddleLeft, "MiddleLeft" },
            { ScreenPosition::MiddleCenter, "MiddleCenter" },
            { ScreenPosition::MiddleRight, "MiddleRight" },
            { ScreenPosition::BottomLeft, "BottomLeft" },
            { ScreenPosition::BottomCenter, "BottomCenter" },
            { ScreenPosition::BottomRight, "BottomRight" },
        }
    );

    CORE_DLLEXPORT app::Vector3 get_screen_position(ScreenPosition position);

    class CORE_DLLEXPORT MessageBox {
    public:
        enum class Visibility {
            Hidden,
            FadingOut,
            FadingIn,
            Visible
        };

        MessageBox();
        MessageBox(MessageBox&& other) = delete;
        MessageBox(MessageBox const& other) = delete;
        ~MessageBox();

        // Called automatically.
        void update();

        [[nodiscard]] Visibility get_visibility();
        void show(bool instant = false, bool play_sound = true) const;
        void hide(bool instant = false) const;

        void refresh_text() { m_should_refresh_text = true; } // Only relevant if dynamic_text is false.
        void dynamic_text(const bool value) { m_dynamic_text = value; }
        void show_box(bool value) const;
        [[nodiscard]] app::Rect text_bounds() const;
        [[nodiscard]] app::Rect bounds() const;

        [[nodiscard]] DynamicValue<std::string>& text() { return m_text; }
        [[nodiscard]] DynamicValue<app::Vector3>& position() { return m_position; }
        [[nodiscard]] DynamicValue<bool>& use_world_coordinates() { return m_use_world_coordinates; }
        [[nodiscard]] DynamicValue<float>& fade_in() { return m_fade_in; }
        [[nodiscard]] DynamicValue<float>& fade_out() { return m_fade_out; }
        [[nodiscard]] DynamicValue<app::Color>& color() { return m_color; }
        [[nodiscard]] DynamicValue<float>& line_spacing() { return m_line_spacing; }
        [[nodiscard]] DynamicValue<app::AlignmentMode__Enum>& alignment() { return m_alignment; }
        [[nodiscard]] DynamicValue<app::HorizontalAnchorMode__Enum>& horizontal_anchor() { return m_horizontal_anchor; }
        [[nodiscard]] DynamicValue<app::VerticalAnchorMode__Enum>& vertical_anchor() { return m_vertical_anchor; }
        [[nodiscard]] DynamicValue<float>& top_padding() { return m_top_padding; }
        [[nodiscard]] DynamicValue<float>& bottom_padding() { return m_bottom_padding; }
        [[nodiscard]] DynamicValue<float>& left_padding() { return m_left_padding; }
        [[nodiscard]] DynamicValue<float>& right_padding() { return m_right_padding; }
        [[nodiscard]] DynamicValue<std::optional<ScreenPosition>>& screen_position() { return m_screen_position; }

    private:
        void update_text();
        app::Transform* background_transform() const;

        common::registration_handle m_on_update_handle;
        app::GameObject* m_game_object = nullptr;
        app::MessageBox* m_message_box = nullptr;
        app::ScaleToTextBox* m_scaler = nullptr;

        bool m_dynamic_text = false;
        bool m_should_refresh_text = true; // Only used if dynamic_text is false
        std::string m_processed_text;

        DynamicValue<std::string> m_text;
        DynamicValue<app::Vector3> m_position;
        DynamicValue<bool> m_use_world_coordinates;
        DynamicValue<float> m_fade_in;
        DynamicValue<float> m_fade_out;
        DynamicValue<app::Color> m_color;
        DynamicValue<float> m_line_spacing;
        DynamicValue<app::AlignmentMode__Enum> m_alignment;
        DynamicValue<app::HorizontalAnchorMode__Enum> m_horizontal_anchor;
        DynamicValue<app::VerticalAnchorMode__Enum> m_vertical_anchor;
        DynamicValue<float> m_top_padding;
        DynamicValue<float> m_bottom_padding;
        DynamicValue<float> m_left_padding;
        DynamicValue<float> m_right_padding;
        DynamicValue<std::optional<ScreenPosition>> m_screen_position;
    };
} // namespace core::api::messages
