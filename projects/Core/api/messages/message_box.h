#pragma once

#include <Common/registration_handle.h>
#include <Core/property.h>
#include <Core/macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/ScaleToTextBox.h>

#include <Core/api/screen_position.h>
#include <nlohmann/json.hpp>
#include <string_view>

namespace core::api::messages {
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

        [[nodiscard]] app::Rect text_bounds() const;
        [[nodiscard]] app::Rect bounds() const;

        [[nodiscard]] const Property<std::string>& text() { return m_text; }
        void text_processor(const std::shared_ptr<text::ITextProcessor>& text_processor) { m_text.text_processor(text_processor); }

        [[nodiscard]] const Property<app::Vector3>& position() { return m_position; }
        [[nodiscard]] const Property<bool>& use_world_coordinates() { return m_use_world_coordinates; }
        [[nodiscard]] const Property<bool>& show_box() { return m_show_box; }
        [[nodiscard]] const Property<float>& fade_in() { return m_fade_in; }
        [[nodiscard]] const Property<float>& fade_out() { return m_fade_out; }
        [[nodiscard]] const Property<app::Color>& color() { return m_color; }
        [[nodiscard]] const Property<float>& line_spacing() { return m_line_spacing; }
        [[nodiscard]] const Property<app::AlignmentMode__Enum>& alignment() { return m_alignment; }
        [[nodiscard]] const Property<app::HorizontalAnchorMode__Enum>& horizontal_anchor() { return m_horizontal_anchor; }
        [[nodiscard]] const Property<app::VerticalAnchorMode__Enum>& vertical_anchor() { return m_vertical_anchor; }
        [[nodiscard]] const Property<float>& top_padding() { return m_top_padding; }
        [[nodiscard]] const Property<float>& bottom_padding() { return m_bottom_padding; }
        [[nodiscard]] const Property<float>& left_padding() { return m_left_padding; }
        [[nodiscard]] const Property<float>& right_padding() { return m_right_padding; }
        [[nodiscard]] const Property<std::optional<screen_position::ScreenPosition>>& screen_position() { return m_screen_position; }
    private:
        void render_text_box();
        app::Transform* background_transform() const;

        common::registration_handle_t m_on_update_handle;
        app::GameObject* m_game_object = nullptr;
        app::MessageBox* m_message_box = nullptr;
        app::ScaleToTextBox* m_scaler = nullptr;

        std::string m_cached_text;
        bool m_cached_show_box = false;

        Property<std::string> m_text;
        Property<app::Vector3> m_position;
        Property<bool> m_use_world_coordinates;
        Property<bool> m_show_box = Property<bool>(true);
        Property<float> m_fade_in;
        Property<float> m_fade_out;
        Property<app::Color> m_color;
        Property<float> m_line_spacing;
        Property<app::AlignmentMode__Enum> m_alignment;
        Property<app::HorizontalAnchorMode__Enum> m_horizontal_anchor;
        Property<app::VerticalAnchorMode__Enum> m_vertical_anchor;
        Property<float> m_top_padding { 0.f };
        Property<float> m_bottom_padding { 0.f };
        Property<float> m_left_padding { 1.f };
        Property<float> m_right_padding { 1.f };
        Property<std::optional<screen_position::ScreenPosition>> m_screen_position{};
    };
} // namespace core::api::messages
