#include <Randomizer/messages/message_queue.h>
#include <Core/api/game/game.h>
#include <Modloader/app/methods/TimeUtility.h>
#include <Modloader/app/types/UI_Hints.h>
#include <Modloader/app/methods/Game/UI_Hints.h>
#include <Modloader/app/methods/CatlikeCoding/TextBox/TextBox.h>
#include <Core/utils/position_converter.h>
#include <Core/api/game/ui.h>
#include <Modloader/modloader.h>


namespace core::messages {
    using namespace app::classes;

    bool game_ready = false;

    [[maybe_unused]]
    auto on_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        game_ready = true;
    });

    app::Rect active_hint_bounds() {
        const auto ui_hints = types::UI_Hints::get_class();
        const auto m_current_hint_message_box = ui_hints->static_fields->m_currentHint;

        if (!il2cpp::unity::is_valid(m_current_hint_message_box)) {
            return {};
        }

        const auto text_box = m_current_hint_message_box->fields.TextBox;
        return CatlikeCoding::TextBox::TextBox::GetRealTextBoxLocalRect(text_box);
    }

    QueuedMessage::weak_ptr_t MessageQueue::enqueue(QueuedMessageProperties properties, bool prioritized, std::optional<app::Vector2> origin_world_position) {
        const auto queued_message = std::make_shared<QueuedMessage>(std::move(properties), prioritized, origin_world_position);

        if (prioritized) {
            // Remove any existing priority messages
            for (auto it = m_queue.begin(); it != m_queue.end();) {
                if ((*it)->m_prioritized) {
                    it = m_queue.erase(it);
                    continue;
                }

                ++it;
            }

            // Push new priority message up front
            m_queue.insert(m_queue.begin(), queued_message);
        } else {
            m_queue.push_back(queued_message);
        }

        return queued_message;
    }

    void MessageQueue::clear() {
        m_queue.clear();
    }

    MessageQueue::MessageQueue(const app::Vector2& m_top_anchor) :
        m_top_anchor(m_top_anchor) {
        m_on_update_droppable = api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [this](auto, auto) {
            if (!game_ready) {
                return;
            }

            on_update();
        });
    }

    void MessageQueue::on_update() {
        const auto delta = TimeUtility::get_deltaTime();

        auto message_it = m_queue.begin();
        float y_cursor = m_top_anchor.y;
        float total_height = 0.f;  // Total height of all messages

        if (Game::UI_Hints::get_IsShowingHint()) {
            y_cursor += active_hint_bounds().m_Height;  // Height is negative
            y_cursor -= 0.8f;  // Gap
        } else if (api::game::ui::area_map_open()) {
            y_cursor -= 0.85f;
        }

        // Visible messages
        while (message_it != m_queue.end()) {
            auto& queued_message = *message_it;

            queued_message->m_properties.time_left -= delta;
            const auto message_expired = queued_message->m_properties.time_left <= 0.f;

            // Message timeout reached, remove it and continue with the next one
            if (message_expired) {
                if (queued_message->m_visible && queued_message->m_box_and_effects.has_value()) {
                    set_message_box_fade_out_based_on_queue_size(*queued_message->m_box_and_effects->message_box);
                    queued_message->m_box_and_effects->message_box->hide();
                    queued_message->m_visible = false;
                }

                if (!queued_message->m_box_and_effects.has_value() || queued_message->m_box_and_effects->message_box->get_visibility() == api::messages::MessageBox::Visibility::Hidden) {
                    message_it = m_queue.erase(message_it);
                    continue;
                }
            }

            const auto target_position = app::Vector2(m_top_anchor.x, y_cursor);

            // Create message box if it doesn't exist yet
            if (!queued_message->m_box_and_effects.has_value()) {
                queued_message->m_box_and_effects = std::make_optional<QueuedMessage::MessageBoxWithEffects>();

                reactivity::watch_effect()
                    .effect(queued_message->m_properties.text)
                    .after([&queued_message] {
                        queued_message->m_box_and_effects->message_box->text().set(queued_message->properties().text.get());
                    })
                    .finalize(queued_message->m_box_and_effects->effects);

                reactivity::watch_effect()
                    .effect(queued_message->m_properties.background_enabled)
                    .after([&queued_message] {
                        queued_message->m_box_and_effects->message_box->show_background().set(queued_message->properties().background_enabled.get());
                    })
                    .finalize(queued_message->m_box_and_effects->effects);

                queued_message->m_box_and_effects->message_box->coordinate_system().set(api::messages::CoordinateSystem::UI);
                queued_message->m_box_and_effects->message_box->top_padding().set(0);
                queued_message->m_box_and_effects->message_box->bottom_padding().set(0);

                if (queued_message->m_origin_world_position.has_value()) {
                    // TODO: Don't do this if the origin_world_position is too far away from the camera
                    queued_message->m_box_and_effects->message_box->position().set(
                        modloader::math::to_vec3(world_to_ui_position_2d(*queued_message->m_origin_world_position))
                    );
                } else {
                    queued_message->m_box_and_effects->message_box->position().set(modloader::math::to_vec3(target_position));
                }

                queued_message->m_box_and_effects->message_box->show();
                queued_message->m_visible = true;

                if (queued_message->properties().on_shown != nullptr) {
                    queued_message->properties().on_shown();
                }
            }

            const auto current_position = modloader::math::to_vec2(queued_message->m_box_and_effects->message_box->position().get());
            const auto new_position = modloader::math::lerp(current_position, target_position, std::min(1.f, delta * 10.f));
            queued_message->m_box_and_effects->message_box->position().set(modloader::math::to_vec3(new_position));

            if (!message_expired) {
                const auto message_height = std::abs(queued_message->m_box_and_effects->message_box->bounding_box().m_Height) * 0.6f;  // m_Height is negative
                y_cursor -= message_height;
                total_height += message_height;
            }

            ++message_it;

            if (total_height >= m_max_height) {
                break;
            }
        }

        // Invisible messages
        while (message_it != m_queue.end()) {
            auto& queued_message = *message_it;

            if (queued_message->m_box_and_effects.has_value() && queued_message->m_visible) {
                set_message_box_fade_out_based_on_queue_size(*queued_message->m_box_and_effects->message_box);
                queued_message->m_box_and_effects->message_box->hide();
                queued_message->m_visible = false;
                if (queued_message->properties().on_hidden != nullptr) {
                    queued_message->properties().on_hidden();
                }
            }

            ++message_it;
        }
    }

    void MessageQueue::set_message_box_fade_out_based_on_queue_size(api::messages::MessageBox& message_box) const {
        message_box.fade_out().set(m_queue.size() <= 1 ? 0.75f : 0.2f);
    }
} // namespace core::messages
