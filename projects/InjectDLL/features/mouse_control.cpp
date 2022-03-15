#include <features/mouse_control.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <dll_main.h>
#include <csharp_bridge.h>

#include <Il2CppModLoader/interception_macros.h>

#include <algorithm>
#include <cmath>
#include <limits>

#undef max

namespace
{
    bool invert_x = false;
    bool invert_y = false;

    bool dig_mouse_control = false;
    bool swim_dash_mouse_control = false;
    bool grapple_mouse_control = false;
    float mouse_control_deadzone = 50.f;

    //float current, float target, ref float currentVelocity, float smoothTime, float maxSpeed = Mathf.Infinity, float deltaTime = Time.deltaTime
    STATIC_IL2CPP_BINDING(UnityEngine, Time, float, get_deltaTime, ());
    STATIC_IL2CPP_BINDING(UnityEngine, Mathf, float, SmoothDampAngle, (float current, float target, float& currentVelocity, float smoothTime, float maxSpeed, float deltaTime));
    STATIC_IL2CPP_BINDING(, MoonInput, app::Vector3, get_mousePosition, ());
    STATIC_IL2CPP_BINDING(UnityEngine, Camera, app::Camera*, get_main, ());
    IL2CPP_BINDING(UnityEngine, Behaviour, bool, get_enabled, (app::Camera* this_ptr));
    IL2CPP_BINDING(UnityEngine, Camera, app::Vector3, WorldToScreenPoint, (app::Camera* this_ptr, app::Vector3 position));

    bool deadzone_active = false;
    app::Camera* camera = nullptr;
    app::Vector2 get_mouse_dir()
    {
        if (camera == nullptr || !Behaviour::get_enabled(camera))
        {
            camera = Camera::get_main();
            if (camera == nullptr || !Behaviour::get_enabled(camera))
                return app::Vector2{ 0, 0 };
        }

        auto sein = get_sein();
        auto sein_pos = Camera::WorldToScreenPoint(camera, sein->fields.PlatformBehaviour->fields.PlatformMovement->fields.m_oldPosition);
        auto pos = MoonInput::get_mousePosition();
        pos.x -= sein_pos.x;
        pos.y -= sein_pos.y;
        auto magnitude = std::sqrt(pos.x * pos.x + pos.y * pos.y);
        if (deadzone_active && magnitude < mouse_control_deadzone)
            return app::Vector2{ 0 };
        else
            return app::Vector2{ pos.x / magnitude, pos.y / magnitude };
    }

    bool overwrite_input = false;
    IL2CPP_INTERCEPT(, SeinDashNew, bool, ShouldDig, (app::SeinDashNew* this_ptr)) {
        if (dig_mouse_control)
            overwrite_input = true;

        auto ret = SeinDashNew::ShouldDig(this_ptr);
        overwrite_input = false;
        return ret;
    }

    IL2CPP_INTERCEPT(, SeinDigging, void, UpdateCharacterState, (app::SeinDigging* this_ptr)) {
        if (dig_mouse_control)
            overwrite_input = true;

        SeinDigging::UpdateCharacterState(this_ptr);
        overwrite_input = false;
    }

    IL2CPP_INTERCEPT(, SeinDashNew, bool, ShouldSwim, (app::SeinDashNew* this_ptr)) {
        if (swim_dash_mouse_control)
        {
            deadzone_active = true;
            overwrite_input = true;
        }

        auto ret = SeinDashNew::ShouldSwim(this_ptr);
        deadzone_active = false;
        overwrite_input = false;
        return ret;
    }

    IL2CPP_INTERCEPT(, SeinSwimming, void, UpdateCharacterState, (app::SeinSwimming* this_ptr)) {
        if (swim_dash_mouse_control)
        {
            overwrite_input = true;
            deadzone_active = true;
        }

        SeinSwimming::UpdateCharacterState(this_ptr);
        overwrite_input = false;
        deadzone_active = false;
    }

    STATIC_IL2CPP_INTERCEPT(Core, Input, app::Vector2, get_Axis, ()) {
        app::Vector2 ret;
        auto player_input = il2cpp::get_class<app::PlayerInput__Class>("", "PlayerInput")->static_fields->Instance;
        if (!player_input->fields.Active)
            return ret;

        if (overwrite_input)
            ret = get_mouse_dir();
        else
            ret = Input::get_Axis();

        if (invert_x)
            ret.x = -ret.x;

        if (invert_y)
            ret.y = -ret.y;

        return ret;
    }

    bool overwrite_target = false;
    app::Vector3 dir;
    IL2CPP_INTERCEPT(, SeinSpiritLeashAbility, void, FindClosestAttackHandler, (app::SeinSpiritLeashAbility* this_ptr)) {
        if (grapple_mouse_control)
        {
            auto dir2 = get_mouse_dir();
            dir.x = dir2.x;
            dir.y = dir2.y;
            overwrite_target = true;
        }

        SeinSpiritLeashAbility::FindClosestAttackHandler(this_ptr);
        overwrite_target = false;
    }

    IL2CPP_INTERCEPT(, SeinSpiritLeashAbility, bool, IsInputTowardsTarget,
        (app::SeinSpiritLeashAbility* this_ptr, app::Vector3 target_dir, app::Vector3 input_dir, bool is_current_target, float* angle_difference)) {
        if (overwrite_target)
            input_dir = dir;

        return SeinSpiritLeashAbility::IsInputTowardsTarget(this_ptr, target_dir, input_dir, is_current_target, angle_difference);
    }

    IL2CPP_INTERCEPT(, SeinCharacter, bool, get_FaceLeft, (app::SeinCharacter* this_ptr)) {
        if (overwrite_target)
            return dir.x < 0;
        else
            return SeinCharacter::get_FaceLeft(this_ptr);
    }
}

INJECT_C_DLLEXPORT void set_mouse_controls()
{
    dig_mouse_control = csharp_bridge::check_ini("BurrowMouseControl");
    swim_dash_mouse_control = csharp_bridge::check_ini("WaterDashMouseControl");
    grapple_mouse_control = csharp_bridge::check_ini("GrappleMouseControl");
}

INJECT_C_DLLEXPORT bool get_axis_inverted(bool horizontal)
{
    return horizontal ? invert_x : invert_y;
}

INJECT_C_DLLEXPORT void set_axis_inverted(bool horizontal, bool value)
{
    (horizontal ? invert_x : invert_y) = value;
}
