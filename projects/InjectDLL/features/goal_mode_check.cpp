#include <interception_macros.h>
#include <dll_main.h>
#include <csharp_bridge.h>
#include <dev/dev_commands.h>
#include <Common/ext.h>

namespace
{
    struct BoundingRect
    {
        float left, right, bottom, top, front, back;
    };

    bool in_rect(BoundingRect const& rect, float x, float y, float z)
    {
        return !(
            x < rect.left ||
            x > rect.right ||
            y < rect.bottom ||
            y > rect.top ||
            z < rect.front ||
            z > rect.back
        );
    }

    BINDING(10971216, app::Vector3, SeinCharacter__get_Position, (app::SeinCharacter* thisPtr));
    BINDING(10971312, void, SeinCharacter__set_Position, (app::SeinCharacter* thisPtr, app::Vector3 value));

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

    STATIC_CLASS(71818456, app::UI_Cameras__Class*, cameras);
    BINDING(4110512, void, GameplayCamera__MoveCameraToTargetInstantly, (app::GameplayCamera* this_ptr, bool updateTargetPosition));

    bool enable_goal_teleport = false;
    bool set_camera_next_update = false;
    INTERCEPT(10977184, void, SeinCharacter__FixedUpdate, (app::SeinCharacter* this_ptr)) {
        if (enable_goal_teleport)
        {
            if (set_camera_next_update && cameras_is_valid() && (*cameras)->static_fields->Current != nullptr)
            {
                // We need to do this on the next frame to allow state to update without causing flickering.
                auto camera = (*cameras)->static_fields->Current;
                GameplayCamera__MoveCameraToTargetInstantly(camera, true);
                set_camera_next_update = false;
            }

            SeinCharacter__FixedUpdate(this_ptr);
            auto position = SeinCharacter__get_Position(this_ptr);
            if (in_rect(goal_rect, position.x, position.y, position.z))
            {
                SeinCharacter__set_Position(this_ptr, goal_reset_position);
                csharp_bridge::on_goal_mode_fail();
                set_camera_next_update = true;
            }
        }
        else
            SeinCharacter__FixedUpdate(this_ptr);
    }

    void report_player_position(std::string const& command, std::vector<dev::CommandParam> const& params)
    {
        auto sein = get_sein();
        if (sein != nullptr)
        {
            auto position = SeinCharacter__get_Position(sein);
            dev::console_send(format("sein pos: {%f, %f, %f}", position.x, position.y, position.z));
        }
        else
            dev::console_send("sein not available.");
    }

    void add_goal_commands()
    {
        dev::register_command("report_player_position", report_player_position);
    }

    CALL_ON_INIT(add_goal_commands);
}

INJECT_C_DLLEXPORT void lock_shriek_goal(bool value)
{
    enable_goal_teleport = value;
}
