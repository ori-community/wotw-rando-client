#include <Core/api/game/game.h>
#include <Core/api/messages/message_box.h>
#include <Core/api/messages/text_style.h>
#include <Core/api/screen_position.h>
#include <Core/api/system/message_provider.h>
#include <Core/utils/position_converter.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/UnityEngine/AnimationCurve.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/methods/MessageBoxVisibility.h>
#include <Modloader/app/methods/ScaleToTextBox.h>
#include <Modloader/app/methods/SoundSource.h>
#include <Modloader/app/methods/TextBoxExtended.h>
#include <Modloader/app/methods/UberShaderRenderQueue.h>
#include <Modloader/app/methods/UnityEngine/GameObject.h>
#include <Modloader/app/methods/UnityEngine/Object.h>
#include <Modloader/app/methods/UnityEngine/Transform.h>
#include <Modloader/app/methods/UnityEngine/Renderer.h>
#include <Modloader/app/methods/UberShaderAPI.h>
#include <Modloader/app/types/DisableRendererWhenOutOfFrustrum.h>
#include <Modloader/app/types/DestroyOnRestoreCheckpoint.h>
#include <Modloader/app/types/UberShaderRuntimeRenderOrder.h>
#include <Modloader/app/types/MessageBox.h>
#include <Modloader/app/types/ParticleSuspender.h>
#include <Modloader/app/types/ScaleToTextBox.h>
#include <Modloader/app/types/SoundSource.h>
#include <Modloader/app/types/UI.h>
#include <Modloader/modloader.h>
#include <Modloader/windows_api/console.h>

#include "Core/api/scenes/scene_load.h"
#include "Core/enums/layer.h"


using namespace modloader;
using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace core::api::messages {
    namespace {
        constexpr int MAX_SOUNDS_PER_FRAME = 4;

        int sounds_played_this_frame = 0;
        int next_message_id = 0;
        std::unordered_map<int, MessageBox*> message_boxes;

        [[maybe_unused]]
        auto on_after_unity_update = game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [](auto, auto) {
            sounds_played_this_frame = 0;
        });

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
        il2cpp::unity::set_object_name(m_game_object, "MessageBox");

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

        // Remove parallax
        const auto text_go = il2cpp::unity::find_child(m_game_object, "text");
        il2cpp::unity::set_local_position(text_go, {0, 0, 0});
        const auto background_texture_go = il2cpp::unity::find_child(m_game_object, std::vector<std::string_view>{"background", "hintMessageBackgroundB (1)"});
        il2cpp::unity::set_local_position(background_texture_go, {0.5, 0.5, 0});

        GameObject::SetActive(m_game_object, true);
        ScaleToTextBox::UpdateSize(m_scaler);

        m_id = ++next_message_id;
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

        m_position_effect = reactivity::watch_effect()
            .effect(m_position)
            .after([this] {
                m_transform_dirty = true;
            })
            .finalize();

        m_coordinate_system_effect = reactivity::watch_effect()
            .effect([this] {
                const auto should_disable_renderer_when_out_of_frustrum_component_exist = m_coordinate_system.get() == CoordinateSystem::World;
                const auto does_disable_renderer_when_out_of_frustrum_component_exist = m_disable_renderer_when_out_of_frustrum != nullptr;

                if (should_disable_renderer_when_out_of_frustrum_component_exist != does_disable_renderer_when_out_of_frustrum_component_exist) {
                    if (should_disable_renderer_when_out_of_frustrum_component_exist) {
                        m_disable_renderer_when_out_of_frustrum = il2cpp::unity::add_component<app::DisableRendererWhenOutOfFrustrum>(m_game_object, types::DisableRendererWhenOutOfFrustrum::get_class());
                        m_transform_dirty = true;
                    } else {
                        il2cpp::unity::destroy_object(m_disable_renderer_when_out_of_frustrum);
                        m_disable_renderer_when_out_of_frustrum = nullptr;
                    }
                }
            })
            .finalize();

        m_on_fixed_update_handle = game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [this](auto, auto) { on_fixed_update(); });
        m_on_after_unity_update_handle = game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::After, [this](auto, auto) { on_after_unity_update(); });
        m_on_refresh_input_controls_handle = game::event_bus().register_handler(GameEvent::RefreshInputControls, EventTiming::After, [this](auto, auto) { m_renderers_dirty = true; });

        // Move back the background glow a little bit so it doesn't go out of the near-plane
        const auto glow_transform = Transform::GetChild(background_transform(), 0);
        il2cpp::unity::set_local_position(glow_transform, app::Vector3 {0.5f, 0.4f, 0.f});  // Default value but with z = 0

        // Hide background initially to prevent the background being visible before
        // the message box scaler has run. We're updating this in render_text_box()
        GameObject::SetActive(il2cpp::unity::get_game_object(background_transform()), false);
    }

    MessageBox::~MessageBox() {
        message_boxes.erase(m_id);
        if (get_visibility() == Visibility::Hidden || !il2cpp::unity::get_active(m_game_object)) {
            il2cpp::unity::destroy_object(m_game_object);
        } else {
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

    app::Rect MessageBox::bounding_box() const {
        if (m_message_box == nullptr) {
            return app::Rect{};
        }

        auto top_expand = m_scaler->fields.TopLeftPadding.y;
        auto left_expand = m_scaler->fields.TopLeftPadding.x;
        auto right_expand = m_scaler->fields.BottomRightPadding.x;
        auto bottom_expand = m_scaler->fields.BottomRightPadding.y;

        auto rect = TextBoxExtended::GetRect(m_message_box->fields.TextBox);

        rect.m_XMin -= left_expand;
        rect.m_Width += left_expand + right_expand;
        rect.m_YMin -= bottom_expand;
        rect.m_Height -= bottom_expand + top_expand;  // m_Height is negative

        return rect;
    }

    void MessageBox::render_text(const std::string& text) {
        text_style::create_styles(m_message_box->fields.TextBox, text);
        m_message_box->fields.MessageProvider = core::api::system::create_message_provider(text);
        app::classes::MessageBox::RefreshText_1(m_message_box);

        update_game_object_layers();
        m_renderers_dirty = false;
    }

    void MessageBox::render_message_box_if_required() {
        const auto new_text = m_text.get();
        auto should_recache = false;

        const auto new_show_background = m_show_background.get();
        if (m_cached_show_box != new_show_background) {
            m_cached_show_box = new_show_background;
            should_recache = true;
            GameObject::SetActive(il2cpp::unity::get_game_object(background_transform()), new_show_background);
        }

        if (m_renderers_dirty || m_cached_text != new_text) {
            m_cached_text = new_text;
            render_text(m_cached_text);
            should_recache = true;
            update_transform();
        }

        if (should_recache) {
            ScaleToTextBox::UpdateSize(m_scaler);

            // If m_rendererAlphas is null, the MessageBoxVisibility component hasn't started yet.
            // The MessageBoxVisibility component will do the initial invocation of Cache() in its Start() method.
            if (m_message_box->fields.Visibility->fields.m_rendererAlphas != nullptr) {
                // Moon code alert!
                // Recache also calls Cache, but it calls SetOpacity before calling Cache, and SetOpacity
                // expects m_renderers to be initialized, but it is initialized by Cache. Fun!
                if (m_message_box->fields.Visibility->fields.m_renderers == nullptr) {
                    MessageBoxVisibility::Cache(m_message_box->fields.Visibility);
                }

                MessageBoxVisibility::Recache(m_message_box->fields.Visibility);

                sort_renderers();
            }
        }
    }

    app::Transform* MessageBox::background_transform() const {
        const auto transform = il2cpp::unity::get_transform(m_game_object);
        return Transform::GetChild(transform, 2);
    }

    void MessageBox::update_transform() {
        auto pos = m_position.get();
        auto scale = app::Vector3{1, 1, 1};

        switch (m_coordinate_system.get()) {
            case CoordinateSystem::World: {
                scale = app::Vector3{3, 3, 3};
                break;
            }
            case CoordinateSystem::Screen: {
                const auto [left, top, width, height] = screen_position::get_rect();
                pos.x = left + pos.x * width;
                pos.y = top - pos.y * height;
                break;
            }
            case CoordinateSystem::UI: {
                break;
            }
        }

        const auto anchor_offset = compute_anchor_offset(m_message_box, m_box_horizontal_anchor.get(), m_box_vertical_anchor.get());
        pos.x += anchor_offset.x;
        pos.y += anchor_offset.y;

        const auto transform = il2cpp::unity::get_transform(m_game_object);

        Transform::set_position(transform, pos);
        Transform::set_localScale(transform, scale);
        m_message_box->fields.Visibility->fields.m_originalScale = scale;

        if (m_disable_renderer_when_out_of_frustrum != nullptr) {
            m_disable_renderer_when_out_of_frustrum->fields.m_bounds.m_Center = pos;
            m_disable_renderer_when_out_of_frustrum->fields.m_bounds.m_Extents.x = 100.f;
            m_disable_renderer_when_out_of_frustrum->fields.m_bounds.m_Extents.y = 100.f;
        }

        m_transform_dirty = false;
    }

    void MessageBox::on_fixed_update() const {
        if (!il2cpp::unity::get_active(m_game_object)) {
            return;
        }

        if (m_message_box == nullptr) {
            return;
        }

        // We don't want to automatically hide messages after we show them.
        if (m_message_box->fields.Visibility->fields.m_timeSpeed > 0 && m_message_box->fields.Visibility->fields.m_time >= 1.f) {
            m_message_box->fields.Visibility->fields.m_delayTime = FLT_MAX;
        }

        sort_renderers();
    }

    void MessageBox::on_after_unity_update() {
        if (!il2cpp::unity::get_active(m_game_object)) {
            return;
        }

        if (get_visibility() == Visibility::Hidden) {
            // Nothing to update here.
            return;
        }

        render_message_box_if_required();

        if (m_transform_dirty) {
            update_transform();
        }
    }

    void MessageBox::sort_renderers() const {
        for (auto& runtime_render_order: il2cpp::unity::get_components_in_children<app::UberShaderRuntimeRenderOrder>(m_game_object, types::UberShaderRuntimeRenderOrder::get_class())) {
            il2cpp::unity::destroy_object(runtime_render_order);
        }

        if (m_message_box->fields.Visibility->fields.m_renderers == nullptr) {
            return;
        }

        // This maximum is a Unity limitation...
        // https://docs.unity3d.com/2022.3/Documentation/ScriptReference/Renderer-sortingOrder.html
        auto next_sort_order = 32767 - m_message_box->fields.Visibility->fields.m_renderers->max_length;
        for (auto& renderer: il2cpp::ArrayIterator(m_message_box->fields.Visibility->fields.m_renderers)) {
            Renderer::set_sortingLayerID(renderer, UberShaderRenderQueue::RenderlayerFromZ(-2));
            Renderer::set_sortingOrder(renderer, ++next_sort_order);

            const auto depth_flip_screen = UberShaderAPI::GetVector(renderer, app::UberShaderProperty_Vector__Enum::DepthFlipScreen);
            UberShaderAPI::SetVector_1(renderer, app::UberShaderProperty_Vector__Enum::DepthFlipScreen, {-2, depth_flip_screen.y, depth_flip_screen.z, depth_flip_screen.w});
        }
    }

    void MessageBox::update_game_object_layers() const {
        il2cpp::unity::set_layer_recursively(
            m_game_object,
            static_cast<int32_t>(
                m_coordinate_system.get() == CoordinateSystem::World
                    ? Layer::Solids
                    : Layer::UI
            )
        );
    }

    MessageBox::Visibility MessageBox::get_visibility() const {
        if (m_message_box == nullptr) {
            return Visibility::Hidden;
        }

        if (m_message_box->fields.Visibility->fields.m_time >= 1.0f) {
            return Visibility::Visible;
        }

        if (m_message_box->fields.Visibility->fields.m_time < 0.0f) {
            return Visibility::Hidden;
        }

        if (m_message_box->fields.Visibility->fields.m_timeSpeed < 0.0f) {
            return Visibility::FadingOut;
        }

        if (m_message_box->fields.Visibility->fields.m_timeSpeed == 0.0f) {
            return Visibility::Hidden;
        }

        return Visibility::FadingIn;
    }

    void MessageBox::show(const bool instant, const bool play_sound, bool use_subtle_scale_transition) {
        const auto sound_source = il2cpp::unity::get_component_in_children<app::SoundSource>(m_game_object, types::SoundSource::get_class());
        if (play_sound) {
            if (sounds_played_this_frame < MAX_SOUNDS_PER_FRAME) {
                SoundSource::Play_2(sound_source);
                ++sounds_played_this_frame;
            }
        }

        m_message_box->fields.Visibility->fields.m_delayTime = FLT_MAX;
        m_message_box->fields.Visibility->fields.WaitDuration = FLT_MAX;
        m_message_box->fields.Visibility->fields.m_timeSpeed = 1.0f / std::max(m_message_box->fields.Visibility->fields.TransitionInDuration, FLT_EPSILON);
        m_message_box->fields.Visibility->fields.m_time = instant ? 2.f : 0.0f;

        if (use_subtle_scale_transition) {
            m_message_box->fields.Visibility->fields.ScaleIn = UnityEngine::AnimationCurve::EaseInOut(0.f, 0.98f, 1.f, 1.f);
        }

        render_text(m_text.get());
        update_transform();
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
            position.z = 0.f;
            il2cpp::unity::set_local_position(this_ptr->fields.Background, position);
        }
    }
} // namespace core::api::messages
