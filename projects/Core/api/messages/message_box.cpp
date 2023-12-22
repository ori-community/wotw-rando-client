#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/messages/text_style.h>
#include <Core/api/system/message_provider.h>
#include <Core/utils/position_converter.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/MessageBoxVisibility.h>
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
                return {-5, 3, 0};
            case ScreenPosition::TopCenter:
                return {0, 3, 0};
            case ScreenPosition::TopRight:
                return {5, 3, 0};
            case ScreenPosition::MiddleLeft:
                return {-5, 0, 0};
            case ScreenPosition::MiddleCenter:
                return {0, 0, 0};
            case ScreenPosition::MiddleRight:
                return {5, 0, 0};
            case ScreenPosition::BottomLeft:
                return {-5, -3, 0};
            case ScreenPosition::BottomCenter:
                return {0, -2.5, 0};
            case ScreenPosition::BottomRight:
                return {5, -3, 0};
        }
    }

    MessageBox::MessageBox() {
        const auto controller = types::UI::get_class()->static_fields->MessageController;
        m_game_object = reinterpret_cast<app::GameObject*>(Object::Instantiate_3(reinterpret_cast<app::Object_1*>(controller->fields.HintSmallMessage)));
        game::add_to_container(game::RandoContainer::Messages, m_game_object);

        il2cpp::unity::destroy_object(il2cpp::unity::get_component_in_children<app::DestroyOnRestoreCheckpoint>(m_game_object, types::DestroyOnRestoreCheckpoint::get_class()));

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

        const auto transform = il2cpp::unity::get_transform(m_game_object);
        Transform::set_position(transform, m_position.get());
        GameObject::SetActive(m_game_object, true);
        ScaleToTextBox::UpdateSize(m_scaler);

        m_fade_in = Property<float>(
            [this](auto value) { m_message_box->fields.Visibility->fields.TransitionInDuration = value; },
            [this] { return m_message_box->fields.Visibility->fields.TransitionInDuration; }
        );

        m_fade_out = Property<float>(
            [this](auto value) { m_message_box->fields.Visibility->fields.TransitionOutDuration = value; },
            [this] { return m_message_box->fields.Visibility->fields.TransitionOutDuration; }
        );

        m_color = Property<app::Color>(
            [this](auto value) { m_message_box->fields.TextBox->fields.color = value; },
            [this] { return m_message_box->fields.TextBox->fields.color; }
        );

        m_line_spacing = Property<float>(
                [this](auto value) {
                    m_message_box->fields.TextBox->fields.LineSpacing = value;
                    ScaleToTextBox::UpdateSize(m_scaler);
                },
                [this] { return m_message_box->fields.TextBox->fields.LineSpacing; }
        );
        m_alignment = Property<app::AlignmentMode__Enum>(
                [this](auto value) {
                    m_message_box->fields.TextBox->fields.alignment = value;
                    ScaleToTextBox::UpdateSize(m_scaler);
                },
                [this] { return m_message_box->fields.TextBox->fields.alignment; }
        );
        m_horizontal_anchor = Property<app::HorizontalAnchorMode__Enum>(
                [this](auto value) {
                    m_message_box->fields.TextBox->fields.horizontalAnchor = value;
                    ScaleToTextBox::UpdateSize(m_scaler);
                },
                [this] { return m_message_box->fields.TextBox->fields.horizontalAnchor; }
        );
        m_vertical_anchor = Property<app::VerticalAnchorMode__Enum>(
                [this](auto value) {
                    m_message_box->fields.TextBox->fields.verticalAnchor = value;
                    ScaleToTextBox::UpdateSize(m_scaler);
                },
                [this] { return m_message_box->fields.TextBox->fields.verticalAnchor; }
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

        const auto new_show_box = m_show_box.get();
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

        auto pos = m_position.get();
        if (m_use_world_coordinates.get()) {
            pos = world_to_ui_position(pos);
        }

        if (m_screen_position.get().has_value()) {
            const auto offset = get_screen_position(*m_screen_position.get());
            pos = pos + offset;
        }

        const auto transform = il2cpp::unity::get_transform(m_game_object);
        Transform::set_position(transform, pos);
        // We don't want to automatically hide messages after we show them.
        if (m_message_box->fields.Visibility->fields.m_timeSpeed > 0) {
            m_message_box->fields.Visibility->fields.m_delayTime = FLT_MAX;
        }

        render_text_box();
    }

    MessageBox::Visibility MessageBox::get_visibility() {
        if (m_message_box == nullptr) { // NOLINT
            return Visibility::Hidden;
        }
        else if (m_message_box->fields.Visibility->fields.m_time >= 1.0f) {
            return Visibility::Visible;
        }
        else if (m_message_box->fields.Visibility->fields.m_time <= 0.0f) {
            return Visibility::Hidden;
        }
        else if (m_message_box->fields.Visibility->fields.m_timeSpeed < 0.0f) {
            return Visibility::FadingOut;
        }
        else {
            return Visibility::FadingIn;
        }
    }

    void MessageBox::show(const bool instant, const bool play_sound) {
        const auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(m_game_object, types::SoundSource::get_class());
        if (play_sound) {
            SoundSource::Play_2(sound_source);
        }

        m_message_box->fields.Visibility->fields.m_delayTime = FLT_MAX;
        m_message_box->fields.Visibility->fields.m_timeSpeed = 1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionInDuration, FLT_EPSILON);
        m_message_box->fields.Visibility->fields.m_time = instant ? 1.0f : 0.0f;
    }

    void MessageBox::hide(const bool instant) const {
        m_message_box->fields.Visibility->fields.m_timeSpeed = -1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionOutDuration, FLT_EPSILON);
        m_message_box->fields.Visibility->fields.m_delayTime = 0.0f;
        m_message_box->fields.Visibility->fields.m_time = instant ? 0.0f : std::min(m_message_box->fields.Visibility->fields.m_time, 1.0f);
        MessageBoxVisibility::set_IsSuspended(m_message_box->fields.Visibility, false);
    }

    IL2CPP_INTERCEPT(ScaleToTextBox, void, UpdateSize, (app::ScaleToTextBox * this_ptr)) {
        next::ScaleToTextBox::UpdateSize(this_ptr);

        if (this_ptr->fields.Background != nullptr) {
            auto position = il2cpp::unity::get_local_position(this_ptr->fields.Background);
            position.z = -3.f;
            il2cpp::unity::set_local_position(this_ptr->fields.Background, position);
        }
    }
} // namespace core::api::messages
