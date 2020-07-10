#include <features/mouse_control.h>
#include <interception_macros.h>
#include <il2cpp_helpers.h>
#include <dll_main.h>
#include <csharp_bridge.h>

#include <algorithm>
#include <cmath>
#include <limits>

#undef max
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

namespace
{
    bool dig_mouse_control = false;
    bool swim_dash_mouse_control = false;
    bool grapple_mouse_control = false;

    //float current, float target, ref float currentVelocity, float smoothTime, float maxSpeed = Mathf.Infinity, float deltaTime = Time.deltaTime
    STATIC_IL2CPP_BINDING(UnityEngine, Time, float, get_deltaTime, ());
    STATIC_IL2CPP_BINDING(UnityEngine, Mathf, float, SmoothDampAngle, (float current, float target, float& currentVelocity, float smoothTime, float maxSpeed, float deltaTime));
    STATIC_IL2CPP_BINDING(, MoonInput, app::Vector3, get_mousePosition, ());
    STATIC_IL2CPP_BINDING(UnityEngine, Camera, app::Camera*, get_main, ());
    IL2CPP_BINDING(UnityEngine, Behaviour, bool, get_enabled, (app::Camera* this_ptr));
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, WorldToScreenPoint, (app::Camera* this_ptr, app::Vector3 position));

    app::Camera* camera = nullptr;
    bool overwrite_input = false;
    IL2CPP_INTERCEPT(, SeinDigging, void, UpdateDiggingState, (app::SeinDigging* this_ptr)) {
        if (dig_mouse_control)
            overwrite_input = true;

        SeinDigging_UpdateDiggingState(this_ptr);
        overwrite_input = false;
    }

    IL2CPP_INTERCEPT(, SeinSwimming, void, UpdateDashingState, (app::SeinSwimming* this_ptr)) {
        if (swim_dash_mouse_control)
            overwrite_input = true;

        SeinSwimming_UpdateDashingState(this_ptr);
        overwrite_input = false;
    }

    IL2CPP_INTERCEPT(Core, Input, app::Vector2, get_Axis, ()) {
        if (overwrite_input)
        {
            if (camera == nullptr || !Behaviour_get_enabled(camera))
            {
                camera = Camera_get_main();
                if (camera == nullptr || !Behaviour_get_enabled(camera))
                    return Input_get_Axis();
            }

            auto sein = get_sein();
            auto sein_pos = Camera_WorldToScreenPoint(camera, sein->fields.PlatformBehaviour->fields.PlatformMovement->fields.m_oldPosition);
            auto pos = MoonInput_get_mousePosition();
            pos.x -= sein_pos.x;
            pos.y -= sein_pos.y;
            auto magnitude = std::sqrt(pos.x * pos.x + pos.y * pos.y);
            return app::Vector2{
                pos.x / magnitude,
                pos.y / magnitude
            };
        }
        else
            return Input_get_Axis();
    }

    bool overwrite_target = false;
    app::Vector3 dir;
    IL2CPP_INTERCEPT(, SeinSpiritLeashAbility, void, FindClosestAttackHandler, (app::SeinSpiritLeashAbility* this_ptr)) {
        if (grapple_mouse_control)
        {
            if (camera == nullptr || !Behaviour_get_enabled(camera))
                camera = Camera_get_main();

            if (camera != nullptr && Behaviour_get_enabled(camera))
            {
                auto sein = this_ptr->fields._.m_sein;
                auto sein_pos = Camera_WorldToScreenPoint(camera, sein->fields.PlatformBehaviour->fields.PlatformMovement->fields.m_oldPosition);
                dir = MoonInput_get_mousePosition();
                dir.x -= sein_pos.x;
                dir.y -= sein_pos.y;
                auto magnitude = std::sqrt(dir.x * dir.x + dir.y * dir.y);
                dir.x /= magnitude;
                dir.y /= magnitude;
            }

            overwrite_target = true;
        }

        SeinSpiritLeashAbility_FindClosestAttackHandler(this_ptr);
        overwrite_target = false;
    }

    IL2CPP_INTERCEPT(, SeinSpiritLeashAbility, bool, IsInputTowardsTarget,
        (app::SeinSpiritLeashAbility* this_ptr, app::Vector3 target_dir, app::Vector3 input_dir, bool is_current_target, float* angle_difference)) {
        if (overwrite_target)
            input_dir = dir;

        return SeinSpiritLeashAbility_IsInputTowardsTarget(this_ptr, target_dir, input_dir, is_current_target, angle_difference);
    }

    IL2CPP_INTERCEPT(, SeinCharacter, bool, get_FaceLeft, (app::SeinCharacter* this_ptr)) {
        if (overwrite_target)
            return dir.x < 0;
        else
            return SeinCharacter_get_FaceLeft(this_ptr);
    }
}

INJECT_C_DLLEXPORT void set_mouse_controls()
{
    dig_mouse_control = csharp_bridge::check_ini("BurrowMouseControl");
    swim_dash_mouse_control = csharp_bridge::check_ini("WaterDashMouseControl");
    grapple_mouse_control = csharp_bridge::check_ini("GrappleMouseControl");
}
