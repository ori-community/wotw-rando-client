#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <uber_states/uber_state_interface.h>

using namespace modloader;

namespace
{
    uber_states::UberState on_jump(UberStateGroup::GameState, 30);
    uber_states::UberState on_double_jump(UberStateGroup::GameState, 31);
    uber_states::UberState on_dash(UberStateGroup::GameState, 32);
    uber_states::UberState on_bash(UberStateGroup::GameState, 33);
    uber_states::UberState on_glide(UberStateGroup::GameState, 34);
    uber_states::UberState on_sword(UberStateGroup::GameState, 35);
    uber_states::UberState on_hammer(UberStateGroup::GameState, 36);
    uber_states::UberState on_spear(UberStateGroup::GameState, 37);
    uber_states::UberState on_shuriken(UberStateGroup::GameState, 38);
    uber_states::UberState on_grenade(UberStateGroup::GameState, 39);
    uber_states::UberState on_bow(UberStateGroup::GameState, 40);
    uber_states::UberState on_blaze(UberStateGroup::GameState, 41);
    uber_states::UberState on_sentry(UberStateGroup::GameState, 42);
    uber_states::UberState on_flash(UberStateGroup::GameState, 43);
    uber_states::UberState on_launch(UberStateGroup::GameState, 44);
    uber_states::UberState on_wall_jump(UberStateGroup::GameState, 45);
    uber_states::UberState on_burrow(UberStateGroup::GameState, 46);
    uber_states::UberState on_water_dash(UberStateGroup::GameState, 47);
    uber_states::UberState on_flap(UberStateGroup::GameState, 48);
    uber_states::UberState on_regenerate(UberStateGroup::GameState, 49);

    IL2CPP_INTERCEPT(, SeinJump, void, PerformJump, (app::SeinJump* this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, "", "SeinJump");
        // TODO: Maybe check if we are on a wall and then not do this?
        if (is_ability)
            on_jump.set(1);
        PerformJump(this_ptr);
        if (is_ability)
            on_jump.set(0);
    }

    IL2CPP_INTERCEPT(, SeinJump, void, PerformSpringJump, (app::SeinJump* this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, "", "SeinJump");
        if (is_ability)
            on_jump.set(1);
        PerformSpringJump(this_ptr);
        if (is_ability)
            on_jump.set(0);
    }

    IL2CPP_INTERCEPT(, SeinDoubleJump, void, PerformDoubleJump, (app::SeinDoubleJump* this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, "", "SeinDoubleJump");
        if (is_ability)
            on_double_jump.set(1);
        PerformDoubleJump(this_ptr);
        if (is_ability)
            on_double_jump.set(1);
    }

    IL2CPP_INTERCEPT(, SeinBashAttack, void, BeginBash, (app::SeinBashAttack* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinBashAttack"))
            on_bash.set(1);
        BeginBash(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBashAttack, void, ExitBash, (app::SeinBashAttack* this_ptr)) {
        ExitBash(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinBashAttack"))
            on_bash.set(0);
    }

    IL2CPP_INTERCEPT(, SeinGlide, void, EnterGlide, (app::SeinGlide* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinGlide"))
            on_dash.set(1);
        EnterGlide(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinGlide, void, ExitGlide, (app::SeinGlide* this_ptr)) {
        ExitGlide(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinGlide"))
            on_dash.set(0);
    }

    IL2CPP_INTERCEPT(Moon, MeleeComboMoveSwordCharge, void, EnterMove, (app::MeleeComboMoveSwordCharge* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSwordCharge"))
            on_sword.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(Moon, MeleeComboMoveSwordCharge, void, ExitMove, (app::MeleeComboMoveSwordCharge* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSwordCharge"))
            on_sword.set(0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSwordAirDown, void, EnterMove, (app::MeleeComboMoveSwordAirDown* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSwordAirDown"))
            on_sword.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSwordAirDown, void, ExitMove, (app::MeleeComboMoveSwordAirDown* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSwordAirDown"))
            on_sword.set(0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSword, void, EnterMove, (app::MeleeComboMoveSword* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSword"))
            on_sword.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveSword, void, ExitMove, (app::MeleeComboMoveSword* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveSword"))
            on_sword.set(0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerSimple, void, EnterMove, (app::MeleeComboMoveHammerSimple* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerSimple"))
            on_hammer.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerSimple, void, ExitMove, (app::MeleeComboMoveHammerSimple* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerSimple"))
            on_hammer.set(0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammer, void, EnterMove, (app::MeleeComboMoveHammer* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammer"))
            on_hammer.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammer, void, ExitMove, (app::MeleeComboMoveHammer* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammer"))
            on_hammer.set(0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerChargeable, void, EnterMove, (app::MeleeComboMoveHammerChargeable* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerChargeable"))
            on_hammer.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerChargeable, void, ExitMove, (app::MeleeComboMoveHammerChargeable* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerChargeable"))
            on_hammer.set(0);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerStomp, void, EnterMove, (app::MeleeComboMoveHammerStomp* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerStomp"))
            on_hammer.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, MeleeComboMoveHammerStomp, void, ExitMove, (app::MeleeComboMoveHammerStomp* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "MeleeComboMoveHammerStomp"))
            on_hammer.set(0);
    }

    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, EnterMove, (app::SeinSpiritSpearSpell* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinSpiritSpearSpell"))
            on_spear.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinSpiritSpearSpell, void, ExitMove, (app::SeinSpiritSpearSpell* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinSpiritSpearSpell"))
            on_spear.set(0);
    }

    IL2CPP_INTERCEPT(, SeinChakramSpell, void, EnterMove, (app::SeinChakramSpell* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinChakramSpell"))
            on_shuriken.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinChakramSpell, void, ExitMove, (app::SeinChakramSpell* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinChakramSpell"))
            on_shuriken.set(0);
    }

    bool ignore_end_grenade = false;
    IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, CancelAiming, (app::SeinGrenadeAttack* this_ptr)) {
        ScopedSetter ieg(ignore_end_grenade, true);
        SeinGrenadeAttack::CancelAiming(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinGrenadeAttack, void, EndAiming, (app::SeinGrenadeAttack* this_ptr)) {
        if (!ignore_end_grenade)
            on_grenade.set(1);
        SeinGrenadeAttack::EndAiming(this_ptr);
        if (!ignore_end_grenade)
            on_grenade.set(0);
    }

    IL2CPP_INTERCEPT(, SeinBowAttack, void, ReleaseArrow, (app::SeinBowAttack* this_ptr)) {
        on_bow.set(1);
        ReleaseArrow(this_ptr);
        on_bow.set(0);
    }

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, OnEnterBlazeQuick, (app::SeinBlazeSpell* this_ptr)) {
        on_blaze.set(1);
        OnEnterBlazeQuick(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, OnExitBlazeQuick, (app::SeinBlazeSpell* this_ptr)) {
        OnExitBlazeQuick(this_ptr);
        on_blaze.set(0);
    }

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, OnEnterBlazeFullCharge, (app::SeinBlazeSpell* this_ptr)) {
        on_blaze.set(1);
        OnEnterBlazeFullCharge(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinBlazeSpell, void, OnExitBlazeFullCharge, (app::SeinBlazeSpell* this_ptr)) {
        OnExitBlazeFullCharge(this_ptr);
        on_blaze.set(0);
    }

    IL2CPP_INTERCEPT(, SeinTurretSpell, void, ChangeState, (app::SeinTurretSpell* this_ptr, app::SeinTurretSpell_State__Enum state)) {
        if (state == app::SeinTurretSpell_State__Enum_StartReleasing)
            on_sentry.set(1);

        ChangeState(this_ptr, state);
        if (state == app::SeinTurretSpell_State__Enum_Idle && on_sentry.get<bool>())
            on_sentry.set(0);
    }

    IL2CPP_INTERCEPT(, SeinGlowSpell, void, OnEnterQuickGlow, (app::SeinGlowSpell* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinGlowSpell"))
            on_flash.set(1);
        OnEnterQuickGlow(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinGlowSpell, void, OnExitQuickGlow, (app::SeinGlowSpell* this_ptr)) {
        OnExitQuickGlow(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinGlowSpell"))
            on_flash .set(0);
    }

    IL2CPP_INTERCEPT(, SeinChargeJump, void, EnterMove, (app::SeinChargeJump* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinChargeJump"))
            on_launch.set(1);
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinChargeJump, void, ExitMove, (app::SeinChargeJump* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinChargeJump"))
            on_launch.set(0);
    }

    IL2CPP_INTERCEPT(, SeinWallJump, void, PerformWallJump, (app::SeinWallJump* this_ptr, bool to_left)) {
        on_wall_jump.set(1);
        PerformWallJump(this_ptr, to_left);
        on_wall_jump.set(0);
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
                on_burrow.set(1);
                digging = true;
            }
            else if (SeinDashNew::ShouldSwim(this_ptr) || swimming_on_surface)
                on_water_dash.set(1);
            else if (on_water_dash.get<bool>())
                on_dash.set(1);
        }
        EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinDashNew, void, ExitMove, (app::SeinDashNew* this_ptr)) {
        ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinDashNew"))
        {
            if (swimming_on_surface)
                on_water_dash.set(0);
            else if (digging && !out_of_water) // Special case if we are starting to burrow while underwater
                on_burrow.set(0);
            else if (on_dash.get<bool>())
                on_dash.set(0);
        }
    }

    IL2CPP_INTERCEPT(, SeinDigging, void, StartDashing, (app::SeinDigging* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinDigging"))
            on_burrow.set(1);
        StartDashing(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinDigging, void, EndDash, (app::SeinDigging* this_ptr)) {
        EndDash(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinDigging"))
            on_burrow.set(0);
    }

    IL2CPP_INTERCEPT(, SeinSwimming, void, ChangeState, (app::SeinSwimming* this_ptr, app::SeinSwimming_State__Enum state)) {
        out_of_water = state == app::SeinSwimming_State__Enum_OutOfWater;
        swimming_on_surface = state == app::SeinSwimming_State__Enum_SwimmingOnSurface;
        switch (state)
        {
        case app::SeinSwimming_State__Enum_Dashing:
        case app::SeinSwimming_State__Enum_SurfaceDash:
            on_water_dash.set(1);
            break;
        default:
            if (on_water_dash.get<bool>())
                on_water_dash.set(0);
            break;
        }

        ChangeState(this_ptr, state);
    }

    IL2CPP_INTERCEPT(, SeinFeatherFlap, void, EnterAttack, (app::SeinFeatherFlap* this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, "", "SeinFeatherFlap"))
            on_flap.set(1);
        EnterAttack(this_ptr);
    }

    IL2CPP_INTERCEPT(, SeinFeatherFlap, void, ExitAttack, (app::SeinFeatherFlap* this_ptr)) {
        ExitAttack(this_ptr);
        if (il2cpp::is_assignable(this_ptr, "", "SeinFeatherFlap"))
            on_flap.set(0);
    }

    IL2CPP_INTERCEPT(, SeinMeditateSpell, void, UpdateCharacterState, (app::SeinMeditateSpell* this_ptr)) {
        auto old = this_ptr->fields.CurrentState;
        UpdateCharacterState(this_ptr);
        auto current = this_ptr->fields.CurrentState;
        if (old != app::SeinMeditateSpell_State__Enum_Heal && current == app::SeinMeditateSpell_State__Enum_Heal)
            on_regenerate.set(1);
        else if (old == app::SeinMeditateSpell_State__Enum_Heal && current == app::SeinMeditateSpell_State__Enum_Idle)
            on_regenerate.set(0);
    }
}
