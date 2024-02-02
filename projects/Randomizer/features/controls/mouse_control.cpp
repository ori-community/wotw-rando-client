#include <Randomizer/features/controls/mouse_control.h>

#include <Core/api/game/player.h>
#include <Core/settings.h>

#include <Modloader/app/methods/Core/Input.h>
#include <Modloader/app/methods/MoonInput.h>
#include <Modloader/app/methods/SeinCharacter.h>
#include <Modloader/app/methods/SeinDashNew.h>
#include <Modloader/app/methods/SeinDigging.h>
#include <Modloader/app/methods/SeinSpiritLeashAbility.h>
#include <Modloader/app/methods/SeinSwimming.h>
#include <Modloader/app/methods/UnityEngine/Behaviour.h>
#include <Modloader/app/methods/UnityEngine/Camera.h>
#include <Modloader/app/types/GameSettings.h>
#include <Modloader/app/types/PlayerInput.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>

#include <Modloader/app/types/Input_Cmd.h>
#include <cmath>
#include <limits>

#undef max

using namespace app::classes;
using namespace app::classes::UnityEngine;

namespace {
    bool invert_x = false;
    bool invert_y = false;

    float mouse_control_deadzone = 50.f;

    bool allow_hybrid_movement = false;
    bool allow_mouse_only_movement = false;
    bool allow_mouse_control = false;

    app::ControlScheme__Enum get_current_control_scheme() {
        static app::GameSettings* settings = nullptr;
        if (il2cpp::unity::is_valid(settings))
            return settings->fields.m_currentControlSchemes;

        settings = types::GameSettings::get_class()->static_fields->Instance;
        return il2cpp::unity::is_valid(settings)
            ? settings->fields.m_currentControlSchemes
            : app::ControlScheme__Enum::KeyboardAndMouse;
    }

    bool current_control_scheme_is_kbm() {
        auto scheme = get_current_control_scheme();
        return scheme == app::ControlScheme__Enum::KeyboardAndMouse || scheme == app::ControlScheme__Enum::Keyboard;
    }

    bool is_movement_input_pressed() {
        auto input_cmd = types::Input_Cmd::get_class();
        return input_cmd->static_fields->Up->fields.IsPressed || input_cmd->static_fields->Down->fields.IsPressed || input_cmd->static_fields->Left->fields.IsPressed || input_cmd->static_fields->Right->fields.IsPressed;
    }

    // float current, float target, ref float currentVelocity, float smoothTime, float maxSpeed = Mathf.Infinity, float deltaTime = Time.deltaTime
    bool deadzone_active = false;
    app::Camera* camera = nullptr;
    app::Vector2 get_mouse_dir() {
        if (camera == nullptr || !Behaviour::get_enabled(reinterpret_cast<app::Behaviour*>(camera))) {
            camera = Camera::get_main();
            if (camera == nullptr || !Behaviour::get_enabled(reinterpret_cast<app::Behaviour*>(camera)))
                return app::Vector2{ 0, 0 };
        }

        auto sein = core::api::game::player::sein();
        auto sein_pos = Camera::WorldToScreenPoint_2(camera, sein->fields.PlatformBehaviour->fields.PlatformMovement->fields.m_oldPosition);
        auto pos = MoonInput::get_mousePosition();
        pos.x -= sein_pos.x;
        pos.y -= sein_pos.y;
        auto magnitude = std::sqrt(pos.x * pos.x + pos.y * pos.y);
        if (deadzone_active && magnitude < mouse_control_deadzone)
            return app::Vector2{ 0 };
        else
            return app::Vector2{ pos.x / magnitude, pos.y / magnitude };
    }

    bool use_mouse_aiming_for_axis_input = false;
    IL2CPP_INTERCEPT(SeinDashNew, bool, ShouldDig, (app::SeinDashNew * this_ptr)) {
        allow_mouse_control = core::settings::burrow_mouse_control() && (!core::settings::hybrid_mouse_control() || !is_movement_input_pressed());

        if (current_control_scheme_is_kbm() && allow_mouse_control)
            use_mouse_aiming_for_axis_input = true;

        auto ret = next::SeinDashNew::ShouldDig(this_ptr);
        use_mouse_aiming_for_axis_input = false;
        return ret;
    }

    IL2CPP_INTERCEPT(SeinDigging, void, UpdateCharacterState, (app::SeinDigging * this_ptr)) {
        allow_mouse_control = core::settings::burrow_mouse_control() && (!core::settings::hybrid_mouse_control() || !is_movement_input_pressed());

        if (current_control_scheme_is_kbm() && allow_mouse_control)
            use_mouse_aiming_for_axis_input = true;

        next::SeinDigging::UpdateCharacterState(this_ptr);
        use_mouse_aiming_for_axis_input = false;
    }

    IL2CPP_INTERCEPT(SeinDashNew, bool, ShouldSwim, (app::SeinDashNew * this_ptr)) {
        allow_mouse_control = core::settings::water_dash_mouse_control() && (!core::settings::hybrid_mouse_control() || !is_movement_input_pressed());

        if (current_control_scheme_is_kbm() && allow_mouse_control) {
            deadzone_active = true;
            use_mouse_aiming_for_axis_input = true;
        }

        auto ret = next::SeinDashNew::ShouldSwim(this_ptr);
        deadzone_active = false;
        use_mouse_aiming_for_axis_input = false;
        return ret;
    }

    IL2CPP_INTERCEPT(SeinSwimming, void, UpdateCharacterState, (app::SeinSwimming * this_ptr)) {
        allow_mouse_control = core::settings::water_dash_mouse_control() && (!core::settings::hybrid_mouse_control() || !is_movement_input_pressed());

        if (current_control_scheme_is_kbm() && allow_mouse_control) {
            use_mouse_aiming_for_axis_input = true;
            deadzone_active = true;
        }

        next::SeinSwimming::UpdateCharacterState(this_ptr);
        use_mouse_aiming_for_axis_input = false;
        deadzone_active = false;
    }

    IL2CPP_INTERCEPT(Core::Input, app::Vector2, get_Axis, ()) {
        app::Vector2 ret{ 0 };
        auto player_input = types::PlayerInput::get_class()->static_fields->Instance;
        if (!player_input->fields.Active)
            return ret;

        if (use_mouse_aiming_for_axis_input && get_current_control_scheme() == app::ControlScheme__Enum::KeyboardAndMouse)
            ret = get_mouse_dir();
        else
            ret = next::Core::Input::get_Axis();

        if (invert_x)
            ret.x = -ret.x;

        if (invert_y)
            ret.y = -ret.y;

        return ret;
    }

    bool overwrite_target = false;
    app::Vector3 dir;
    IL2CPP_INTERCEPT(SeinSpiritLeashAbility, void, FindClosestAttackHandler, (app::SeinSpiritLeashAbility * this_ptr)) {
        if (core::settings::grapple_mouse_control() && current_control_scheme_is_kbm()) {
            auto dir2 = get_mouse_dir();
            dir.x = dir2.x;
            dir.y = dir2.y;
            overwrite_target = true;
        }

        next::SeinSpiritLeashAbility::FindClosestAttackHandler(this_ptr);
        overwrite_target = false;
    }

    IL2CPP_INTERCEPT(SeinSpiritLeashAbility, bool, IsInputTowardsTarget, (app::SeinSpiritLeashAbility * this_ptr, app::Vector3 target_dir, app::Vector3 input_dir, bool is_current_target, float* angle_difference)) {
        if (overwrite_target)
            input_dir = dir;

        return next::SeinSpiritLeashAbility::IsInputTowardsTarget(this_ptr, target_dir, input_dir, is_current_target, angle_difference);
    }

    IL2CPP_INTERCEPT(SeinCharacter, bool, get_FaceLeft, (app::SeinCharacter * this_ptr)) {
        if (overwrite_target)
            return dir.x < 0;
        else
            return next::SeinCharacter::get_FaceLeft(this_ptr);
    }
} // namespace

RANDOMIZER_C_DLLEXPORT bool get_axis_inverted(bool horizontal) {
    return horizontal ? invert_x : invert_y;
}

RANDOMIZER_C_DLLEXPORT void set_axis_inverted(bool horizontal, bool value) {
    (horizontal ? invert_x : invert_y) = value;
}
