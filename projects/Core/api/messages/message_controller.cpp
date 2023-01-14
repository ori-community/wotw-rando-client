#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/api/messages/message_controller.h>
#include <Core/utils/position_converter.h>

#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/types/UI_Hints.h>
#include <Modloader/il2cpp_math.h>

#include <vector>

namespace core::api::messages {
    struct CentralMessageData {
        std::shared_ptr<MessageBox> message;
        CentralMessageInfo info;
        std::shared_ptr<MessageController::SyncHandle> sync;
    };

    struct MessageData {
        std::shared_ptr<MessageBox> message;
        MessageInfo info;
        std::shared_ptr<MessageController::SyncHandle> sync;
    };

    template <typename T>
    void update_time(T& m_data, float dt) {
        if (m_data.sync->state == MessageController::MessageState::Showing) {
            m_data.sync->active_time += dt;
        }

        if (m_data.sync->time_left.has_value()) {
            m_data.sync->time_left = *m_data.sync->time_left - dt;
            const auto message_visible = m_data.message->get_visibility() == MessageBox::Visibility::Visible ||
                m_data.message->get_visibility() == MessageBox::Visibility::FadingIn;
            if (message_visible && *m_data.sync->time_left <= m_data.message->fade_out().get()) {
                m_data.message->hide(m_data.info.instant);
            }

            if (*m_data.sync->time_left <= 0.f) {
                m_data.sync->state = MessageController::MessageState::Finished;
                m_data.sync->time_left = std::optional<float>();
            }
        }
    }

    class MessageQueue {
    public:
        void update(float dt) {
            if (!m_current.has_value()) {
                if (!m_priority_data.empty()) {
                    m_current = m_priority_data.front();
                    m_priority_data.erase(m_priority_data.begin());
                } else if (!m_normal_data.empty()) {
                    m_current = m_normal_data.front();
                    m_normal_data.erase(m_normal_data.begin());
                }
            }

            if (m_current.has_value()) {
                if (!m_current->info.priority && !m_priority_data.empty()) {
                    // Switch out normal message for prioritized, pausing it.
                    m_current->message->hide(true);
                    m_current->sync->state = MessageController::MessageState::Paused;
                    m_normal_data.insert(m_normal_data.begin(), *m_current);
                    m_current = m_priority_data.front();
                    m_priority_data.erase(m_priority_data.begin());
                }

                update_time(*m_current, dt);
                switch (m_current->sync->state) {
                    case MessageController::MessageState::Paused:
                        m_current->sync->state = MessageController::MessageState::Showing;
                        m_current->message->show(m_current->info.instant, m_current->info.play_sound);
                        break;
                    case MessageController::MessageState::Waiting:
                        m_current->sync->time_left = m_current->info.duration;
                        m_current->sync->state = MessageController::MessageState::Showing;
                        m_current->message->show(m_current->info.instant, m_current->info.play_sound);
                        break;
                    case MessageController::MessageState::Finished:
                        // Clear m_current, so it gets set next time update is run.
                        m_current->message->hide(m_current->info.instant);
                        m_current = std::optional<MessageData>();
                        break;
                    default:
                        break;
                }
            }
        }

        MessageController::sync_handle add(std::shared_ptr<MessageBox> message, MessageInfo info) {
            auto& collection = info.priority ? m_priority_data : m_normal_data;
            auto sync = std::make_shared<MessageController::SyncHandle>();
            collection.push_back({
                std::move(message),
                std::move(info),
                sync,
            });

            return sync;
        }

    private:
        std::vector<MessageData> m_priority_data;
        std::vector<MessageData> m_normal_data;
        std::optional<MessageData> m_current;
    };

    struct MessageController::MessageControllerData {
        int max_line_count = 5;
        int max_messages_queued = 5;

        std::unordered_map<std::string, MessageQueue> queues;
        std::vector<MessageData> unqueued_messages;

        std::optional<CentralMessageInfo> last_central_message;
        std::vector<CentralMessageInfo> priority_central_messages;
        std::vector<CentralMessageInfo> normal_central_messages;
        std::vector<CentralMessageData> active_central_messages;

        common::registration_handle update_handle;
    };

    MessageController::MessageController()
            : m_data(std::make_unique<MessageControllerData>()) {
        m_data->update_handle = game::event_bus().register_handler(GameEvent::FixedUpdate, EventTiming::After, [this](auto, auto) {
            update();
        });
    }

    MessageController::~MessageController() = default;

    std::shared_ptr<MessageController::SyncHandle> MessageController::queue_message(std::shared_ptr<MessageBox> message, MessageInfo info) {
        sync_handle sync;
        if (info.queue.has_value()) {
            auto& queue = m_data->queues[*info.queue];
            sync = queue.add(std::move(message), std::move(info));
        } else {
            sync = std::make_shared<MessageController::SyncHandle>();
            sync->state = MessageState::Showing;
            sync->time_left = info.duration;
            message->show(info.instant, info.play_sound);
            m_data->unqueued_messages.push_back({
                std::move(message),
                std::move(info),
                sync,
            });
        }

        return sync;
    }

    void MessageController::queue_central_message(CentralMessageInfo info) {
        if (info.should_save_as_last) {
            m_data->last_central_message = info;
        }

        auto& collection = info.prioritized ? m_data->priority_central_messages : m_data->normal_central_messages;
        collection.push_back(std::move(info));
    }

    void MessageController::limit_central_queue() {
        if (m_data->normal_central_messages.size() > m_data->max_messages_queued && !m_data->active_central_messages.empty()) {
            m_data->active_central_messages.front().message->hide();
            m_data->active_central_messages.front().sync->state = MessageState::Finished;
        }
    }

    void MessageController::requeue_last_central_message() {
        if (m_data->last_central_message.has_value()) {
            m_data->last_central_message->world_position = std::nullopt;
            m_data->priority_central_messages.push_back(*m_data->last_central_message);
        } else {
            m_data->priority_central_messages.push_back({
                .text = "No pickups collected yet, good Luck!",
                .duration = 5.f,
                .prioritized = true,
            });
        }

        limit_central_queue();
    }

    void MessageController::clear_central_messages() {
        m_data->last_central_message = std::nullopt;
        m_data->priority_central_messages.clear();
        m_data->normal_central_messages.clear();
        m_data->active_central_messages.clear();
    }

    struct MessageBoxSize {
        float padding_top = 0.0f;
        float text_height = 0.0f;

        MessageBoxSize(float padding_top, float text_height) {
            this->padding_top = padding_top;
            this->text_height = text_height;
        }
    };

    MessageBoxSize calculate_message_box_size(int lines) {
        const float line_height = 0.33f;
        const float message_padding = 0.25f;
        const float padding_line_multiplier = 1.05f;

        const auto y_padding = message_padding * 0.5f * static_cast<float>(lines) * padding_line_multiplier;

        return { y_padding, static_cast<float>(lines) * line_height };
    }

    int active_hint_lines() {
        const auto ui_hints = app::classes::types::UI_Hints::get_class();
        const auto m_current_hint_message_box = ui_hints->static_fields->m_currentHint;

        if (!il2cpp::unity::is_valid(m_current_hint_message_box)) {
            return 0;
        }

        const auto text = il2cpp::convert_csstring(app::classes::MessageBox::get_CurrentMessage(m_current_hint_message_box));
        const auto lines = std::count(text.begin(), text.end(), '\n');

        return static_cast<int>(lines) + 1;
    }

    void MessageController::update() {
        // Normal messages
        const float dt = game::delta_time();
        for (auto queue : m_data->queues) {
            queue.second.update(dt);
        }

        for (auto it = m_data->unqueued_messages.begin(); it != m_data->unqueued_messages.end();) {
            update_time(*it, dt);
            if (it->sync->state == MessageState::Finished) {
                it = m_data->unqueued_messages.erase(it);
            } else {
                ++it;
            }
        }

        // Central messages.
        auto total_lines = 0;
        auto y_position = 0.3f;
        if (app::classes::Game::UI_Hints::get_IsShowingHint()) {
            auto hint_size = calculate_message_box_size(active_hint_lines());
            y_position -= hint_size.padding_top * 2;
            y_position -= hint_size.text_height;
            y_position -= 0.3f; // Gap
        }

        const auto player_position = game::player::get_position();
        for (auto it = m_data->active_central_messages.begin(); it != m_data->active_central_messages.end();) {
            auto& message_data = *it;
            update_time(message_data, dt);
            if (message_data.sync->state != MessageState::Finished) {
                const auto message_lines = static_cast<int>(std::count(message_data.info.text.begin(), message_data.info.text.end(), '\n') + 1);
                const auto message_box_size = calculate_message_box_size(message_lines);

                y_position -= message_box_size.padding_top;
                auto display_message_in_game_world = false;
                if (message_data.info.world_position.has_value()) {
                    auto distance_to_player = modloader::math::distance2(player_position, message_data.info.world_position.value());
                    display_message_in_game_world = distance_to_player < 20.f;
                }

                const auto target_position = app::Vector3{ 0, y_position, 0 };
                if (display_message_in_game_world) {
                    const auto start_position = app::Vector3{ message_data.info.world_position->x, message_data.info.world_position->y, 0.f };

                    message_data.message->position().set(modloader::math::lerp(
                        start_position,
                        target_position,
                        dt * 15.f * std::min(1.f, message_data.sync->active_time * 2.0f + 0.1f)
                    ));
                } else {
                    message_data.message->position().set(target_position);
                }

                total_lines += message_lines;
                y_position -= message_box_size.text_height;
                y_position -= message_box_size.padding_top;

                message_data.message->fade_out().set(m_data->active_central_messages.size() == 1 ? 0.5f : 0.1f);
                ++it;
            } else {
                it = m_data->active_central_messages.erase(it);
            }
        }

        while (total_lines < m_data->max_line_count && !(m_data->normal_central_messages.empty() && m_data->priority_central_messages.empty())) {
            auto& collection = (m_data->priority_central_messages.empty() ? m_data->normal_central_messages : m_data->priority_central_messages);
            auto message_data = collection.front();
            const auto message_lines = static_cast<int>(std::count(message_data.text.begin(), message_data.text.end(), '\n') + 1);
            if (total_lines != 0 && total_lines + message_lines > m_data->max_line_count) {
                break;
            }

            collection.erase(collection.begin());
            auto display_message_in_game_world = false;
            if (message_data.world_position.has_value()) {
                auto distance_to_player = modloader::math::distance2(player_position, message_data.world_position.value());
                display_message_in_game_world = distance_to_player < 20.f;
            }

            const auto message_box = std::make_shared<MessageBox>();
            message_box->alignment().set(app::AlignmentMode__Enum::Center);
            message_box->show_box(message_data.show_box);
            message_box->text().set(message_data.text);

            message_box->text().text_processor(m_text_processor);
            if (display_message_in_game_world) {
                app::Vector3 offset{ 0 };
                get_screen_position(ScreenPosition::TopCenter, &offset);
                const auto position = world_to_ui_position(message_data.world_position.value()) - offset;
                message_box->position().set(position);
                message_box->fade_in().set(0.2f);
            } else {
                const auto message_box_size = calculate_message_box_size(message_lines);
                y_position -= message_box_size.padding_top;
                message_box->position().set({ 0.f, y_position, 0.f });
                y_position -= message_box_size.text_height;
                y_position -= message_box_size.padding_top;
            }

            message_box->screen_position().set(ScreenPosition::TopCenter);
            total_lines += message_lines;
            message_box->text().set(message_data.text);
            message_box->vertical_anchor().set(app::VerticalAnchorMode__Enum::Top);
            message_box->top_padding().set(0);
            message_box->bottom_padding().set(0);
            message_box->left_padding().set(1);
            message_box->right_padding().set(1);
            if (!message_data.text.empty()) {
                message_box->show();
            }

            const auto sync = std::make_shared<SyncHandle>();
            sync->state = MessageState::Showing;
            sync->time_left = message_data.duration;
            m_data->active_central_messages.push_back({
                message_box,
                message_data,
                std::move(sync),
            });
        }
    }
} // namespace core::api::messages
