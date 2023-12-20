#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Modloader/il2cpp_math.h>
#include <Randomizer/input/rando_bindings.h>
#include <Randomizer/trial.h>
#include <ranges>

namespace randomizer {
    void Trial::add(app::Vector2 location, std::optional<float> time) { m_checkpoints.emplace_back(location, time); }

    void Trial::start_callback(const std::function<void()>& callback) { m_start_callback = callback; }

    void Trial::time_callback(const std::function<void(float)>& callback) { m_time_callback = callback; }

    void Trial::failed_callback(const std::function<void(float)>& callback) { m_failed_callback = callback; }

    void Trial::finish_callback(const std::function<void(float)>& callback) { m_finish_callback = callback; }

    bool Trial::enabled() const { return m_update_handle != nullptr; }

    void Trial::enabled(bool value) {
        const auto is_enabled = enabled();
        if (is_enabled && !value) {
            m_update_handle = nullptr;
        } else if (!is_enabled && value) {
            m_update_handle = core::api::game::event_bus().register_handler(GameEvent::Update, EventTiming::After, [&](auto, auto) { update(); });
        }
    }

    int Trial::total_checkpoints() const { return static_cast<int>(m_checkpoints.size()); }

    int Trial::current_checkpoint() const { return m_checkpoint_index; }

    app::Vector2 Trial::next_checkpoint_location() const { return m_checkpoint_index < 0 ? m_location : m_checkpoints[m_checkpoint_index].location; }

    app::Vector2 Trial::location() const { return m_location; }

    void Trial::location(const app::Vector2 location) { m_location = location; }

    void Trial::update() {
        if (m_checkpoint_index < 0) { // Not started
            update_not_in_trial();
        } else { // Started
            update_in_trial();
        }
    }

    void Trial::update_not_in_trial() {
        const auto position = modloader::math::convert(core::api::game::player::get_position());
        const auto in_range = modloader::math::distance2(position, m_location) < interact_radius * interact_radius;
        if (in_range && m_input_handle == nullptr) {
            m_message_box = std::make_shared<core::api::messages::MessageBox>();
            m_message_box->use_world_coordinates().set(true);
            m_message_box->show_box().set(false);
            m_message_box->text().set("Start Trial [Interact]");
            m_message_box->position().set(modloader::math::convert(position));
            m_message_box->position().add(0, 10, 0);
            m_input_handle = input::single_input_bus().register_handler(Action::Interact, EventTiming::Before, [&](auto, auto) {
                m_checkpoint_index = 0;
                m_timer = 0;
                std::optional<float> last;
                for (auto& [location, time]: m_checkpoints | std::ranges::views::reverse) {
                    if (!time.has_value()) {
                        time = last;
                    }

                    last = time;
                }

                m_start_callback();
            });
        } else if (!in_range) {
            m_input_handle = nullptr;
            m_message_box = nullptr;
        }
    }

    void Trial::update_in_trial() {
        m_timer += core::api::game::delta_time();
        const auto& [location, time] = m_checkpoints[m_checkpoint_index];
        const auto position = modloader::math::convert(core::api::game::player::get_position());
        if (modloader::math::distance2(position, location) < interact_radius * interact_radius) {
            ++m_checkpoint_index;
            if (m_checkpoint_index == m_checkpoints.size()) {
                m_finish_callback(m_timer);
                m_checkpoint_index = -1;
            }
        } else if (time.value_or(std::numeric_limits<float>::max()) < m_timer) {
            m_failed_callback(m_timer);
            m_checkpoint_index = -1;
        } else {
            m_time_callback(m_timer);
        }
    }
} // namespace randomizer
