#include <online/player.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/enums/layer.h>
#include <Core/utils/color.h>

#include <Common/ext.h>

namespace randomizer::online {

    Player::Player(std::string_view id)
            : m_id(std::string(id))
            , m_map_icon(std::make_unique<PlayerIcon>(PlayerIcon::Type::Moki)) {
       m_map_icon->visible().set(true);
    }

    Player::~Player() {
        if (m_world_ghost.is_initialized()) {
            m_world_ghost.destroy();
        }
    }

    void Player::recreate() const {
        m_map_icon->recreate();
    }

    void Player::update() {
        m_map_icon->update(m_online);

        // Extrapolate for next frame
        const auto delta_time = core::api::game::delta_time();
        if (m_world_ghost.is_initialized()) {
            m_world_ghost.extrapolate(delta_time);
        }

        // Visibility toggles.
        const bool should_show = core::api::game::player::sein() != nullptr;
        const bool visible = m_online && should_show && m_visible_world;
        if (m_world_ghost.is_initialized() != m_visible_world) {
            if (visible) {
                if (m_world_ghost.initialize()) {
                    m_world_ghost.set_name(m_name);
                    m_world_ghost.set_color(m_color);
                }
            } else {
                m_world_ghost.destroy();
            }
        }
    }

    void Player::update_map_position(const float x, const float y) const {
        m_map_icon->update_position(m_online, x, y);
    }

    void Player::set_name(const std::string_view value) {
        m_name = std::string(value);
        m_map_icon->name().set(value);
    }

    void Player::set_icon(const PlayerIcon::Type value) const {
        m_map_icon->type().set(value);
    }

    void Player::set_color(const app::Color value) {
        m_color = value;
        m_map_icon->color().set(value);
        if (m_world_ghost.is_initialized()) {
            m_world_ghost.set_color(value);
        }
    }

    void Player::set_online(const bool value) {
        m_online = value;
    }

    void Player::set_visible_map(const bool value) const {
        m_map_icon->visible().set(value);
    }

    void Player::set_visible_world(const bool value) {
        m_visible_world = value;
    }

    void Player::update_ghost(const std::string_view ghost_frame_data) {
        if (m_world_ghost.is_initialized() && !ghost_frame_data.empty()) {
            std::vector<std::byte> frame_data;

            for (const auto i : ghost_frame_data) {
                frame_data.emplace_back(static_cast<const std::byte>(i));
            }

            m_world_ghost.play_frame_data(frame_data);
        }

        m_world_ghost.skip_next_extrapolation = true;
    }
} // namespace randomizer::online
