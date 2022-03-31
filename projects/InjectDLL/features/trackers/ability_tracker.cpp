#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <uber_states/uber_state_manager.h>

using namespace modloader;

namespace
{
    constexpr int JUMP_ID = 30;
    constexpr int DOUBLE_JUMP_ID = 31;
    constexpr int DASH_ID = 32;
    constexpr int BASH_ID = 33;
    constexpr int GLIDE_ID = 34;
    constexpr int SWORD_ID = 35;
    constexpr int HAMMER_ID = 36;
    constexpr int SPIKE_ID = 37;
    constexpr int SPIRIT_STAR_ID = 38;
    constexpr int LIGHT_BURST_ID = 39;
    constexpr int BOW_ID = 40;
    constexpr int BLAZE_ID = 41;
    constexpr int SENTRY_ID = 42;
    constexpr int FLASH_ID = 43;
    constexpr int LAUNCH_ID = 44;
    constexpr int WALL_JUMP_ID = 45;
    constexpr int BURROW_ID = 46;
    constexpr int WATER_DASH_ID = 47;
    constexpr int FLAP_ID = 48;
    constexpr int REGENERATE_ID = 49;

    IL2CPP_INTERCEPT(, SeinJump, void, PerformJump, (app::SeinJump* this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, "", "SeinJump");
        // TODO: Maybe check if we are on a wall and then not do this?
        if (is_ability)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, JUMP_ID, 1);
        PerformJump(this_ptr);
        if (is_ability)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, JUMP_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinJump, void, PerformSpringJump, (app::SeinJump* this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, "", "SeinJump");
        if (is_ability)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, JUMP_ID, 1);
        PerformSpringJump(this_ptr);
        if (is_ability)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, JUMP_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinDoubleJump, void, PerformDoubleJump, (app::SeinDoubleJump* this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, "", "SeinDoubleJump");
        if (is_ability)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, DOUBLE_JUMP_ID, 1);
        PerformDoubleJump(this_ptr);
        if (is_ability)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, DOUBLE_JUMP_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinBashAttack, void, BeginBash, (app::SeinBashAttack* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinBashAttack"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BASH_ID, 1);
        BeginBash(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBashAttack, void, ExitBash, (app::SeinBashAttack* this_ptr)) {
        ExitBash(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinBashAttack"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BASH_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinGlide, void, EnterGlide, (app::SeinGlide* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinGlide"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, DASH_ID, 1);
        EnterGlide(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinGlide, void, ExitGlide, (app::SeinGlide* this_ptr)) {
        ExitGlide(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinGlide"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, DASH_ID, 0);
    }

    IL2CPP_INTERCEPT(Moon, MeleeComboMoveSwordCharge, void, EnterMove, (app::MeleeComboMoveSwordCharge* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSwordCharge"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SWORD_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(Moon, MeleeComboMoveSwordCharge, void, ExitMove, (app::MeleeComboMoveSwordCharge* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSwordCharge"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SWORD_ID, 0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSwordAirDown, void, EnterMove, (app::MeleeComboMoveSwordAirDown* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSwordAirDown"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SWORD_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSwordAirDown, void, ExitMove, (app::MeleeComboMoveSwordAirDown* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSwordAirDown"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SWORD_ID, 0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSword, void, EnterMove, (app::MeleeComboMoveSword* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSword"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SWORD_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSword, void, ExitMove, (app::MeleeComboMoveSword* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSword"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SWORD_ID, 0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerSimple, void, EnterMove, (app::MeleeComboMoveHammerSimple* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerSimple"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, HAMMER_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerSimple, void, ExitMove, (app::MeleeComboMoveHammerSimple* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerSimple"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, HAMMER_ID, 0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammer, void, EnterMove, (app::MeleeComboMoveHammer* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammer"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, HAMMER_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammer, void, ExitMove, (app::MeleeComboMoveHammer* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammer"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, HAMMER_ID, 0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerChargeable, void, EnterMove, (app::MeleeComboMoveHammerChargeable* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerChargeable"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, HAMMER_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerChargeable, void, ExitMove, (app::MeleeComboMoveHammerChargeable* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerChargeable"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, HAMMER_ID, 0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerStomp, void, EnterMove, (app::MeleeComboMoveHammerStomp* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerStomp"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, HAMMER_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerStomp, void, ExitMove, (app::MeleeComboMoveHammerStomp* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerStomp"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, HAMMER_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, EnterMove, (app::SeinSpiritSpearSpell* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinSpiritSpearSpell"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SPIKE_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, ExitMove, (app::SeinSpiritSpearSpell* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinSpiritSpearSpell"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SPIKE_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinChakramSpell, void, EnterMove, (app::SeinChakramSpell* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinChakramSpell"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SPIRIT_STAR_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinChakramSpell, void, ExitMove, (app::SeinChakramSpell* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinChakramSpell"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SPIRIT_STAR_ID, 0);
    }

    bool ignore_end_grenade = false;
    IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, CancelAiming, (app::SeinGrenadeAttack* this_ptr)) {
        ScopedSetter ieg(ignore_end_grenade, true);
        SeinGrenadeAttack::CancelAiming(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, EndAiming, (app::SeinGrenadeAttack* this_ptr)) {
        if (!ignore_end_grenade)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, LIGHT_BURST_ID, 1);
        SeinGrenadeAttack::EndAiming(this_ptr);
        if (!ignore_end_grenade)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, LIGHT_BURST_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinBowAttack, void, ReleaseArrow, (app::SeinBowAttack* this_ptr)) {
        uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BOW_ID, 1);
        ReleaseArrow(this_ptr);
        uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BOW_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, OnEnterBlazeQuick, (app::SeinBlazeSpell* this_ptr)) {
        uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BLAZE_ID, 1);
        OnEnterBlazeQuick(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, OnExitBlazeQuick, (app::SeinBlazeSpell* this_ptr)) {
        OnExitBlazeQuick(this_ptr);
        uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BLAZE_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, OnEnterBlazeFullCharge, (app::SeinBlazeSpell* this_ptr)) {
        uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BLAZE_ID, 1);
        OnEnterBlazeFullCharge(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, OnExitBlazeFullCharge, (app::SeinBlazeSpell* this_ptr)) {
        OnExitBlazeFullCharge(this_ptr);
        uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BLAZE_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinTurretSpell, void, ChangeState, (app::SeinTurretSpell* this_ptr, app::SeinTurretSpell_State__Enum state)) {
        if (state == app::SeinTurretSpell_State__Enum_StartReleasing)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SENTRY_ID, 1);

        ChangeState(this_ptr, state);
        if (state == app::SeinTurretSpell_State__Enum_Idle && uber_states::get_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SENTRY_ID) > 0.5)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, SENTRY_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinGlowSpell, void, OnEnterQuickGlow, (app::SeinGlowSpell* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinGlowSpell"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, FLASH_ID, 1);
        OnEnterQuickGlow(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinGlowSpell, void, OnExitQuickGlow, (app::SeinGlowSpell* this_ptr)) {
        OnExitQuickGlow(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinGlowSpell"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, FLASH_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinChargeJump, void, EnterMove, (app::SeinChargeJump* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinChargeJump"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, LAUNCH_ID, 1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinChargeJump, void, ExitMove, (app::SeinChargeJump* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinChargeJump"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, LAUNCH_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinWallJump, void, PerformWallJump, (app::SeinWallJump* this_ptr, bool to_left)) {
        uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, WALL_JUMP_ID, 1);
        PerformWallJump(this_ptr, to_left);
        uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, WALL_JUMP_ID, 0);
    }

    bool out_of_water = true;
    bool digging = false;
    bool swimming_on_surface = false;
    IL2CPP_BINDING(, SeinDashNew, bool, ShouldDig, (app::SeinDashNew* this_ptr));
    IL2CPP_BINDING(, SeinDashNew, bool, ShouldSwim, (app::SeinDashNew* this_ptr));
    IL2CPP_INTERCEPT(, SeinDashNew, void, EnterMove, (app::SeinDashNew* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinDashNew"))
        {
            if (SeinDashNew::ShouldDig(this_ptr))
            {
                uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BURROW_ID, 1);
                digging = true;
            }
            else if (SeinDashNew::ShouldSwim(this_ptr) || swimming_on_surface)
                uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, WATER_DASH_ID, 1);
            else if (uber_states::get_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, WATER_DASH_ID) < 0.5)
                uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, DASH_ID, 1);
        }
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, ExitMove, (app::SeinDashNew* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinDashNew"))
        {
            if (swimming_on_surface)
                uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, WATER_DASH_ID, 0);
            else if (digging && !out_of_water) // Special case if we are starting to burrow while underwater
                uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BURROW_ID, 0);
            else if (uber_states::get_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, DASH_ID) > 0.5)
                uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, DASH_ID, 0);
        }
    }

    IL2CPP_INTERCEPT(, SeinDigging, void, StartDashing, (app::SeinDigging* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinDigging"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BURROW_ID, 1);
        StartDashing(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinDigging, void, EndDash, (app::SeinDigging* this_ptr)) {
        EndDash(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinDigging"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, BURROW_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinSwimming, void, ChangeState, (app::SeinSwimming* this_ptr, app::SeinSwimming_State__Enum state)) {
        out_of_water = state == app::SeinSwimming_State__Enum_OutOfWater;
        swimming_on_surface = state == app::SeinSwimming_State__Enum_SwimmingOnSurface;
        switch (state)
        {
        case app::SeinSwimming_State__Enum_Dashing:
        case app::SeinSwimming_State__Enum_SurfaceDash:
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, WATER_DASH_ID, 1);
            break;
        default:
            if (uber_states::get_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, WATER_DASH_ID) > 0.5)
                uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, WATER_DASH_ID, 0);
            break;
        }

        ChangeState(this_ptr, state);
    }

    IL2CPP_INTERCEPT(, SeinFeatherFlap, void, EnterAttack, (app::SeinFeatherFlap* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinFeatherFlap"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, FLAP_ID, 1);
        EnterAttack(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinFeatherFlap, void, ExitAttack, (app::SeinFeatherFlap* this_ptr)) {
        ExitAttack(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinFeatherFlap"))
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, FLAP_ID, 0);
    }

    IL2CPP_INTERCEPT(, SeinMeditateSpell, void, UpdateCharacterState, (app::SeinMeditateSpell* this_ptr)) {
        auto old = this_ptr->fields.CurrentState;
        UpdateCharacterState(this_ptr);
        auto current = this_ptr->fields.CurrentState;
        if (old != app::SeinMeditateSpell_State__Enum_Heal && current == app::SeinMeditateSpell_State__Enum_Heal)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, REGENERATE_ID, 1);
        else if (old == app::SeinMeditateSpell_State__Enum_Heal && current == app::SeinMeditateSpell_State__Enum_Idle)
            uber_states::set_uber_state_value(uber_states::constants::GAME_STATE_GROUP_ID, REGENERATE_ID, 0);
    }
}
