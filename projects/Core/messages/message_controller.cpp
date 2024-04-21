#include <Core/api/game/game.h>
#include <Core/api/game/ui.h>
#include <Core/api/graphics/sprite.h>
#include <Core/api/screen_position.h>
#include <Core/events/task.h>
#include <Core/messages/message_controller.h>
#include <Modloader/modloader.h>

#include <Modloader/app/methods/AnimatorDriver.h>
#include <Modloader/app/methods/BaseAnimator.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/LegacyTransparencyAnimator.h>
#include <Modloader/app/methods/ScalePositionForAspectRatio.h>
#include <Modloader/app/types/LegacyTransparencyAnimator.h>
#include <Modloader/app/types/ScalePositionForAspectRatio.h>
#include <Modloader/app/types/UI_Hints.h>

namespace core::messages {
    namespace {
        constexpr int MAX_RECENT_MESSAGES = 7;

        bool game_booted = false;
        std::unique_ptr<core::api::graphics::Sprite> recent_pickups_background;
        std::optional<il2cpp::GCRef<app::LegacyTransparencyAnimator>> recent_pickups_background_animator;

        auto on_after_title_screen_startup = api::game::event_bus().register_handler(GameEvent::TitleScreenStartup, EventTiming::After, [](auto, auto) {
            game_booted = true;
        });

        auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
            recent_pickups_background = std::make_unique<core::api::graphics::Sprite>(api::graphics::Sprite::Anchor::BottomLeft);

            recent_pickups_background->layer(Layer::UI);
            recent_pickups_background->local_scale({8, 8, 8});

            auto bottom_left = api::screen_position::get(api::screen_position::ScreenPosition::BottomLeft, false);
            bottom_left.z = -0.2f;
            recent_pickups_background->local_position(bottom_left);

            recent_pickups_background->texture(core::api::graphics::textures::get_texture("file:assets/textures/gradient_corner_bottom_left.png"));

            const auto scale_position_component = il2cpp::unity::add_component<app::ScalePositionForAspectRatio>(
                recent_pickups_background->get_game_object(), types::ScalePositionForAspectRatio::get_class()
            );
            ScalePositionForAspectRatio::ctor(scale_position_component);

            const auto animator_component = il2cpp::unity::add_component<app::LegacyTransparencyAnimator>(
                recent_pickups_background->get_game_object(), types::LegacyTransparencyAnimator::get_class()
            );
            recent_pickups_background_animator = il2cpp::GCRef(animator_component);

            LegacyTransparencyAnimator::ctor(animator_component);

            animator_component->fields.AnimateChildren = true;
            animator_component->fields.AutoEnableTargets = true;
            LegacyTransparencyAnimator::CacheOriginals(animator_component);

            BaseAnimator::set_Speed(reinterpret_cast<app::BaseAnimator*>(animator_component), 4.f);
        });
    } // namespace

    void update_time(MessageController::MessageData& data, float delta_time) {
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
                m_current->handle->state = message_handle_t::MessageState::InterruptedByPriorityMessage;
                m_normal_data.insert(m_normal_data.begin(), *m_current);
                m_current = m_priority_data.front();
                m_priority_data.erase(m_priority_data.begin());
            }

            update_time(*m_current, delta_time);
            switch (m_current->handle->state) {
                case message_handle_t::MessageState::InterruptedByPriorityMessage:
                    m_current->handle->state = message_handle_t::MessageState::Visible;
                    m_current->message->show(m_current->info.instant_fade, m_current->info.play_sound);
                    break;
                case message_handle_t::MessageState::Queued:
                    m_current->handle->time_left = m_current->info.duration;
                    m_current->handle->state = message_handle_t::MessageState::Visible;
                    m_current->message->show(m_current->info.instant_fade, m_current->info.play_sound);
                    break;
                case message_handle_t::MessageState::Finished:
                    // Clear m_current, so it gets set next time update is run.
                    m_current->message->hide(m_current->info.instant_fade);
                    m_current = std::optional<MessageData>();
                    break;
                default:
                    break;
            }
        }
    }

    message_handle_ptr_t MessageController::MessageQueue::add(std::shared_ptr<api::messages::MessageBox> message, IndependentMessageInfo info) {
        auto& collection = info.prioritized ? m_priority_data : m_normal_data;
        auto sync = std::make_shared<message_handle_t>();
        sync->message = message;
        collection.push_back({
            std::move(message),
            std::move(info),
            sync,
        });

        return sync;
    }

    MessageController::MessageController() :
        m_central_display(7, 5),
        m_recent_display(10, 5) {

        m_central_display.message_vertical_anchor().set(app::VerticalAnchorMode__Enum::Top);
        m_central_display.screen_position().set(api::screen_position::ScreenPosition::TopCenter);

        m_recent_display.position().set({0.4f, 0.4f, 0.f});
        m_recent_display.horizontal_anchor().set(app::HorizontalAnchorMode__Enum::Left);
        m_recent_display.message_vertical_anchor().set(app::VerticalAnchorMode__Enum::Bottom);
        m_recent_display.display_vertical_anchor().set(MessageDisplayAnchor::Bottom);
        m_recent_display.expand_direction().set(MessageDisplayExpandDirection::Upwards);
        m_recent_display.alignment().set(app::AlignmentMode__Enum::Left);
        m_recent_display.screen_position().set(api::screen_position::ScreenPosition::BottomLeft);
    }

    MessageController::~MessageController() = default;

    message_handle_ptr_t MessageController::queue(std::shared_ptr<api::messages::MessageBox> message, IndependentMessageInfo info) {
        message_handle_ptr_t sync;
        if (info.queue.has_value()) {
            auto& queue = m_queues[*info.queue];
            sync = queue.add(std::move(message), std::move(info));
        } else {
            sync = std::make_shared<message_handle_t>();
            sync->state = message_handle_t::MessageState::Visible;
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

    void MessageController::queue_central(MessageInfo info, bool add_to_recent) {
        if (add_to_recent) {
            // Copy processed text
            auto message_copy = info;
            auto text = message_copy.text.get();
            m_central_display.text_processor()->process(text);
            message_copy.text.set(text);

            m_recent_messages.emplace_back(message_copy);
            if (m_recent_messages.size() > MAX_RECENT_MESSAGES) {
                m_recent_messages.pop_front();
            }
        }

        m_central_display.push(std::move(info));
    }

    void MessageController::show_recent_messages() {
        if (m_recent_messages.empty()) {
            m_recent_display.push({
                .text = Property<std::string>(std::string("<s_0.8>No pickups collected yet, good Luck!</>")),
                .duration = 5.f,
                .show_box = false,
                .prioritized = true,
                .play_sound = false,
            });
        } else {
            m_recent_display.clear();

            for (const auto& message: m_recent_messages | std::views::reverse) {
                auto text = message.text.get();
                m_recent_display.push({
                    .text = Property<std::string>(std::format("<s_0.8>{}</>", text)),
                    .duration = 3.f,
                    .show_box = false,
                    .play_sound = false,
                    .margins = {-0.09f, 0.125f},
                    .line_spacing = -0.1f
                });
            }
        }
    }

    void MessageController::clear_central() {
        m_central_display.clear();
        m_recent_messages.clear();
    }

    app::Rect active_hint_bounds() {
        const auto ui_hints = app::classes::types::UI_Hints::get_class();
        const auto m_current_hint_message_box = ui_hints->static_fields->m_currentHint;

        if (!il2cpp::unity::is_valid(m_current_hint_message_box)) {
            return {};
        }

        const auto text_box = m_current_hint_message_box->fields.TextBox;
        return app::classes::CatlikeCoding::TextBox::TextBox::GetRealTextBoxLocalRect(text_box);
    }

    void MessageController::update(float delta_time) {
        if (!game_booted) {
            return;
        }

        for (auto& queue : m_queues) {
            queue.second.update(delta_time);
        }

        for (auto it = m_unqueued_messages.begin(); it != m_unqueued_messages.end();) {
            update_time(*it, delta_time);
            if (it->handle->state == message_handle_t::MessageState::Finished) {
                it = m_unqueued_messages.erase(it);
            } else {
                ++it;
            }
        }

        auto y_position = -0.8f;
        if (app::classes::Game::UI_Hints::get_IsShowingHint()) {
            auto bounds = active_hint_bounds();
            y_position += bounds.m_Height;
            y_position -= 0.3f; // Gap
        } else if (api::game::ui::area_map_open()) {
            static float test_map_offset = 0.85f;
            y_position -= test_map_offset; // Put it below the map text.
        }

        m_central_display.position().set(0, y_position, 0);
        m_central_display.update(delta_time);

        m_recent_display.update(delta_time);

        const auto recent_messages_displayed = m_recent_display.get_active_messages_count() > 0;
        if (m_recent_messages_displayed_last_update != recent_messages_displayed) {
            const auto animator = **recent_pickups_background_animator;
            LegacyTransparencyAnimator::UpdateActiveStates(animator);

            const auto driver = BaseAnimator::get_AnimatorDriver(reinterpret_cast<app::BaseAnimator*>(animator));

            if (recent_messages_displayed) {
                AnimatorDriver::ContinueForward(driver);
            } else {
                AnimatorDriver::ContinueBackwards(driver);
            }

            m_recent_messages_displayed_last_update = recent_messages_displayed;
        }
    }
} // namespace core::messages
