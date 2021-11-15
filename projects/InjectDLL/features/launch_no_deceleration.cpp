#include <dll_main.h>

#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;

namespace
{
    constexpr float NO_AIR_DECELERATION_AIM_DURATION = 0.2f;
    constexpr float NO_AIR_DECELERATION_JUMP_DURATION = 0.2f;
    float launch_aim_timeout = 0.0f;
    float crouch_jump_timeout = 0.0f;

    STATIC_IL2CPP_BINDING(Game, UI, bool, get_MainMenuVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_WorldMapVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, get_ShardShopVisible, ());
    STATIC_IL2CPP_BINDING(Game, UI, bool, IsInventoryVisible, ());
    STATIC_IL2CPP_BINDING(, TimeUtility, float, get_deltaTime, ());
    bool can_reset_no_decel_flag()
    {
        auto in_menu = il2cpp::get_class<app::UI__Class>("Game", "UI")->static_fields->m_sMenu->fields.m_equipmentWhellVisible;
        in_menu |= UI::get_MainMenuVisible();
        in_menu |= UI::get_WorldMapVisible();
        in_menu |= UI::get_ShardShopVisible();
        in_menu |= UI::IsInventoryVisible();
        if (!in_menu)
        {
            if (launch_aim_timeout > 0.0f)
                launch_aim_timeout -= TimeUtility::get_deltaTime();
            if (crouch_jump_timeout > 0.0f)
                crouch_jump_timeout -= TimeUtility::get_deltaTime();
        }

        auto* sein = get_sein();
        auto* wrapper = sein->fields.Abilities->fields.ChargeJumpWrapper;
        if (wrapper->fields.HasState && wrapper->fields.State->fields.m_state == app::SeinChargeJump_State__Enum_Aiming)
        {
            launch_aim_timeout = NO_AIR_DECELERATION_AIM_DURATION;
            crouch_jump_timeout = -1.0f;
        }

        return launch_aim_timeout <= 0.0f && crouch_jump_timeout <= 0.0f;
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
                can_reset_no_decel_flag() &&
                left_right_movement->fields.m_horizontalInput != 0.0)
                this_ptr->fields.m_noDeceleration = false;
        }
    }

    IL2CPP_INTERCEPT(, SeinJump, void, PerformCrouchJump, (app::SeinJump* this_ptr, bool* jumped_down_through_platform)) {
        SeinJump::PerformCrouchJump(this_ptr, jumped_down_through_platform);
        crouch_jump_timeout = NO_AIR_DECELERATION_JUMP_DURATION;
    }
}
