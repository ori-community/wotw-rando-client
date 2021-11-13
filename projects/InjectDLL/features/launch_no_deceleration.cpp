#include <dll_main.h>
#include <features/invert_swim.h>

#include <csharp_bridge.h>

#include <Il2CppModLoader/console.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <uber_states\uber_state_manager.h>

using namespace modloader;

namespace
{
    constexpr float NO_AIR_DECELERATION_DURATION = 0.2f;
    float aim_timer = 0.0f;

    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    bool is_aiming_launch()
    {
        aim_timer -= TimeUtility::get_deltaTime();
        auto* sein = get_sein();
        auto* wrapper = sein->fields.Abilities->fields.ChargeJumpWrapper;
        if (wrapper->fields.HasState && wrapper->fields.State->fields.m_state == app::SeinChargeJump_State__Enum_Aiming)
            aim_timer = NO_AIR_DECELERATION_DURATION;

        return aim_timer > 0.0f;
    }

    IL2CPP_INTERCEPT(, CharacterAirNoDeceleration, void, UpdateCharacterState, (app::CharacterAirNoDeceleration* this_ptr)) {
        auto* platform_behaviour = this_ptr->fields.PlatformBehaviour;
        auto* platform_movement = platform_behaviour->fields.PlatformMovement;
        if (!il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsSuspended")->fields)
        {
            if (il2cpp::invoke<app::Boolean__Boxed>(platform_movement, "get_IsOnGround")->fields)
                this_ptr->fields.m_noDeceleration = false;

            if (0.00000000 <= il2cpp::invoke<app::Single__Boxed>(platform_movement, "get_LocalSpeedY")->fields &&
                platform_movement->fields._.Ceiling->fields.IsOn)
                this_ptr->fields.m_noDeceleration = false;

            auto* left_right_movement = platform_behaviour->fields.LeftRightMovement;
            if (!left_right_movement->fields.m_settings->fields.LockInput &&
                !is_aiming_launch() &&
                left_right_movement->fields.m_horizontalInput != 0.0)
                this_ptr->fields.m_noDeceleration = false;
        }
    }
}
