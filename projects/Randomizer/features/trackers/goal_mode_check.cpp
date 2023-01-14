#include <Core/api/game/player.h>
#include <Modloader/app/methods/GameplayCamera.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/types/UI_Cameras.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/windows_api/console.h>

#include <Common/ext.h>
#include <Core/api/graphics/shaders.h>
#include <Core/api/uber_states/uber_state.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace modloader::win;
using namespace app::classes;

namespace {
    struct BoundingRect {
        float left, right, bottom, top, front, back;
    };

    bool in_rect(BoundingRect const& rect, float x, float y, float z) {
        return !(
            x < rect.left ||
            x > rect.right ||
            y < rect.bottom ||
            y > rect.top ||
            z < rect.front ||
            z > rect.back
        );
    }

    // Hardcoded position, front of entrance to Shriek fight.
    const app::Vector3 goal_reset_position = { 515.189453, -3745.529785, 0.0 };
    // Hardcoded bounding rectangle, area right before Shriek fight.
    const BoundingRect goal_rect = {
        535.0f,
        650.0f,
        -3620.0f,
        -3550.0f,
        -1.0f,
        1.0f
    };

    bool set_camera_next_update = false;
    core::api::uber_states::UberState goal_modes_complete(UberStateGroup::GameState, 11);
    IL2CPP_INTERCEPT(SeinCharacter, void, FixedUpdate, (app::SeinCharacter * this_ptr)) {
        if (!goal_modes_complete.get<bool>()) {
            auto cameras = types::UI_Cameras::get_class();
            if (set_camera_next_update) {
                if (cameras != nullptr && cameras->static_fields->Current != nullptr) {
                    // We need to do this on the next frame to allow state to update without causing flickering.
                    auto camera = cameras->static_fields->Current;
                    GameplayCamera::MoveCameraToTargetInstantly(camera, true);
                } else {
                    warn("goal mode tp", "failed to refocus camera");
                }
                set_camera_next_update = false;
            }

            next::SeinCharacter::FixedUpdate(this_ptr);
            auto position = SeinCharacter::get_Position(this_ptr);
            if (in_rect(goal_rect, position.x, position.y, position.z)) {
                SeinCharacter::set_Position(this_ptr, goal_reset_position);
                // TODO: Show goal mode messages.
                set_camera_next_update = true;
            }
        } else {
            next::SeinCharacter::FixedUpdate(this_ptr);
        }
    }

    void report_player_position(std::string const& command, std::vector<console::CommandParam> const& params) {
        const auto sein = core::api::game::player::sein();
        if (sein != nullptr) {
            const auto position = SeinCharacter::get_Position(sein);
            console::console_send(fmt::format("sein pos: {}, {}, {}", position.x, position.y, position.z));
        } else
            console::console_send("sein not available.");
    }

    auto on_game_ready = modloader::event_bus().register_handler(ModloaderEvent::GameReady, [](auto) {
        console::register_command({ "debug", "report_player_position" }, report_player_position);
    });
} // namespace
