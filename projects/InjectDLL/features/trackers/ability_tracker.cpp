#include <macros.h>

#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/interception_macros.h>
#include <Il2CppModLoader/app/methods/SeinJump.h>
#include <Il2CppModLoader/app/methods/SeinDoubleJump.h>
#include <Il2CppModLoader/app/methods/SeinBashAttack.h>
#include <Il2CppModLoader/app/methods/SeinGlide.h>
#include <Il2CppModLoader/app/methods/Moon/MeleeComboMoveSwordCharge.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveSwordAirDown.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveSword.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveHammerSimple.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveHammer.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveHammerChargeable.h>
#include <Il2CppModLoader/app/methods/MeleeComboMoveHammerStomp.h>
#include <Il2CppModLoader/app/methods/SeinSpiritSpearSpell.h>
#include <Il2CppModLoader/app/methods/SeinChakramSpell.h>
#include <Il2CppModLoader/app/methods/SeinGrenadeAttack.h>
#include <Il2CppModLoader/app/methods/SeinBowAttack.h>
#include <Il2CppModLoader/app/methods/SeinBlazeSpell.h>
#include <Il2CppModLoader/app/methods/SeinTurretSpell.h>
#include <Il2CppModLoader/app/methods/SeinGlowSpell.h>
#include <Il2CppModLoader/app/methods/SeinChargeJump.h>
#include <Il2CppModLoader/app/methods/SeinWallJump.h>
#include <Il2CppModLoader/app/methods/SeinDashNew.h>
#include <Il2CppModLoader/app/methods/SeinDigging.h>
#include <Il2CppModLoader/app/methods/SeinSwimming.h>
#include <Il2CppModLoader/app/methods/SeinFeatherFlap.h>
#include <Il2CppModLoader/app/methods/SeinMeditateSpell.h>
#include <Il2CppModLoader/app/types/SeinFeatherFlap.h>
#include <Il2CppModLoader/app/types/SeinDigging.h>
#include <Il2CppModLoader/app/types/SeinDashNew.h>
#include <Il2CppModLoader/app/types/SeinChargeJump.h>
#include <Il2CppModLoader/app/types/SeinGlowSpell.h>
#include <Il2CppModLoader/app/types/SeinChakramSpell.h>
#include <Il2CppModLoader/app/types/SeinSpiritSpearSpell.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveHammerStomp.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveHammerChargeable.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveHammer.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveHammerSimple.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveSword.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveSwordAirDown.h>
#include <Il2CppModLoader/app/types/MeleeComboMoveSwordCharge.h>
#include <Il2CppModLoader/app/types/SeinGlide.h>
#include <Il2CppModLoader/app/types/SeinBashAttack.h>
#include <Il2CppModLoader/app/types/SeinDoubleJump.h>
#include <Il2CppModLoader/app/types/SeinJump.h>
#include <uber_states/uber_state_interface.h>

using namespace modloader;
using namespace app::classes;

namespace {
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

    IL2CPP_INTERCEPT(SeinJump, void, PerformJump, (app::SeinJump * this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, types::SeinJump::get_class());
        // TODO: Maybe check if we are on a wall and then not do this?
        if (is_ability)
            on_jump.set(1);
        next::SeinJump::PerformJump(this_ptr);
        if (is_ability)
            on_jump.set(0);
    }

    IL2CPP_INTERCEPT(SeinJump, void, PerformSpringJump, (app::SeinJump * this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, types::SeinJump::get_class());
        if (is_ability)
            on_jump.set(1);
        next::SeinJump::PerformSpringJump(this_ptr);
        if (is_ability)
            on_jump.set(0);
    }

    IL2CPP_INTERCEPT(SeinDoubleJump, void, PerformDoubleJump, (app::SeinDoubleJump * this_ptr)) {
        auto is_ability = il2cpp::is_assignable(this_ptr, types::SeinDoubleJump::get_class());
        if (is_ability)
            on_double_jump.set(1);
        next::SeinDoubleJump::PerformDoubleJump(this_ptr);
        if (is_ability)
            on_double_jump.set(1);
    }

    IL2CPP_INTERCEPT(SeinBashAttack, void, BeginBash, (app::SeinBashAttack * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinBashAttack::get_class()))
            on_bash.set(1);
        next::SeinBashAttack::BeginBash(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinBashAttack, void, ExitBash, (app::SeinBashAttack * this_ptr)) {
        next::SeinBashAttack::ExitBash(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinBashAttack::get_class()))
            on_bash.set(0);
    }

    IL2CPP_INTERCEPT(SeinGlide, void, EnterGlide, (app::SeinGlide * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinGlide::get_class()))
            on_dash.set(1);
        next::SeinGlide::EnterGlide(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinGlide, void, ExitGlide, (app::SeinGlide * this_ptr)) {
        next::SeinGlide::ExitGlide(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinGlide::get_class()))
            on_dash.set(0);
    }

    IL2CPP_INTERCEPT(Moon::MeleeComboMoveSwordCharge, void, EnterMove, (app::MeleeComboMoveSwordCharge * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSwordCharge::get_class()))
            on_sword.set(1);
        next::Moon::MeleeComboMoveSwordCharge::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(Moon::MeleeComboMoveSwordCharge, void, ExitMove, (app::MeleeComboMoveSwordCharge * this_ptr)) {
        next::Moon::MeleeComboMoveSwordCharge::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSwordCharge::get_class()))
            on_sword.set(0);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveSwordAirDown, void, EnterMove, (app::MeleeComboMoveSwordAirDown * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSwordAirDown::get_class()))
            on_sword.set(1);
        next::MeleeComboMoveSwordAirDown::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveSwordAirDown, void, ExitMove, (app::MeleeComboMoveSwordAirDown * this_ptr)) {
        next::MeleeComboMoveSwordAirDown::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSwordAirDown::get_class()))
            on_sword.set(0);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveSword, void, EnterMove, (app::MeleeComboMoveSword * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSword::get_class()))
            on_sword.set(1);
        next::MeleeComboMoveSword::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveSword, void, ExitMove, (app::MeleeComboMoveSword * this_ptr)) {
        next::MeleeComboMoveSword::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSword::get_class()))
            on_sword.set(0);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerSimple, void, EnterMove, (app::MeleeComboMoveHammerSimple * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerSimple::get_class()))
            on_hammer.set(1);
        next::MeleeComboMoveHammerSimple::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerSimple, void, ExitMove, (app::MeleeComboMoveHammerSimple * this_ptr)) {
        next::MeleeComboMoveHammerSimple::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerSimple::get_class()))
            on_hammer.set(0);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammer, void, EnterMove, (app::MeleeComboMoveHammer * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammer::get_class()))
            on_hammer.set(1);
        next::MeleeComboMoveHammer::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammer, void, ExitMove, (app::MeleeComboMoveHammer * this_ptr)) {
        next::MeleeComboMoveHammer::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammer::get_class()))
            on_hammer.set(0);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerChargeable, void, EnterMove,
                     (app::MeleeComboMoveHammerChargeable * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerChargeable::get_class()))
            on_hammer.set(1);
        next::MeleeComboMoveHammerChargeable::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerChargeable, void, ExitMove, (app::MeleeComboMoveHammerChargeable * this_ptr)) {
        next::MeleeComboMoveHammerChargeable::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerChargeable::get_class()))
            on_hammer.set(0);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerStomp, void, EnterMove, (app::MeleeComboMoveHammerStomp * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerStomp::get_class()))
            on_hammer.set(1);
        next::MeleeComboMoveHammerStomp::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(MeleeComboMoveHammerStomp, void, ExitMove, (app::MeleeComboMoveHammerStomp * this_ptr)) {
        next::MeleeComboMoveHammerStomp::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerStomp::get_class()))
            on_hammer.set(0);
    }

    IL2CPP_INTERCEPT(SeinSpiritSpearSpell, void, EnterMove, (app::SeinSpiritSpearSpell * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinSpiritSpearSpell::get_class()))
            on_spear.set(1);
        next::SeinSpiritSpearSpell::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinSpiritSpearSpell, void, ExitMove, (app::SeinSpiritSpearSpell * this_ptr)) {
        next::SeinSpiritSpearSpell::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinSpiritSpearSpell::get_class()))
            on_spear.set(0);
    }

    IL2CPP_INTERCEPT(SeinChakramSpell, void, EnterMove, (app::SeinChakramSpell * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinChakramSpell::get_class()))
            on_shuriken.set(1);
        next::SeinChakramSpell::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinChakramSpell, void, ExitMove, (app::SeinChakramSpell * this_ptr)) {
        next::SeinChakramSpell::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinChakramSpell::get_class()))
            on_shuriken.set(0);
    }

    bool ignore_end_grenade = false;
    IL2CPP_INTERCEPT(SeinGrenadeAttack, void, CancelAiming, (app::SeinGrenadeAttack * this_ptr)) {
        ScopedSetter ieg(ignore_end_grenade, true);
        next::SeinGrenadeAttack::CancelAiming(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinGrenadeAttack, void, EndAiming, (app::SeinGrenadeAttack * this_ptr)) {
        if (!ignore_end_grenade)
            on_grenade.set(1);
        next::SeinGrenadeAttack::EndAiming(this_ptr);
        if (!ignore_end_grenade)
            on_grenade.set(0);
    }

    IL2CPP_INTERCEPT(SeinBowAttack, void, ReleaseArrow, (app::SeinBowAttack * this_ptr)) {
        on_bow.set(1);
        next::SeinBowAttack::ReleaseArrow(this_ptr);
        on_bow.set(0);
    }

    IL2CPP_INTERCEPT(SeinBlazeSpell, void, OnEnterBlazeQuick, (app::SeinBlazeSpell * this_ptr)) {
        on_blaze.set(1);
        next::SeinBlazeSpell::OnEnterBlazeQuick(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinBlazeSpell, void, OnExitBlazeQuick, (app::SeinBlazeSpell * this_ptr)) {
        next::SeinBlazeSpell::OnExitBlazeQuick(this_ptr);
        on_blaze.set(0);
    }

    IL2CPP_INTERCEPT(SeinBlazeSpell, void, OnEnterBlazeFullCharge, (app::SeinBlazeSpell * this_ptr)) {
        on_blaze.set(1);
        next::SeinBlazeSpell::OnEnterBlazeFullCharge(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinBlazeSpell, void, OnExitBlazeFullCharge, (app::SeinBlazeSpell * this_ptr)) {
        next::SeinBlazeSpell::OnExitBlazeFullCharge(this_ptr);
        on_blaze.set(0);
    }

    IL2CPP_INTERCEPT(SeinTurretSpell, void, ChangeState,
                     (app::SeinTurretSpell * this_ptr, app::SeinTurretSpell_State__Enum state)) {
        if (state == app::SeinTurretSpell_State__Enum::StartReleasing)
            on_sentry.set(1);

        next::SeinTurretSpell::ChangeState(this_ptr, state);
        if (state == app::SeinTurretSpell_State__Enum::Idle && on_sentry.get<bool>())
            on_sentry.set(0);
    }

    IL2CPP_INTERCEPT(SeinGlowSpell, void, OnEnterQuickGlow, (app::SeinGlowSpell * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinGlowSpell::get_class()))
            on_flash.set(1);
        next::SeinGlowSpell::OnEnterQuickGlow(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinGlowSpell, void, OnExitQuickGlow, (app::SeinGlowSpell * this_ptr)) {
        next::SeinGlowSpell::OnExitQuickGlow(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinGlowSpell::get_class()))
            on_flash.set(0);
    }

    IL2CPP_INTERCEPT(SeinChargeJump, void, EnterMove, (app::SeinChargeJump * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinChargeJump::get_class()))
            on_launch.set(1);
        next::SeinChargeJump::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinChargeJump, void, ExitMove, (app::SeinChargeJump * this_ptr)) {
        next::SeinChargeJump::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinChargeJump::get_class()))
            on_launch.set(0);
    }

    IL2CPP_INTERCEPT(SeinWallJump, void, PerformWallJump_2, (app::SeinWallJump * this_ptr, bool to_left)) {
        on_wall_jump.set(1);
        next::SeinWallJump::PerformWallJump_2(this_ptr, to_left);
        on_wall_jump.set(0);
    }

    bool out_of_water = true;
    bool digging = false;
    bool swimming_on_surface = false;
    IL2CPP_INTERCEPT(SeinDashNew, void, EnterMove, (app::SeinDashNew * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinDashNew::get_class())) {
            if (SeinDashNew::ShouldDig(this_ptr)) {
                on_burrow.set(1);
                digging = true;
            } else if (SeinDashNew::ShouldSwim(this_ptr) || swimming_on_surface)
                on_water_dash.set(1);
            else if (on_water_dash.get<bool>())
                on_dash.set(1);
        }
        next::SeinDashNew::EnterMove(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinDashNew, void, ExitMove, (app::SeinDashNew * this_ptr)) {
        next::SeinDashNew::ExitMove(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinDashNew::get_class())) {
            if (swimming_on_surface)
                on_water_dash.set(0);
            else if (digging && !out_of_water) // Special case if we are starting to burrow while underwater
                on_burrow.set(0);
            else if (on_dash.get<bool>())
                on_dash.set(0);
        }
    }

    IL2CPP_INTERCEPT(SeinDigging, void, StartDashing, (app::SeinDigging * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinDigging::get_class()))
            on_burrow.set(1);
        next::SeinDigging::StartDashing(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinDigging, void, EndDash, (app::SeinDigging * this_ptr)) {
        next::SeinDigging::EndDash(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinDigging::get_class()))
            on_burrow.set(0);
    }

    IL2CPP_INTERCEPT(SeinSwimming, void, ChangeState,
                     (app::SeinSwimming * this_ptr, app::SeinSwimming_State__Enum state)) {
        out_of_water = state == app::SeinSwimming_State__Enum::OutOfWater;
        swimming_on_surface = state == app::SeinSwimming_State__Enum::SwimmingOnSurface;
        switch (state) {
            case app::SeinSwimming_State__Enum::Dashing:
            case app::SeinSwimming_State__Enum::SurfaceDash:
                on_water_dash.set(1);
                break;
            default:
                if (on_water_dash.get<bool>())
                    on_water_dash.set(0);
                break;
        }

        next::SeinSwimming::ChangeState(this_ptr, state);
    }

    IL2CPP_INTERCEPT(SeinFeatherFlap, void, EnterAttack, (app::SeinFeatherFlap * this_ptr)) {
        if (il2cpp::is_assignable(this_ptr, types::SeinFeatherFlap::get_class()))
            on_flap.set(1);
        next::SeinFeatherFlap::EnterAttack(this_ptr);
    }

    IL2CPP_INTERCEPT(SeinFeatherFlap, void, ExitAttack, (app::SeinFeatherFlap * this_ptr)) {
        next::SeinFeatherFlap::ExitAttack(this_ptr);
        if (il2cpp::is_assignable(this_ptr, types::SeinFeatherFlap::get_class()))
            on_flap.set(0);
    }

    IL2CPP_INTERCEPT(SeinMeditateSpell, void, UpdateCharacterState, (app::SeinMeditateSpell * this_ptr)) {
        auto old = this_ptr->fields.CurrentState;
        next::SeinMeditateSpell::UpdateCharacterState(this_ptr);
        auto current = this_ptr->fields.CurrentState;
        if (old != app::SeinMeditateSpell_State__Enum::Heal && current == app::SeinMeditateSpell_State__Enum::Heal)
            on_regenerate.set(1);
        else if (old == app::SeinMeditateSpell_State__Enum::Heal && current == app::SeinMeditateSpell_State__Enum::Idle)
            on_regenerate.set(0);
    }
} // namespace
