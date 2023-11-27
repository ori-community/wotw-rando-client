#pragma once

#include <Common/registration_handle.h>
#include <Core/property.h>
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
        void on_fixed_update();

        [[nodiscard]] Visibility get_visibility();
        void show(bool instant = false, bool play_sound = true);
        void hide(bool instant = false) const;

        void show_box(bool value) const;
        [[nodiscard]] app::Rect text_bounds() const;
        [[nodiscard]] app::Rect bounds() const;

        [[nodiscard]] Property<std::string> text() { return m_text; }
        void text_processor(std::shared_ptr<text::ITextProcessor> text_processor) { m_text.text_processor(text_processor); }

        [[nodiscard]] Property<app::Vector3> position() { return m_position; }
        [[nodiscard]] Property<bool> use_world_coordinates() { return m_use_world_coordinates; }
        [[nodiscard]] Property<float> fade_in() { return m_fade_in; }
        [[nodiscard]] Property<float> fade_out() { return m_fade_out; }
        [[nodiscard]] Property<app::Color> color() { return m_color; }
        [[nodiscard]] Property<float> line_spacing() { return m_line_spacing; }
        [[nodiscard]] Property<app::AlignmentMode__Enum> alignment() { return m_alignment; }
        [[nodiscard]] Property<app::HorizontalAnchorMode__Enum> horizontal_anchor() { return m_horizontal_anchor; }
        [[nodiscard]] Property<app::VerticalAnchorMode__Enum> vertical_anchor() { return m_vertical_anchor; }
        [[nodiscard]] Property<float> top_padding() { return m_top_padding; }
        [[nodiscard]] Property<float> bottom_padding() { return m_bottom_padding; }
        [[nodiscard]] Property<float> left_padding() { return m_left_padding; }
        [[nodiscard]] Property<float> right_padding() { return m_right_padding; }
        [[nodiscard]] Property<std::optional<ScreenPosition>> screen_position() { return m_screen_position; }
    private:
        void render_text_box();
        app::Transform* background_transform() const;

        common::registration_handle m_on_update_handle;
        app::GameObject* m_game_object = nullptr;
        app::MessageBox* m_message_box = nullptr;
        app::ScaleToTextBox* m_scaler = nullptr;

        std::string m_cached_text;

        Property<std::string> m_text;
        Property<app::Vector3> m_position;
        Property<bool> m_use_world_coordinates;
        Property<float> m_fade_in;
        Property<float> m_fade_out;
        Property<app::Color> m_color;
        Property<float> m_line_spacing;
        Property<app::AlignmentMode__Enum> m_alignment;
        Property<app::HorizontalAnchorMode__Enum> m_horizontal_anchor;
        Property<app::VerticalAnchorMode__Enum> m_vertical_anchor;
        Property<float> m_top_padding;
        Property<float> m_bottom_padding;
        Property<float> m_left_padding;
        Property<float> m_right_padding;
        Property<std::optional<ScreenPosition>> m_screen_position;
    };
} // namespace core::api::messages
