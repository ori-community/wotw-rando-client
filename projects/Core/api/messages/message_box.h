#pragma once

#include <Common/registration_handle.h>
#include <Core/macros.h>
#include <Core/property.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/ScaleToTextBox.h>

#include <string_view>

namespace core::api::messages {
    enum class CoordinateSystem {
        Absolute,
        Relative,
        World,
    };

    class CORE_DLLEXPORT MessageBox {
    public:
        static constexpr std::string_view MESSAGE_BOX_MARKER = "rando_text_box_marker";
        static MessageBox* find_with_id(int id);

        enum class Visibility {
            Hidden,
            FadingOut,
            FadingIn,
            Visible,
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
        [[nodiscard]] const Property<CoordinateSystem>& coordinate_system() { return m_coordinate_system; }
        [[nodiscard]] const Property<bool>& show_box() { return m_show_box; }
        [[nodiscard]] const Property<float>& fade_in() { return m_fade_in; }
        [[nodiscard]] const Property<float>& fade_out() { return m_fade_out; }
        [[nodiscard]] const Property<app::Color>& color() { return m_color; }
        [[nodiscard]] const Property<float>& line_spacing() { return m_line_spacing; }
        [[nodiscard]] const Property<float>& width() { return m_width; }
        [[nodiscard]] const Property<app::AlignmentMode__Enum>& alignment() { return m_alignment; }
        [[nodiscard]] const Property<app::HorizontalAnchorMode__Enum>& horizontal_anchor() { return m_horizontal_anchor; }
        [[nodiscard]] const Property<app::VerticalAnchorMode__Enum>& vertical_anchor() { return m_vertical_anchor; }
        [[nodiscard]] const Property<float>& top_padding() { return m_top_padding; }
        [[nodiscard]] const Property<float>& bottom_padding() { return m_bottom_padding; }
        [[nodiscard]] const Property<float>& left_padding() { return m_left_padding; }
        [[nodiscard]] const Property<float>& right_padding() { return m_right_padding; }
        [[nodiscard]] const Property<bool>& tighten_box_to_text() { return m_tighten_box_to_text; }

    private:
        int m_id;

        void render_text_box();
        app::Transform* background_transform() const;

        common::registration_handle_t m_on_update_handle;
        app::GameObject* m_game_object = nullptr;
        app::MessageBox* m_message_box = nullptr;
        app::ScaleToTextBox* m_scaler = nullptr;

        std::string m_cached_text;
        bool m_cached_show_box = false;

        Property<std::string> m_text;
        Property<app::Vector3> m_position{{0, 0, 0}};
        Property<CoordinateSystem> m_coordinate_system{CoordinateSystem::Relative};
        Property<bool> m_show_box = Property<bool>(true);
        Property<float> m_fade_in;
        Property<float> m_fade_out;
        Property<app::Color> m_color;
        Property<float> m_line_spacing;
        Property<float> m_width;
        Property<app::AlignmentMode__Enum> m_alignment;
        Property<app::HorizontalAnchorMode__Enum> m_horizontal_anchor;
        Property<app::VerticalAnchorMode__Enum> m_vertical_anchor;
        Property<float> m_top_padding{0.f};
        Property<float> m_bottom_padding{0.f};
        Property<float> m_left_padding{1.f};
        Property<float> m_right_padding{1.f};
        Property<bool> m_tighten_box_to_text{true};

        std::shared_ptr<reactivity::ReactiveEffect> m_tighten_effect;
    };

    NLOHMANN_JSON_SERIALIZE_ENUM(
        CoordinateSystem,
        {
            { CoordinateSystem::Absolute, "Absolute" },
            { CoordinateSystem::Relative, "Relative" },
            { CoordinateSystem::World, "World" },
        }
    );
} // namespace core::api::messages
