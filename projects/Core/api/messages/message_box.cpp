#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/messages/text_style.h>
#include <Core/api/screen_position.h>
#include <Core/api/system/message_provider.h>
#include <Core/utils/position_converter.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/BitmapFont.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/MessageBoxVisibility.h>
#include <Modloader/app/methods/ScaleToTextBox.h>
#include <Modloader/app/methods/SoundSource.h>
#include <Modloader/app/methods/TextBoxExtended.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/DestroyOnRestoreCheckpoint.h>
#include <Modloader/app/types/GameObject.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/ParticleSuspender.h>
#include <Modloader/app/types/ScaleToTextBox.h>
#include <Modloader/app/types/SoundSource.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>


using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::api::messages {
    namespace {
        int next_message_id = 0;
        std::unordered_map<int, MessageBox*> message_boxes;

        // app::Rect compute_textbox_rect(app::TextBox* text_box) {
        //     const auto [anchor_x, anchor_y] = TextBoxExtended::ComputeAnchor(text_box);
        //     const auto line_count = CatlikeCoding::TextBox::TextBox::get_LineCount(text_box);
        //     auto left_edge = 3.402823e+38f;
        //     if (line_count == 0) {
        //         return app::Rect{
        //             text_box->fields.boundsTop,
        //             3.402823e+38,
        //             0.0,
        //             0.0,
        //         };
        //     }
        //
        //     if (text_box->fields.charMetaData == nullptr) {
        //         return app::Rect{};
        //     }
        //
        //     float right_edge = 0.0;
        //     for (auto i = 0; i < line_count; i = i + 1) {
        //         const auto line_info = CatlikeCoding::TextBox::TextBox::GetLineInfo(text_box, i);
        //         const auto front = line_info.firstCharIndex;
        //         auto back = line_info.lastCharIndex;
        //         app::CharMetaData back_meta_data{};
        //         while (true) {
        //             back_meta_data = text_box->fields.charMetaData->vector[back];
        //             if (back <= front || back_meta_data.type == app::CharType__Enum::Visible) {
        //                 break;
        //             }
        //
        //             --back;
        //         }
        //
        //         if (back_meta_data.font == nullptr) {
        //             return app::Rect{};
        //         }
        //
        //
        //         const auto bitmap_font_char = CatlikeCoding::TextBox::BitmapFont::get_Item(back_meta_data.font, text_box->fields.charMetaData->vector[back].id);
        //         const auto scale = text_box->fields.charMetaData->vector[front].scale + anchor_x;
        //         if (scale <= left_edge) {
        //             left_edge = scale;
        //         }
        //
        //         const float new_right_edge = *reinterpret_cast<float*>(&back_meta_data.color.r) * bitmap_font_char->fields.width + back_meta_data.scale + anchor_x;
        //         // The code below is the special case when aligned/anchored to the left.
        //         //if (right_edge <= new_right_edge) {
        //         //    right_edge = new_right_edge;
        //         //}
        //         right_edge = new_right_edge;
        //     }
        //
        //     const auto start_line_info = CatlikeCoding::TextBox::TextBox::GetLineInfo(text_box, 0);
        //     const auto end_line_info = CatlikeCoding::TextBox::TextBox::GetLineInfo(text_box, line_count - 1);
        //     const auto output = app::Rect{
        //         left_edge,
        //         start_line_info.top + anchor_y,
        //         right_edge - left_edge,
        //         (start_line_info.top + anchor_y) - (end_line_info.bottom + anchor_y),
        //     };
        //
        //     return output;
        // }

        /**
         * This function computes a position offset to make the inner box adhere to the horizontal and vertical
         * anchors set for a message box. The vanilla game moves the invisible outer box, resulting in unexpected
         * behaviors.
         */
        app::Vector2 compute_anchor_offset(const app::MessageBox* message_box, const app::HorizontalAnchorMode__Enum horizontal_anchor_mode, const app::VerticalAnchorMode__Enum vertical_anchor_mode) {
            // The message box itself needs to have vertical and horizontal anchor set to middle/center for this
            // function to calculate the correct offsets.
            assert(message_box->fields.TextBox->fields.verticalAnchor == app::VerticalAnchorMode__Enum::Middle);
            assert(message_box->fields.TextBox->fields.horizontalAnchor == app::HorizontalAnchorMode__Enum::Center);

            const auto textbox_rect = app::Rect{
                message_box->fields.TextBox->fields.boundsLeft,
                message_box->fields.TextBox->fields.boundsTop,
                message_box->fields.TextBox->fields.boundsRight - message_box->fields.TextBox->fields.boundsLeft,
                message_box->fields.TextBox->fields.boundsTop - message_box->fields.TextBox->fields.boundsBottom,
            };
            const auto textbox_rect_x_center = textbox_rect.m_XMin + textbox_rect.m_Width * 0.5f;
            const auto text_rect = TextBoxExtended::GetRect(message_box->fields.TextBox);
            const auto text_rect_x_center = text_rect.m_XMin + text_rect.m_Width * 0.5f;

            app::Vector2 offset{
                textbox_rect_x_center - text_rect_x_center,
                0.0,
            };

            switch (horizontal_anchor_mode) {
                case app::HorizontalAnchorMode__Enum::Left:
                    offset.x += text_rect.m_Width * 0.5f;
                    break;
                case app::HorizontalAnchorMode__Enum::Center:
                    break;
                case app::HorizontalAnchorMode__Enum::Right:
                    offset.x -= text_rect.m_Width * 0.5f;
                    break;
            }

            // Note that the height is negative because Moon
            switch (vertical_anchor_mode) {
                case app::VerticalAnchorMode__Enum::Top:
                    offset.y += text_rect.m_Height * 0.5f;
                    break;
                case app::VerticalAnchorMode__Enum::Middle:
                    break;
                case app::VerticalAnchorMode__Enum::Bottom:
                    offset.y -= text_rect.m_Height * 0.5f;
                    break;
            }

            // Moon delighted us with some non-1 scaling values on text boxes, so we need to account for that
            const auto text_box_scale = il2cpp::unity::get_local_scale(message_box->fields.TextBox);
            offset.x *= text_box_scale.x;
            offset.y *= text_box_scale.y;

            return offset;
        }
    }

    MessageBox* MessageBox::find_with_id(const int id) {
        const auto it = message_boxes.find(id);
        return it == message_boxes.end() ? nullptr : it->second;
    }

    MessageBox::MessageBox() {
        const auto controller = types::UI::get_class()->static_fields->MessageController;
        m_game_object = reinterpret_cast<app::GameObject*>(Object::Instantiate_3(reinterpret_cast<app::Object_1*>(controller->fields.HintSmallMessage)));
        add_to_container(game::GameObjectContainer::Messages, m_game_object);

        il2cpp::unity::destroy_object(il2cpp::unity::get_component_in_children<app::DestroyOnRestoreCheckpoint>(m_game_object, types::DestroyOnRestoreCheckpoint::get_class()));
        il2cpp::unity::destroy_object(il2cpp::unity::get_component_in_children<app::ParticleSuspender>(m_game_object, types::ParticleSuspender::get_class()));

        m_message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(m_game_object, types::MessageBox::get_class());
        m_scaler = il2cpp::unity::get_component_in_children<app::ScaleToTextBox>(m_game_object, types::ScaleToTextBox::get_class());

        m_message_box->fields.ShouldWriteOut = true;

        m_message_box->fields.Visibility->fields.TransitionInDuration = 0.5f;
        m_message_box->fields.Visibility->fields.TransitionOutDuration = 0.5f;
        m_message_box->fields.Visibility->fields.WaitDuration = 1.0f;
        m_message_box->fields.Visibility->fields.m_delayTime = 0.0f;
        m_message_box->fields.Visibility->fields.DestroyOnHide = false;

        m_message_box->fields.StartId = 0;
        m_message_box->fields.LockInput = false;
        m_message_box->fields.EndId = 0;
        m_message_box->fields.IsInteractive = false;
        m_message_box->fields.MessageIndex = 0;

        m_message_box->fields.WrapText = true;
        m_message_box->fields.TextBox->fields.maxHeight = 500;

        m_message_box->fields.TextBox->fields.color = app::Color{1.f, 1.f, 1.f, 1.f};
        m_message_box->fields.TextBox->fields.alignment = app::AlignmentMode__Enum::Center;
        m_message_box->fields.TextBox->fields.verticalAnchor = app::VerticalAnchorMode__Enum::Middle;
        m_message_box->fields.TextBox->fields.horizontalAnchor = app::HorizontalAnchorMode__Enum::Center;
        m_message_box->fields.TextBox->fields.LineSpacing = 1.f;
        m_message_box->fields.TextBox->fields.m_initializeAfterEnabling = true;

        m_message_box->fields.Visibility->fields.m_timeSpeed = -1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionOutDuration, FLT_EPSILON);

        m_message_box->fields.MessageProvider = system::create_message_provider(" ");
        app::classes::MessageBox::RefreshText_1(m_message_box);

        const auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(m_game_object, types::SoundSource::get_class());
        sound_source->fields.PlayAtStart = false;
        sound_source->fields.DestroyOnSoundEnd = false;

        il2cpp::unity::set_position(m_game_object, m_position.get());
        GameObject::SetActive(m_game_object, true);
        ScaleToTextBox::UpdateSize(m_scaler);

        m_id = ++next_message_id;
        const auto marker = types::GameObject::create();
        GameObject::ctor_1(marker, il2cpp::string_new(MESSAGE_BOX_MARKER));
        il2cpp::unity::set_parent(marker, m_game_object);
        app::Vector3 marker_id{};
        *reinterpret_cast<int*>(&marker_id.x) = m_id;
        il2cpp::unity::set_local_position(marker, marker_id);
        message_boxes.emplace(m_id, this);

        m_fade_in = Property<float>(
            [this](auto value) { m_message_box->fields.Visibility->fields.TransitionInDuration = value; },
            [this] { return m_message_box->fields.Visibility->fields.TransitionInDuration; }
        );

        m_fade_out = Property<float>(
            [this](auto value) { m_message_box->fields.Visibility->fields.TransitionOutDuration = value; },
            [this] { return m_message_box->fields.Visibility->fields.TransitionOutDuration; }
        );

        m_text_color = Property<app::Color>(
            [this](auto value) { m_message_box->fields.TextBox->fields.color = value; },
            [this] { return m_message_box->fields.TextBox->fields.color; }
        );

        m_text_line_spacing = Property<float>(
            [this](auto value) {
                m_message_box->fields.TextBox->fields.LineSpacing = value;
                app::classes::MessageBox::RefreshText_1(m_message_box);
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this] { return m_message_box->fields.TextBox->fields.LineSpacing; }
        );
        m_box_width = Property<float>(
            [this](auto value) {
                m_message_box->fields.TextBox->fields.width = value;
                app::classes::MessageBox::RefreshText_1(m_message_box);
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this] { return m_message_box->fields.TextBox->fields.width; }
        );
        m_text_alignment = Property<app::AlignmentMode__Enum>(
            [this](auto value) {
                m_message_box->fields.TextBox->fields.alignment = value;
                app::classes::MessageBox::RefreshText_1(m_message_box);
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this] { return m_message_box->fields.TextBox->fields.alignment; }
        );
        m_top_padding = Property<float>(
            [this](auto value) {
                m_scaler->fields.TopLeftPadding.y = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this] { return m_scaler->fields.TopLeftPadding.y; }
        );
        m_bottom_padding = Property<float>(
            [this](auto value) {
                m_scaler->fields.BottomRightPadding.y = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this] { return m_scaler->fields.BottomRightPadding.y; }
        );
        m_left_padding = Property<float>(
            [this](auto value) {
                m_scaler->fields.TopLeftPadding.x = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this] { return m_scaler->fields.TopLeftPadding.x; }
        );
        m_right_padding = Property<float>(
            [this](auto value) {
                m_scaler->fields.BottomRightPadding.x = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this] { return m_scaler->fields.BottomRightPadding.x; }
        );

        m_on_update_handle = game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [this](auto, auto) { on_fixed_update(); });

        // Move back the background glow a little bit so it doesn't go out of the near-plane
        const auto glow_transform = Transform::GetChild(background_transform(), 0);
        il2cpp::unity::set_local_position(glow_transform, app::Vector3 {0.5f, 0.4f, 0.f});  // Default value but with z = 0

        // Hide background initially to prevent the background being visible before
        // the message box scaler has run. We're updating this in render_text_box()
        GameObject::SetActive(il2cpp::unity::get_game_object(background_transform()), false);
    }

    MessageBox::~MessageBox() {
        message_boxes.erase(m_id);
        if (get_visibility() == Visibility::Hidden) {
            il2cpp::unity::destroy_object(m_game_object);
        }
        else {
            if (m_message_box->fields.Visibility->fields.m_timeSpeed >= 0.0f) {
                // We want messages to fade away gradually when deleted.
                // If this is not desired then call hide(true) first.
                hide();
            }

            m_message_box->fields.Visibility->fields.DestroyOnHide = true;
        }
    }

    void MessageBox::set_name(const std::string_view name) {
        m_name = std::string(name);
        il2cpp::unity::set_object_name(m_game_object, name);
    }

    app::Rect MessageBox::text_bounds() const {
        const auto text_box = m_message_box->fields.TextBox;
        return CatlikeCoding::TextBox::TextBox::GetRealTextBoxLocalRect(text_box);
    }

    app::Rect MessageBox::bounds() const {
        const auto text_box = m_message_box->fields.TextBox;
        return {
                text_box->fields.boundsLeft,
                text_box->fields.boundsBottom,
                text_box->fields.boundsRight - text_box->fields.boundsLeft,
                text_box->fields.boundsTop - text_box->fields.boundsBottom,
        };
    }

    void MessageBox::render_text_box() {
        auto new_text = m_text.get();

        replace_all(new_text, "\\n", "\n");
        trim(new_text);
        if (new_text.empty()) {
            new_text = " ";
        }

        auto should_recache = false;

        const auto new_show_box = m_show_background.get();
        if (m_cached_show_box != new_show_box) {
            m_cached_show_box = new_show_box;
            should_recache = true;
            GameObject::SetActive(il2cpp::unity::get_game_object(background_transform()), new_show_box);
        }

        if (m_cached_text != new_text) {
            m_cached_text = new_text;
            text_style::create_styles(m_message_box->fields.TextBox, m_cached_text);
            m_message_box->fields.MessageProvider = core::api::system::create_message_provider(m_cached_text);
            app::classes::MessageBox::RefreshText_1(m_message_box);
            should_recache = true;
        }

        if (should_recache) {
            ScaleToTextBox::UpdateSize(m_scaler);

            // Moon code alert!
            // Recache also calls Cache, but it calls SetOpacity before calling Cache, and SetOpacity
            // expects m_renderers to be initialized, but it is initialized by Cache. Fun!
            if (m_message_box->fields.Visibility->fields.m_renderers == nullptr) {
                MessageBoxVisibility::Cache(m_message_box->fields.Visibility);
            }

            MessageBoxVisibility::Recache(m_message_box->fields.Visibility);
        }
    }

    app::Transform* MessageBox::background_transform() const {
        const auto transform = il2cpp::unity::get_transform(m_game_object);
        return Transform::GetChild(transform, 2);
    }

    void MessageBox::on_fixed_update() {
        if (get_visibility() == Visibility::Hidden) {
            // Nothing to update here.
            return;
        }

        render_text_box();

        auto pos = m_position.get();
        switch (m_coordinate_system.get()) {
            case CoordinateSystem::World: {
                pos = world_to_ui_position(pos);
                break;
            }
            case CoordinateSystem::Relative: {
                const auto [left, top, width, height] = screen_position::get_rect();
                pos.x = left + pos.x * width;
                pos.y = top - pos.y * height;
                break;
            }
            case CoordinateSystem::Absolute: {
                break;
            }
        }

        const auto anchor_offset = compute_anchor_offset(m_message_box, m_box_horizontal_anchor.get(), m_box_vertical_anchor.get());
        pos.x += anchor_offset.x;
        pos.y += anchor_offset.y;

        const auto transform = il2cpp::unity::get_transform(m_game_object);
        Transform::set_position(transform, pos);
        // We don't want to automatically hide messages after we show them.
        if (m_message_box->fields.Visibility->fields.m_timeSpeed > 0) {
            m_message_box->fields.Visibility->fields.m_delayTime = FLT_MAX;
        }
    }

    MessageBox::Visibility MessageBox::get_visibility() {
        if (m_message_box == nullptr) { // NOLINT
            return Visibility::Hidden;
        }

        if (m_message_box->fields.Visibility->fields.m_time >= 1.0f) {
            return Visibility::Visible;
        }

        if (m_message_box->fields.Visibility->fields.m_time <= 0.0f) {
            return Visibility::Hidden;
        }

        if (m_message_box->fields.Visibility->fields.m_timeSpeed < 0.0f) {
            return Visibility::FadingOut;
        }

        return Visibility::FadingIn;
    }

    void MessageBox::show(const bool instant, const bool play_sound) {
        const auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(m_game_object, types::SoundSource::get_class());
        if (play_sound) {
            SoundSource::Play_2(sound_source);
        }

        m_message_box->fields.Visibility->fields.m_delayTime = FLT_MAX;
        m_message_box->fields.Visibility->fields.WaitDuration = FLT_MAX;
        m_message_box->fields.Visibility->fields.m_timeSpeed = 1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionInDuration, FLT_EPSILON);
        m_message_box->fields.Visibility->fields.m_time = instant ? 2.f : 0.0f;
        on_fixed_update();
    }

    void MessageBox::hide(const bool instant) const {
        m_message_box->fields.Visibility->fields.m_timeSpeed = -1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionOutDuration, FLT_EPSILON);
        m_message_box->fields.Visibility->fields.m_delayTime = 0.0f;
        m_message_box->fields.Visibility->fields.WaitDuration = 0.0f;
        m_message_box->fields.Visibility->fields.m_time = instant ? 0.0f : std::min(m_message_box->fields.Visibility->fields.m_time, 1.0f);
        MessageBoxVisibility::set_IsSuspended(m_message_box->fields.Visibility, false);
    }

    IL2CPP_INTERCEPT(void, ScaleToTextBox, UpdateSize, app::ScaleToTextBox * this_ptr) {
        next::ScaleToTextBox::UpdateSize(this_ptr);

        if (this_ptr->fields.Background != nullptr) {
            auto position = il2cpp::unity::get_local_position(this_ptr->fields.Background);
            position.z = -3.f;
            il2cpp::unity::set_local_position(this_ptr->fields.Background, position);
        }
    }
} // namespace core::api::messages
