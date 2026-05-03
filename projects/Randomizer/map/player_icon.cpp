#include <Core/api/game/game.h>
#include <Modloader/app/methods/UnityEngine/Time.h>
#include <Randomizer/map/map_filter.h>
#include <Randomizer/map/player_icon.h>


namespace randomizer::map::player_icon {
    using namespace app::classes;

    constexpr float MAX_EXTRAPOLATION_TIME = 0.5f;

    PlayerIcon::PlayerIcon() {
        m_on_before_update_droppable = core::api::game::event_bus().register_handler(GameEvent::UnityUpdateLoop, EventTiming::Before, [this](auto, auto) {
            on_before_update();
        });

        m_map_icon = std::make_shared<icons::MapIcon>(
            icons::MapIcon::Type::OriPlayer,
            "Player",
            m_live_position,
            [this](filter::MapFilter) {
                return visible.get()
                    ? icons::MapIcon::Visibilities::visible
                    : icons::MapIcon::Visibilities::invisible;
            },
            icons::MapIcon::ScaleMode::Constant
        );
        m_map_icon->always_show_label.set(true);
    }

    void PlayerIcon::set_name(const std::string& name) const {
        m_map_icon->label_text.set(name);
    }

    void PlayerIcon::set_live_position(const app::Vector2& position) {
        const auto now = std::chrono::high_resolution_clock::now();

        m_velocity = [&] -> std::optional<app::Vector2> {
            if (m_live_position_time.has_value()) {
                const auto time_delta = duration_cast<std::chrono::microseconds>(now - *m_live_position_time).count() / 1000000.f;

                if (time_delta > 0.f) {
                    const auto position_delta = position - m_live_position;
                    return position_delta / time_delta;
                }
            }

            return std::nullopt;
        }().value_or(app::Vector2{});

        m_live_position = position;
        m_live_position_time = now;
        m_extrapolation_time = 0.f;
        m_map_icon->world_position.set(position);
    }

    void PlayerIcon::set_color(const SolidColor& color) const {
        m_map_icon->label_color.set({color.r, color.g, color.b, 1.f});
    }

    void PlayerIcon::on_before_update() {
        if (m_extrapolation_time < MAX_EXTRAPOLATION_TIME) {
            m_extrapolation_time = std::min(MAX_EXTRAPOLATION_TIME, m_extrapolation_time + UnityEngine::Time::get_deltaTime());
            m_map_icon->world_position.set(m_live_position + m_velocity * m_extrapolation_time);
        }
    }
} // namespace randomizer::map::player_icon
