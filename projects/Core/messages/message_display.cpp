#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/messages/message_display.h>
#include <Core/utils/position_converter.h>

#include <Modloader/app/methods/UnityEngine/Vector3.h>
#include <Modloader/il2cpp_math.h>

namespace core::messages {
    constexpr float MESSAGE_PICKUP_ANIMATION_DURATION_SECONDS = 0.4f;

    namespace {
        // Hardcoded no-show switch until we have entered the title screen and faded out.
        bool global_can_show = false;
        auto on_after_title_screen_startup = api::game::event_bus().register_handler(
            GameEvent::TitleScreenStartup,
            EventTiming::After,
            [](auto, auto) {
                global_can_show = true;
            }
        );
    } // namespace

    MessageDisplay::MessageDisplay(std::optional<int> max_line_count, std::optional<int> max_in_queue) :
        m_max_line_count(max_line_count)
        , m_max_in_queue(max_in_queue)
        , m_alignment(app::AlignmentMode__Enum::Center)
        , m_horizontal_anchor(app::HorizontalAnchorMode__Enum::Center)
        , m_vertical_anchor(app::VerticalAnchorMode__Enum::Middle)
        , m_screen_position(api::messages::ScreenPosition::MiddleCenter) {
    }

    message_handle_ptr_t MessageDisplay::push(MessageInfo info) {
        auto handle = std::make_shared<message_handle_t>();
        handle->time_left = info.duration;
        if (info.prioritized) {
            m_priority_message = {
                .info = std::move(info),
                .handle = handle,
            };
        } else {
            m_messages.push_back(
                {
                    .info = std::move(info),
                    .handle = handle,
                }
            );
        }

        return handle;
    }

    void MessageDisplay::clear() {
        m_priority_message = std::nullopt;
        m_priority_message_data = std::nullopt;
        m_messages.clear();
        m_active_messages.clear();
    }

    void MessageDisplay::update(float delta_time) {
        if (!global_can_show) {
            return;
        }

        const auto max_in_queue = m_max_in_queue.get();
        if (max_in_queue.has_value() && m_messages.size() > max_in_queue.value() && !m_active_messages.empty()) {
            m_active_messages.front().message->hide();
            m_active_messages.front().handle->state = message_handle_t::MessageState::Finished;
        }

        int total_lines = 0;
        auto cursor_position = m_position.get();
        if (m_priority_message.has_value() || m_priority_message_data.has_value()) {
            update_priority_message(total_lines, cursor_position, delta_time);
            const auto max_line_count = m_max_line_count.get();
            int total_lines_temp = total_lines;
            for (auto it = m_active_messages.begin(); it != m_active_messages.end(); ++it) {
                const auto text = trim_copy(it->info.text.get());
                total_lines_temp += static_cast<int>(std::ranges::count(text, '\n') + 1);
                if (max_line_count.has_value() && total_lines_temp >= max_line_count.value()) {
                    for (auto jit = it; jit != m_active_messages.end(); ++jit) {
                        jit->info.duration = std::max(jit->handle->active_time, 1.0f);
                        jit->handle->state = message_handle_t::MessageState::Finished;
                        jit->handle->time_left = jit->info.duration;
                        jit->handle->active_time = 0;
                        jit->message->hide(jit->info.instant_fade);
                    }

                    m_messages.insert(m_messages.begin(), it, m_active_messages.end());
                    m_active_messages.erase(it, m_active_messages.end());
                    break;
                }
            }
        }

        update_active_messages(total_lines, cursor_position, delta_time);
        update_message_queue(total_lines, cursor_position);
    }

    void MessageDisplay::update_priority_message(int& total_lines, app::Vector3& cursor_position, float delta_time) {
        if (m_priority_message.has_value()) {
            if (m_priority_message_data.has_value()) {
                m_priority_message_data->message->hide(true);
            }

            auto& data = m_priority_message.value();
            show_message_box(data, total_lines, cursor_position);
            m_priority_message_data = std::move(data);
            m_priority_message = std::nullopt;
        } else {
            auto& data = m_priority_message_data.value();
            if (!handle_active_message(data, total_lines, cursor_position, 0.5f, delta_time)) {
                m_priority_message_data = std::nullopt;
            }
        }
    }

    void MessageDisplay::update_active_messages(int& total_lines, app::Vector3& cursor_position, float delta_time) {
        for (auto it = m_active_messages.begin(); it != m_active_messages.end();) {
            auto& message_data = *it;
            const auto fade_out = m_active_messages.size() == 1 ? 0.5f : 0.1f;
            if (handle_active_message(message_data, total_lines, cursor_position, fade_out, delta_time)) {
                ++it;
            } else {
                it = m_active_messages.erase(it);
            }
        }
    }

    void MessageDisplay::update_message_queue(int& total_lines, app::Vector3& cursor_position) {
        const auto max_line_count = m_max_line_count.get();
        while (!m_messages.empty()) {
            auto& data = m_messages.front();
            const auto text = trim_copy(data.info.text.get());
            const auto message_lines = static_cast<int>(std::ranges::count(text, '\n') + 1);
            // Keep ourselves below the line count limit except if we are showing no messages.
            // If we get a message that exceeds the line count we still show it.
            if (max_line_count.has_value() && total_lines != 0 && total_lines + message_lines > max_line_count.value()) {
                break;
            }

            show_message_box(data, total_lines, cursor_position);

            // Make the last message fade out slower
            data.message->fade_out().set(m_active_messages.size() <= 1 ? 0.5f : 0.1f);

            m_active_messages.push_back(data);
            m_messages.erase(m_messages.begin());
        }
    }

    bool MessageDisplay::handle_active_message(MessageData& data, int& total_lines, app::Vector3& cursor_position, float fade_out, float delta_time) {
        update_time(data, delta_time);
        if (data.handle->state != message_handle_t::MessageState::Finished) {
            update_message_position(data, total_lines, cursor_position, delta_time);
            data.message->fade_out().set(fade_out);
            return true;
        } else {
            return false;
        }
    }

    void MessageDisplay::update_time(MessageData& data, float delta_time) {
        if (data.handle->state == message_handle_t::MessageState::Visible) {
            data.handle->active_time += delta_time;
        }

        if (data.handle->time_left.has_value()) {
            data.handle->time_left = *data.handle->time_left - delta_time;
            const auto message_visible = data.message->get_visibility() == api::messages::MessageBox::Visibility::Visible ||
                data.message->get_visibility() == api::messages::MessageBox::Visibility::FadingIn;
            if (message_visible && *data.handle->time_left <= data.message->fade_out().get()) {
                data.message->hide(data.info.instant_fade);
            }

            if (*data.handle->time_left <= 0.f) {
                data.handle->state = message_handle_t::MessageState::Finished;
                data.handle->time_left = std::optional<float>();
            }
        }
    }

    void MessageDisplay::update_message_position(MessageData& data, int& total_lines, app::Vector3& cursor_position, float delta_time) {
        const auto text = trim_copy(data.info.text.get());
        const auto message_lines = static_cast<int>(std::ranges::count(text, '\n') + 1);
        auto display_message_in_game_world = false;

        if (data.info.use_world_space) {
            // TODO: World space messages are currently unsupported
        } else {
            // Add top padding & margin
            cursor_position.y -= data.info.margins.x;
            cursor_position.y -= data.info.padding.x;

            // Animate message box movement if the message is visible
            if (data.handle->state == MessageHandle::MessageState::Visible) {
                // When this message is queued, stall it on the pickup position
                data.message->position().set(
                    modloader::math::lerp(
                        data.message->position().get(),
                        cursor_position,
                        delta_time * 15.f * std::min(1.f, data.handle->active_time * 2.0f + 0.1f)
                    )
                );
            } else {
                data.message->position().set(cursor_position);
            }

            // Add message box height and bottom padding/margin
            const auto [m_XMin, m_YMin, m_Width, m_Height] = data.message->text_bounds();
            cursor_position.y += m_Height;
            cursor_position.y -= data.info.margins.y;
            cursor_position.y -= data.info.padding.z;

            total_lines += message_lines;
        }
    }

    void MessageDisplay::show_message_box(
        MessageData& data,
        int& total_lines,
        app::Vector3& position
    ) {
        data.message = std::make_shared<api::messages::MessageBox>();
        data.message->show_box().set(data.info.show_box);
        data.message->text_processor(m_text_processor);
        data.message->text().process_and_set(data.info.text.get());
        data.message->top_padding().set(data.info.padding.x);
        data.message->left_padding().set(data.info.padding.y);
        data.message->bottom_padding().set(data.info.padding.z);
        data.message->right_padding().set(data.info.padding.w);
        data.message->alignment().set(m_alignment.get());
        data.message->horizontal_anchor().set(m_horizontal_anchor.get());
        data.message->vertical_anchor().set(m_vertical_anchor.get());
        data.message->screen_position().set(m_screen_position.get());

        update_message_position(data, total_lines, position, 0.f);
        if (data.info.pickup_position.has_value()) {
            const auto top_center = modloader::math::convert(get_screen_position(api::messages::ScreenPosition::TopCenter));
            const auto pickup_positon = data.info.pickup_position.value();
            const auto message_position = data.message->position().get();
            const auto pickup_ui_position = world_to_ui_position_2d(modloader::math::convert(pickup_positon)) - top_center;
            //pickup_ui_position.y = -pickup_ui_position.y;
            const auto distance_squared = modloader::math::distance2(pickup_ui_position, modloader::math::convert(message_position));
            if (distance_squared < m_max_distance_squared_for_message_position_animation) {
                data.message->position().set(modloader::math::convert(pickup_ui_position));
            }
        }

        if (!data.info.text.get().empty()) {
            data.message->show(false, data.info.play_sound);
        }

        data.handle->state = message_handle_t::MessageState::Visible;
    }
} // namespace core::messages
