#include <api/game/game.h>
#include <api/messages/message_box.h>
#include <api/messages/text_style.h>
#include <api/system/message_provider.h>
#include <utils/position_converter.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/ScaleToTextBox.h>
#include <Modloader/app/methods/SoundSource.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/types/DestroyOnRestoreCheckpoint.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/ScaleToTextBox.h>
#include <Modloader/app/types/SoundSource.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::api::messages {
    app::Vector3 get_screen_position(ScreenPosition position) {
        // Because these positions are always the same and OnScreenPositions
        // sometimes isn't initialized for all values we hardcode them.
        switch (position) {
            case ScreenPosition::TopLeft:
                return { -5, 3, 0 };
            case ScreenPosition::TopCenter:
                return { 0, 3, 0 };
            case ScreenPosition::TopRight:
                return { 5, 3, 0 };
            case ScreenPosition::MiddleLeft:
                return { -5, 0, 0 };
            case ScreenPosition::MiddleCenter:
                return { 0, 0, 0 };
            case ScreenPosition::MiddleRight:
                return { 5, 0, 0 };
            case ScreenPosition::BottomLeft:
                return { -5, -3, 0 };
            case ScreenPosition::BottomCenter:
                return { 0, -2.5, 0 };
            case ScreenPosition::BottomRight:
                return { 5, -3, 0 };
        }
    }

    MessageBox::MessageBox() {
        auto controller = types::UI::get_class()->static_fields->MessageController;
        m_game_object = reinterpret_cast<app::GameObject*>(Object::Instantiate_3(reinterpret_cast<app::Object_1*>(controller->fields.HintSmallMessage)));
        game::add_to_container(game::RandoContainer::Messages, m_game_object);
        // TODO: Change how alignment and anchors work for custom message boxes using this tag.
        GameObject::set_tag(m_game_object, il2cpp::string_new("rando_message"));

        il2cpp::unity::destroy_object(
            il2cpp::unity::get_component_in_children<app::DestroyOnRestoreCheckpoint>(
                m_game_object,
                types::DestroyOnRestoreCheckpoint::get_class()
            )
        );

        m_message_box = il2cpp::unity::get_component_in_children<app::MessageBox>(
            m_game_object,
            types::MessageBox::get_class()
        );
        m_scaler = il2cpp::unity::get_component_in_children<app::ScaleToTextBox>(
            m_game_object,
            types::ScaleToTextBox::get_class()
        );

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

        m_message_box->fields.TextBox->fields.color = app::Color{ 1.f, 1.f, 1.f, 1.f };
        m_message_box->fields.TextBox->fields.alignment = app::AlignmentMode__Enum::Center;
        m_message_box->fields.TextBox->fields.verticalAnchor = app::VerticalAnchorMode__Enum::Middle;
        m_message_box->fields.TextBox->fields.horizontalAnchor = app::HorizontalAnchorMode__Enum::Center;
        m_message_box->fields.TextBox->fields.LineSpacing = 1.f;
        m_message_box->fields.TextBox->fields.m_initializeAfterEnabling = true;

        m_message_box->fields.Visibility->fields.m_timeSpeed =
            -1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionOutDuration, FLT_EPSILON);

        m_message_box->fields.MessageProvider = core::api::system::create_message_provider(" ");
        app::classes::MessageBox::RefreshText_1(m_message_box);

        auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(
            m_game_object,
            types::SoundSource::get_class()
        );
        sound_source->fields.PlayAtStart = false;
        sound_source->fields.DestroyOnSoundEnd = false;

        auto transform = il2cpp::unity::get_transform(m_game_object);
        Transform::set_position(transform, m_position.get());
        GameObject::SetActive(m_game_object, true);
        ScaleToTextBox::UpdateSize(m_scaler);

        m_fade_in = DynamicValue<float>(&m_message_box->fields.Visibility->fields.TransitionInDuration);
        m_fade_out = DynamicValue<float>(&m_message_box->fields.Visibility->fields.TransitionOutDuration);
        m_color = DynamicValue<app::Color>(&m_message_box->fields.TextBox->fields.color);
        m_line_spacing = DynamicValue<float>(set_get<float>{
            [this](float value) {
                m_message_box->fields.TextBox->fields.LineSpacing = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this]() {
                return m_message_box->fields.TextBox->fields.LineSpacing;
            },
        });
        m_alignment = DynamicValue<app::AlignmentMode__Enum>(set_get<app::AlignmentMode__Enum>{
            [this](app::AlignmentMode__Enum value) {
                m_message_box->fields.TextBox->fields.alignment = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this]() {
                return m_message_box->fields.TextBox->fields.alignment;
            },
        });
        m_horizontal_anchor = DynamicValue<app::HorizontalAnchorMode__Enum>(set_get<app::HorizontalAnchorMode__Enum>{
            [this](app::HorizontalAnchorMode__Enum value) {
                m_message_box->fields.TextBox->fields.horizontalAnchor = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this]() {
                return m_message_box->fields.TextBox->fields.horizontalAnchor;
            },
        });
        m_vertical_anchor = DynamicValue<app::VerticalAnchorMode__Enum>(set_get<app::VerticalAnchorMode__Enum>{
            [this](app::VerticalAnchorMode__Enum value) {
                m_message_box->fields.TextBox->fields.verticalAnchor = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this]() {
                return m_message_box->fields.TextBox->fields.verticalAnchor;
            },
        });
        m_top_padding = DynamicValue<float>(set_get<float>{
            [this](float value) {
                m_scaler->fields.TopLeftPadding.y = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this]() {
                return m_scaler->fields.TopLeftPadding.y;
            },
        });
        m_bottom_padding = DynamicValue<float>(set_get<float>{
            [this](float value) {
                m_scaler->fields.BottomRightPadding.y = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this]() {
                return m_scaler->fields.BottomRightPadding.y;
            },
        });
        m_left_padding = DynamicValue<float>(set_get<float>{
            [this](float value) {
                m_scaler->fields.TopLeftPadding.x = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this]() {
                return m_scaler->fields.TopLeftPadding.x;
            },
        });
        m_right_padding = DynamicValue<float>(set_get<float>{
            [this](float value) {
                m_scaler->fields.BottomRightPadding.x = value;
                ScaleToTextBox::UpdateSize(m_scaler);
            },
            [this]() {
                return m_scaler->fields.BottomRightPadding.x;
            },
        });

        m_on_update_handle = game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [this](auto, auto) {
            update();
        });
    }

    MessageBox::~MessageBox() {
        if (get_visibility() == Visibility::Hidden) {
            il2cpp::unity::destroy_object(m_game_object);
        } else {
            // We want messages to fade away gradually when deleted.
            // If this is not desired then call hide(true) first.
            hide();
            m_message_box->fields.Visibility->fields.DestroyOnHide = true;
        }
    }

    app::Rect MessageBox::text_bounds() {
        const auto text_box = m_message_box->fields.TextBox;
        return CatlikeCoding::TextBox::TextBox::GetRealTextBoxLocalRect(text_box);
    }

    app::Rect MessageBox::bounds() {
        const auto text_box = m_message_box->fields.TextBox;
        return {
            text_box->fields.boundsLeft,
            text_box->fields.boundsBottom,
            text_box->fields.boundsRight - text_box->fields.boundsLeft,
            text_box->fields.boundsTop - text_box->fields.boundsBottom,
        };
    }

    void MessageBox::update_text() {
        auto new_text = m_text.get();
        replace_all(new_text, "\\n", "\n");
        trim(new_text);
        if (new_text.empty()) {
            new_text = " ";
        }

        if (m_processed_text != new_text) {
            m_processed_text = new_text;
            text_style::create_styles(m_message_box->fields.TextBox, m_processed_text);
            m_message_box->fields.MessageProvider = core::api::system::create_message_provider(m_processed_text);
            app::classes::MessageBox::RefreshText_1(m_message_box);
            ScaleToTextBox::UpdateSize(m_scaler);
        }
    }

    void MessageBox::update() {
        if (get_visibility() == Visibility::Hidden) {
            // Nothing to update here.
            return;
        }

        auto pos = m_position.get();
        if (m_use_world_coordinates.get()) {
            pos = world_to_ui_position(pos);
        }

        if (m_screen_position.get().has_value()) {
            app::Vector3 offset = get_screen_position(*m_screen_position.get());
            pos = pos + offset;
        }

        auto transform = il2cpp::unity::get_transform(m_game_object);
        Transform::set_position(transform, pos);
        // We don't want to automatically hide messages after we show them.
        m_message_box->fields.Visibility->fields.m_delayTime = FLT_MAX;
        update_text();
    }

    MessageBox::Visibility MessageBox::get_visibility() {
        if (m_message_box == nullptr) { // NOLINT
            return Visibility::Hidden;
        } else if (m_message_box->fields.Visibility->fields.m_time >= 1.0f) {
            return Visibility::Visible;
        } else if (m_message_box->fields.Visibility->fields.m_time <= 0.0f) {
            return Visibility::Hidden;
        } else if (m_message_box->fields.Visibility->fields.m_timeSpeed < 0.0f) {
            return Visibility::FadingOut;
        } else {
            return Visibility::FadingIn;
        }
    }

    void MessageBox::show(bool instant, bool play_sound) {
        auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(
            m_game_object,
            types::SoundSource::get_class()
        );
        if (play_sound) {
            app::classes::SoundSource::Play_2(sound_source);
        }

        m_message_box->fields.Visibility->fields.m_delayTime = FLT_MAX;
        m_message_box->fields.Visibility->fields.m_timeSpeed =
            1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionInDuration, FLT_EPSILON);
        if (instant) {
            m_message_box->fields.Visibility->fields.m_time = 1.0f;
        }
    }

    void MessageBox::hide(bool instant) {
        m_message_box->fields.Visibility->fields.m_timeSpeed =
            -1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionOutDuration, FLT_EPSILON);
        m_message_box->fields.Visibility->fields.m_delayTime = 0.0f;
        if (instant) {
            m_message_box->fields.Visibility->fields.m_time = 0.0f;
        }
    }

    void MessageBox::show_box(bool value) {
        auto transform = il2cpp::unity::get_transform(m_game_object);
        auto background = il2cpp::unity::get_game_object(Transform::GetChild(transform, 2));
        GameObject::SetActive(background, value);
    }
} // namespace core::api::messages
