#include <Core/api/game/game.h>
#include <Core/api/game/ui.h>
#include <Core/utils/position_converter.h>
#include <messages/message_controller.h>

#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/MessageBox.h>
#include <Modloader/app/types/UI_Hints.h>
#include <Modloader/il2cpp_math.h>

namespace core::messages {
    namespace {
        bool global_can_show = false;
        auto on_after_title_screen_startup = api::game::event_bus().register_handler(GameEvent::TitleScreenStartup, EventTiming::After, [](auto, auto) {
            global_can_show = true;
        });
    } // namespace

    void update_time(MessageController::MessageData& data, float delta_time) {
        if (data.sync->state == message_sync_handle_type::MessageState::Showing) {
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
                data.sync->state = message_sync_handle_type::MessageState::Finished;
                data.sync->time_left = std::optional<float>();
            }
        }
    }

    void MessageController::MessageQueue::update(float delta_time) {
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
            if (!m_current->info.prioritized && !m_priority_data.empty()) {
                // Switch out normal message for prioritized, pausing it.
                m_current->message->hide(true);
                m_current->sync->state = message_sync_handle_type::MessageState::Paused;
                m_normal_data.insert(m_normal_data.begin(), *m_current);
                m_current = m_priority_data.front();
                m_priority_data.erase(m_priority_data.begin());
            }

            update_time(*m_current, delta_time);
            switch (m_current->sync->state) {
                case message_sync_handle_type::MessageState::Paused:
                    m_current->sync->state = message_sync_handle_type::MessageState::Showing;
                    m_current->message->show(m_current->info.instant_fade, m_current->info.play_sound);
                    break;
                case message_sync_handle_type::MessageState::Waiting:
                    m_current->sync->time_left = m_current->info.duration;
                    m_current->sync->state = message_sync_handle_type::MessageState::Showing;
                    m_current->message->show(m_current->info.instant_fade, m_current->info.play_sound);
                    break;
                case message_sync_handle_type::MessageState::Finished:
                    // Clear m_current, so it gets set next time update is run.
                    m_current->message->hide(m_current->info.instant_fade);
                    m_current = std::optional<MessageData>();
                    break;
                default:
                    break;
            }
        }
    }

    message_sync_handle MessageController::MessageQueue::add(std::shared_ptr<api::messages::MessageBox> message, IndependentMessageInfo info) {
        auto& collection = info.prioritized ? m_priority_data : m_normal_data;
        auto sync = std::make_shared<message_sync_handle_type>();
        sync->message = message;
        collection.push_back({
            std::move(message),
            std::move(info),
            sync,
        });

        return sync;
    }

    MessageController::MessageController()
            : m_central_display(5, 5) {
        m_central_display.vertical_anchor().set(app::VerticalAnchorMode__Enum::Top);
        m_central_display.screen_position().set(api::messages::ScreenPosition::TopCenter);
    }

    MessageController::~MessageController() = default;

    message_sync_handle MessageController::queue(std::shared_ptr<api::messages::MessageBox> message, IndependentMessageInfo info) {
        message_sync_handle sync;
        if (info.queue.has_value()) {
            auto& queue = m_queues[*info.queue];
            sync = queue.add(std::move(message), std::move(info));
        } else {
            sync = std::make_shared<message_sync_handle_type>();
            sync->state = message_sync_handle_type::MessageState::Showing;
            sync->time_left = info.duration;
            sync->message = message;
            message->show(info.instant_fade, info.play_sound);
            m_unqueued_messages.push_back({
                std::move(message),
                std::move(info),
                sync,
            });
        }

        return sync;
    }

    void MessageController::queue_central(MessageInfo info, bool should_save) {
        if (should_save) {
            m_saved_message = info;
        }

        m_central_display.push(std::move(info));
    }

    void MessageController::requeue_last_saved() {
        if (m_saved_message.has_value()) {
            m_saved_message->starting_world_position = std::nullopt;
            m_saved_message->prioritized = true;
            m_central_display.push(m_saved_message.value());
        } else {
            m_central_display.push({
                .text = "No pickups collected yet, good Luck!",
                .duration = 5.f,
                .prioritized = true,
            });
        }
    }

    void MessageController::clear_central() {
        m_saved_message = std::nullopt;
        m_central_display.clear();
    }

    app::Rect active_hint_bounds() {
        const auto ui_hints = app::classes::types::UI_Hints::get_class();
        const auto m_current_hint_message_box = ui_hints->static_fields->m_currentHint;

        if (!il2cpp::unity::is_valid(m_current_hint_message_box)) {
            return {};
        }

        const auto text_box = m_current_hint_message_box->fields.TextBox;
        return CatlikeCoding::TextBox::TextBox::GetRealTextBoxLocalRect(text_box);
    }

    void MessageController::update(float delta_time) {
        if (!global_can_show) {
            return;
        }

        for (auto queue : m_queues) {
            queue.second.update(delta_time);
        }

        for (auto it = m_unqueued_messages.begin(); it != m_unqueued_messages.end();) {
            update_time(*it, delta_time);
            if (it->sync->state == message_sync_handle_type::MessageState::Finished) {
                it = m_unqueued_messages.erase(it);
            } else {
                ++it;
            }
        }

        auto y_position = 0.3f;
        if (app::classes::Game::UI_Hints::get_IsShowingHint()) {
            auto bounds = active_hint_bounds();
            y_position -= bounds.m_Height;
            y_position -= 0.3f; // Gap
        } else if (api::game::ui::area_map_open()) {
            static float test_map_offset = 0.85f;
            y_position -= test_map_offset; // Put it below the map text.
        }

        m_central_display.position() = app::Vector3{ 0, y_position, 0 };
        m_central_display.update(delta_time);
    }
} // namespace core::messages
