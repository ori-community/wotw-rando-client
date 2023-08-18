#include <api/game/game.h>
#include <api/game/player.h>
#include <messages/message_display.h>
#include <utils/position_converter.h>

#include <Modloader/app/types/UI_Hints.h>
#include <Modloader/il2cpp_math.h>

namespace core::messages {
    namespace {
        // Hardcoded no-show switch until we have entered the title screen and faded out.
        bool global_can_show = false;
        auto on_after_title_screen_startup = api::game::event_bus().register_handler(GameEvent::TitleScreenStartup, EventTiming::After, [](auto, auto) {
            global_can_show = true;
        });
    } // namespace

    MessageDisplay::MessageDisplay(std::optional<int> max_line_count, std::optional<int> max_in_queue)
            : m_max_line_count(max_line_count)
            , m_max_in_queue(max_in_queue)
            , m_alignment(app::AlignmentMode__Enum::Center)
            , m_horizontal_anchor(app::HorizontalAnchorMode__Enum::Center)
            , m_vertical_anchor(app::VerticalAnchorMode__Enum::Middle)
            , m_screen_position(api::messages::ScreenPosition::MiddleCenter) {}

    message_handle MessageDisplay::push(MessageInfo info) {
        auto sync = std::make_shared<message_handle_type>();
        if (info.prioritized) {
            m_priority_message = {
                .info = std::move(info),
                .sync = sync,
            };
        } else {
            m_messages.push_back({
                .info = std::move(info),
                .sync = sync,
            });
        }

        return sync;
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
            m_active_messages.front().sync->state = message_handle_type::MessageState::Finished;
        }

        if (m_priority_message.has_value() || m_priority_message_data.has_value()) {
            if (!m_showing_priority) {
                m_showing_priority = true;
                for (auto& message : m_active_messages) {
                    message.message->hide(true);
                }
            }

            update_priority_message(delta_time);
        } else {
            if (m_showing_priority) {
                m_showing_priority = false;
                bool first = true;
                for (auto& message : m_active_messages) {
                    bool should_play = false;
                    if (first && message.info.play_sound) {
                        should_play = true;
                        first = false;
                    }

                    message.message->show(false, should_play);
                }
            }

            auto total_lines = 0;
            auto position = m_position.get();
            update_active_messages(total_lines, position, delta_time);
            update_message_queue(total_lines, position);
        }
    }

    void MessageDisplay::update_priority_message(float delta_time) {
        int total_lines = 0;
        app::Vector3 position = m_position.get();
        if (m_priority_message.has_value()) {
            if (m_priority_message_data.has_value()) {
                m_priority_message_data->message->hide(true);
            }

            auto& data = m_priority_message.value();
            populate_data(data, total_lines, position);
            m_priority_message_data = std::move(data);
            m_priority_message = std::nullopt;
        } else {
            auto& data = m_priority_message_data.value();
            if (!handle_active_message(data, total_lines, position, 0.1f, delta_time)) {
                m_priority_message_data = std::nullopt;
            }
        }
    }

    void MessageDisplay::update_active_messages(int& total_lines, app::Vector3& position, float delta_time) {
        for (auto it = m_active_messages.begin(); it != m_active_messages.end();) {
            auto& message_data = *it;
            const auto fade_out = m_active_messages.size() == 1 ? 0.5f : 0.1f;
            if (handle_active_message(message_data, total_lines, position, fade_out, delta_time)) {
                ++it;
            } else {
                it = m_active_messages.erase(it);
            }
        }
    }

    void MessageDisplay::update_message_queue(int& total_lines, app::Vector3& position) {
        const auto max_line_count = m_max_line_count.get();
        while (!m_messages.empty()) {
            auto& data = m_messages.front();
            const auto message_lines = static_cast<int>(std::count(data.info.text.begin(), data.info.text.end(), '\n') + 1);
            // Keep ourselves below the line count limit except if we are showing no messages.
            // If we get a message that exceeds the line count we still show it.
            if (max_line_count.has_value() && total_lines != 0 && total_lines + message_lines > max_line_count.value()) {
                break;
            }

            populate_data(data, total_lines, position);
            // TODO: Maybe more checks?
            if (data.info.starting_world_position.has_value()) {
                data.message->fade_in().set(0.2f);
            }

            m_active_messages.push_back(data);
            m_messages.erase(m_messages.begin());
        }
    }

    bool MessageDisplay::handle_active_message(MessageData& data, int& total_lines, app::Vector3& position, float fade_out, float delta_time) {
        update_time(data, delta_time);
        if (data.sync->state != message_handle_type::MessageState::Finished) {
            update_message_position(data, total_lines, position, delta_time);
            data.message->fade_out().set(fade_out);
            return true;
        } else {
            return false;
        }
    }

    void MessageDisplay::update_time(MessageData& data, float delta_time) {
        if (data.sync->state == message_handle_type::MessageState::Visible) {
            data.sync->active_time += delta_time;
        }

        if (data.sync->time_left.has_value()) {
            data.sync->time_left = *data.sync->time_left - delta_time;
            const auto message_visible = data.message->get_visibility() == api::messages::MessageBox::Visibility::Visible ||
                data.message->get_visibility() == api::messages::MessageBox::Visibility::FadingIn;
            if (message_visible && *data.sync->time_left <= data.message->fade_out().get()) {
                data.message->hide(data.info.instant_fade);
            }

            if (*data.sync->time_left <= 0.f) {
                data.sync->state = message_handle_type::MessageState::Finished;
                data.sync->time_left = std::optional<float>();
            }
        }
    }

    void MessageDisplay::update_message_position(MessageData& data, int& total_lines, app::Vector3& position, float delta_time) {
        const auto message_lines = static_cast<int>(std::count(data.info.text.begin(), data.info.text.end(), '\n') + 1);
        auto display_message_in_game_world = false;
        if (data.info.starting_world_position.has_value()) {
            if (m_display_in_world.get()) {
                auto distance_to_position = modloader::math::distance2(m_position.get(), data.info.starting_world_position.value());
                display_message_in_game_world = distance_to_position < m_max_length_from_position;
            } else {
                const auto player_position = api::game::player::get_position();
                auto distance_to_player = modloader::math::distance2(player_position, data.info.starting_world_position.value());
                display_message_in_game_world = distance_to_player < m_max_length_from_position;
            }
        }

        position.y -= data.info.margins.x;
        position.y -= data.info.padding.x;
        if (display_message_in_game_world) {
            const auto screen_position = m_screen_position.get();
            auto offset = screen_position.has_value()
                ? api::messages::get_screen_position(screen_position.value())
                : app::Vector3{};
            data.message->position().set(modloader::math::lerp(
                data.info.starting_world_position.value() - offset,
                position,
                delta_time * 15.f * std::min(1.f, data.sync->active_time * 2.0f + 0.1f)
            ));
        } else {
            data.message->position().set(position);
        }

        const auto bounds = data.message->text_bounds();
        position.y += bounds.m_Height;
        position.y -= data.info.margins.y;
        position.y -= data.info.padding.z;

        total_lines += message_lines;
    }

    void MessageDisplay::populate_data(
        MessageData& data,
        int& total_lines,
        app::Vector3& position
    ) {
        data.message = std::make_shared<api::messages::MessageBox>();
        data.message->show_box(data.info.show_box);
        data.message->text().set(data.info.text);
        data.message->text().text_processor(m_text_processor);
        data.message->text().set(data.info.text);
        data.message->top_padding().set(data.info.padding.x);
        data.message->left_padding().set(data.info.padding.y);
        data.message->bottom_padding().set(data.info.padding.z);
        data.message->right_padding().set(data.info.padding.w);
        data.message->alignment().set(m_alignment.get());
        data.message->horizontal_anchor().set(m_horizontal_anchor.get());
        data.message->vertical_anchor().set(m_vertical_anchor.get());
        data.message->screen_position().set(m_screen_position.get());
        update_message_position(data, total_lines, position, 0.f);
        if (!data.info.text.empty()) {
            data.message->show(false, data.info.play_sound);
        }

        data.sync = std::make_shared<message_handle_type>();
        data.sync->state = message_handle_type::MessageState::Visible;
        data.sync->time_left = data.info.duration;
    }
} // namespace core::messages
