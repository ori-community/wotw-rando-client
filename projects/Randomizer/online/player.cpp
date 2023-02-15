#include <online/player.h>

#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Core/enums/layer.h>
#include <Core/utils/color.h>

#include <Common/ext.h>

#include <Modloader/il2cpp_math.h>

#include <unordered_map>

namespace randomizer::online {

    Player::Player()
            : map_icon(std::make_unique<PlayerIcon>(PlayerIcon::Type::Moki)) {
    }

    Player::~Player() {
        if (world_ghost.is_initialized()) {
            world_ghost.destroy();
        }
    }

    void Player::recreate() {
        map_icon->recreate();
    }

    void Player::update() {
        map_icon->update(online);

        // Extrapolate for next frame
        float delta_time = core::api::game::delta_time();
        if (world_ghost.is_initialized()) {
            world_ghost.extrapolate(delta_time);
        }

        // Visibility toggles.
        const bool should_show = core::api::game::player::sein() != nullptr;
        bool visible = online && should_show && visible_world;
        if (world_ghost.is_initialized() != visible_world) {
            if (visible) {
                if (world_ghost.initialize()) {
                    world_ghost.set_name(convert_wstring_to_string(name));
                    world_ghost.set_color(color);
                }
            } else {
                world_ghost.destroy();
            }
        }
    }

    void Player::update_map_position(float x, float y) {
        map_icon->update_position(online, x, y);
    }

    void Player::set_icon(PlayerIcon::Type value) {
        map_icon->type() = value;
    }

    void Player::set_color(app::Color value) {
        this->color = value;
        map_icon->color() = value;
        if (world_ghost.is_initialized()) {
            world_ghost.set_color(value);
        }
    }

    void Player::set_online(bool value) {
        online = value;
    }

    void Player::set_visible_map(bool value) {
        map_icon->visible() = true;
    }

    void Player::set_visible_world(bool value) {
        visible_world = value;
    }

    void Player::update_ghost(std::string_view ghost_frame_data) {
        if (world_ghost.is_initialized() && !ghost_frame_data.empty()) {
            std::vector<std::byte> frame_data;

            for (auto i : ghost_frame_data) {
                frame_data.emplace_back(static_cast<const std::byte>(i));
            }

            world_ghost.play_frame_data(frame_data);
        }

        world_ghost.skip_next_extrapolation = true;
    }
} // namespace randomizer::online
