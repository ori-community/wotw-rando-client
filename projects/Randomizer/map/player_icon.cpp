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
            icons::MapIcon::Type::Moki,  // TODO: Change to Ori icon
            "Player",
            m_server_position,
            [this](filter::MapFilter) {
                return visible.get()
                    ? icons::MapIcon::Visibilities::visible
                    : icons::MapIcon::Visibilities::invisible;
            }
        );
    }

    void PlayerIcon::set_name(const std::string& name) const {
        m_map_icon->label_text.set(name);
    }

    void PlayerIcon::set_position_and_velocity(const app::Vector2& position, const app::Vector2& velocity) {
        m_server_position = position;
        m_server_velocity = velocity;
        m_extrapolation_time = 0.f;
        m_map_icon->world_position.set(position);
    }

    void PlayerIcon::set_color(const SolidColor& color) const {
        m_map_icon->color_modulation.set(color);
    }

    void PlayerIcon::on_before_update() {
        if (m_extrapolation_time < MAX_EXTRAPOLATION_TIME) {
            m_extrapolation_time = std::min(MAX_EXTRAPOLATION_TIME, m_extrapolation_time + UnityEngine::Time::get_deltaTime());
            m_map_icon->world_position.set(m_server_position + m_server_velocity * m_extrapolation_time);
        }
    }
} // namespace randomizer::map::player_icon
