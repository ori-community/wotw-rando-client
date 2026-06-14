#include <Randomizer/macros.h>

#include <Core/api/uber_states/uber_state.h>
#include <Modloader/app/methods/MeleeComboMoveHammer.h>
#include <Modloader/app/methods/MeleeComboMoveHammerChargeable.h>
#include <Modloader/app/methods/MeleeComboMoveHammerSimple.h>
#include <Modloader/app/methods/MeleeComboMoveHammerStomp.h>
#include <Modloader/app/methods/MeleeComboMoveSword.h>
#include <Modloader/app/methods/MeleeComboMoveSwordAirDown.h>
#include <Modloader/app/methods/Moon/MeleeComboMoveSwordCharge.h>
#include <Modloader/app/methods/SeinBashAttack.h>
#include <Modloader/app/methods/SeinBlazeSpell.h>
#include <Modloader/app/methods/SeinBowAttack.h>
#include <Modloader/app/methods/SeinChakramSpell.h>
#include <Modloader/app/methods/SeinChargeJump.h>
#include <Modloader/app/methods/SeinDashNew.h>
#include <Modloader/app/methods/SeinDigging.h>
#include <Modloader/app/methods/SeinDoubleJump.h>
#include <Modloader/app/methods/SeinFeatherFlap.h>
#include <Modloader/app/methods/SeinGlide.h>
#include <Modloader/app/methods/SeinGlowSpell.h>
#include <Modloader/app/methods/SeinGrenadeAttack.h>
#include <Modloader/app/methods/SeinJump.h>
#include <Modloader/app/methods/SeinMeditateSpell.h>
#include <Modloader/app/methods/SeinSpiritSpearSpell.h>
#include <Modloader/app/methods/SeinSwimming.h>
#include <Modloader/app/methods/SeinTurretSpell.h>
#include <Modloader/app/methods/SeinWallJump.h>
#include <Modloader/app/methods/SeinSpiritLeashAbility.h>
#include <Modloader/app/types/MeleeComboMoveHammer.h>
#include <Modloader/app/types/MeleeComboMoveHammerChargeable.h>
#include <Modloader/app/types/MeleeComboMoveHammerSimple.h>
#include <Modloader/app/types/MeleeComboMoveHammerStomp.h>
#include <Modloader/app/types/MeleeComboMoveSword.h>
#include <Modloader/app/types/MeleeComboMoveSwordAirDown.h>
#include <Modloader/app/types/MeleeComboMoveSwordCharge.h>
#include <Modloader/app/types/SeinBashAttack.h>
#include <Modloader/app/types/SeinChakramSpell.h>
#include <Modloader/app/types/SeinChargeJump.h>
#include <Modloader/app/types/SeinDashNew.h>
#include <Modloader/app/types/SeinDigging.h>
#include <Modloader/app/types/SeinDoubleJump.h>
#include <Modloader/app/types/SeinFeatherFlap.h>
#include <Modloader/app/types/SeinGlide.h>
#include <Modloader/app/types/SeinGlowSpell.h>
#include <Modloader/app/types/SeinJump.h>
#include <Modloader/app/types/SeinSpiritSpearSpell.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

namespace {
    // core::api::uber_states::UberState on_jump(UberStateGroup::RandoEvents, 30);
    // core::api::uber_states::UberState on_double_jump(UberStateGroup::RandoEvents, 31);
    // core::api::uber_states::UberState on_dash(UberStateGroup::RandoEvents, 32);
    // core::api::uber_states::UberState on_bash(UberStateGroup::RandoEvents, 33);
    // core::api::uber_states::UberState on_glide(UberStateGroup::RandoEvents, 34);
    // core::api::uber_states::UberState on_sword(UberStateGroup::RandoEvents, 35);
    // core::api::uber_states::UberState on_hammer(UberStateGroup::RandoEvents, 36);
    // core::api::uber_states::UberState on_spear(UberStateGroup::RandoEvents, 37);
    // core::api::uber_states::UberState on_shuriken(UberStateGroup::RandoEvents, 38);
    // core::api::uber_states::UberState on_grenade(UberStateGroup::RandoEvents, 39);
    // core::api::uber_states::UberState on_bow(UberStateGroup::RandoEvents, 40);
    // core::api::uber_states::UberState on_blaze(UberStateGroup::RandoEvents, 41);
    // core::api::uber_states::UberState on_sentry(UberStateGroup::RandoEvents, 42);
    // core::api::uber_states::UberState on_flash(UberStateGroup::RandoEvents, 43);
    // core::api::uber_states::UberState on_launch(UberStateGroup::RandoEvents, 44);
    // core::api::uber_states::UberState on_wall_jump(UberStateGroup::RandoEvents, 45);
    // core::api::uber_states::UberState on_burrow(UberStateGroup::RandoEvents, 46);
    // core::api::uber_states::UberState on_water_dash(UberStateGroup::RandoEvents, 47);
    // core::api::uber_states::UberState on_flap(UberStateGroup::RandoEvents, 48);
    // core::api::uber_states::UberState on_regenerate(UberStateGroup::RandoEvents, 49);
    // core::api::uber_states::UberState on_grapple(UberStateGroup::RandoEvents, 50);
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinJump, PerformJump, app::SeinJump* this_ptr) {
    //     auto is_ability = il2cpp::is_assignable(this_ptr, types::SeinJump::get_class());
    //     // TODO: Maybe check if we are on a wall and then not do this?
    //     if (is_ability) {
    //         on_jump.set(1);
    //     }
    //     next::SeinJump::PerformJump(this_ptr);
    //     if (is_ability) {
    //         on_jump.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinJump, PerformSpringJump, app::SeinJump* this_ptr) {
    //     auto is_ability = il2cpp::is_assignable(this_ptr, types::SeinJump::get_class());
    //     if (is_ability) {
    //         on_jump.set(1);
    //     }
    //     next::SeinJump::PerformSpringJump(this_ptr);
    //     if (is_ability) {
    //         on_jump.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinDoubleJump, PerformDoubleJump, app::SeinDoubleJump* this_ptr) {
    //     auto is_ability = il2cpp::is_assignable(this_ptr, types::SeinDoubleJump::get_class());
    //     if (is_ability) {
    //         on_double_jump.set(1);
    //     }
    //     next::SeinDoubleJump::PerformDoubleJump(this_ptr);
    //     if (is_ability) {
    //         on_double_jump.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinBashAttack, BeginBash, app::SeinBashAttack* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinBashAttack::get_class())) {
    //         on_bash.set(1);
    //     }
    //     next::SeinBashAttack::BeginBash(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinBashAttack, ExitBash, app::SeinBashAttack* this_ptr) {
    //     next::SeinBashAttack::ExitBash(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinBashAttack::get_class())) {
    //         on_bash.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinGlide, EnterGlide, app::SeinGlide* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinGlide::get_class())) {
    //         on_glide.set(1);
    //     }
    //     next::SeinGlide::EnterGlide(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinGlide, ExitGlide, app::SeinGlide* this_ptr) {
    //     next::SeinGlide::ExitGlide(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinGlide::get_class())) {
    //         on_glide.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, Moon::MeleeComboMoveSwordCharge, EnterMove, app::MeleeComboMoveSwordCharge* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSwordCharge::get_class())) {
    //         on_sword.set(1);
    //     }
    //     next::Moon::MeleeComboMoveSwordCharge::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, Moon::MeleeComboMoveSwordCharge, ExitMove, app::MeleeComboMoveSwordCharge* this_ptr) {
    //     next::Moon::MeleeComboMoveSwordCharge::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSwordCharge::get_class())) {
    //         on_sword.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveSwordAirDown, EnterMove, app::MeleeComboMoveSwordAirDown* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSwordAirDown::get_class())) {
    //         on_sword.set(1);
    //     }
    //     next::MeleeComboMoveSwordAirDown::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveSwordAirDown, ExitMove, app::MeleeComboMoveSwordAirDown* this_ptr) {
    //     next::MeleeComboMoveSwordAirDown::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSwordAirDown::get_class())) {
    //         on_sword.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveSword, EnterMove, app::MeleeComboMoveSword* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSword::get_class())) {
    //         on_sword.set(1);
    //     }
    //     next::MeleeComboMoveSword::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveSword, ExitMove, app::MeleeComboMoveSword* this_ptr) {
    //     next::MeleeComboMoveSword::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveSword::get_class())) {
    //         on_sword.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveHammerSimple, EnterMove, app::MeleeComboMoveHammerSimple* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerSimple::get_class())) {
    //         on_hammer.set(1);
    //     }
    //     next::MeleeComboMoveHammerSimple::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveHammerSimple, ExitMove, app::MeleeComboMoveHammerSimple* this_ptr) {
    //     next::MeleeComboMoveHammerSimple::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerSimple::get_class())) {
    //         on_hammer.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveHammer, EnterMove, app::MeleeComboMoveHammer* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammer::get_class())) {
    //         on_hammer.set(1);
    //     }
    //     next::MeleeComboMoveHammer::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveHammer, ExitMove, app::MeleeComboMoveHammer* this_ptr) {
    //     next::MeleeComboMoveHammer::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammer::get_class())) {
    //         on_hammer.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveHammerChargeable, EnterMove, app::MeleeComboMoveHammerChargeable* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerChargeable::get_class())) {
    //         on_hammer.set(1);
    //     }
    //     next::MeleeComboMoveHammerChargeable::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveHammerChargeable, ExitMove, app::MeleeComboMoveHammerChargeable* this_ptr) {
    //     next::MeleeComboMoveHammerChargeable::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerChargeable::get_class())) {
    //         on_hammer.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveHammerStomp, EnterMove, app::MeleeComboMoveHammerStomp* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerStomp::get_class())) {
    //         on_hammer.set(1);
    //     }
    //     next::MeleeComboMoveHammerStomp::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, MeleeComboMoveHammerStomp, ExitMove, app::MeleeComboMoveHammerStomp* this_ptr) {
    //     next::MeleeComboMoveHammerStomp::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::MeleeComboMoveHammerStomp::get_class())) {
    //         on_hammer.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinSpiritSpearSpell, EnterMove, app::SeinSpiritSpearSpell* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinSpiritSpearSpell::get_class())) {
    //         on_spear.set(1);
    //     }
    //     next::SeinSpiritSpearSpell::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinSpiritSpearSpell, ExitMove, app::SeinSpiritSpearSpell* this_ptr) {
    //     next::SeinSpiritSpearSpell::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinSpiritSpearSpell::get_class())) {
    //         on_spear.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinChakramSpell, EnterMove, app::SeinChakramSpell* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinChakramSpell::get_class())) {
    //         on_shuriken.set(1);
    //     }
    //     next::SeinChakramSpell::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinChakramSpell, ExitMove, app::SeinChakramSpell* this_ptr) {
    //     next::SeinChakramSpell::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinChakramSpell::get_class())) {
    //         on_shuriken.set(0);
    //     }
    // }
    //
    // bool ignore_end_grenade = false;
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinGrenadeAttack, CancelAiming, app::SeinGrenadeAttack* this_ptr) {
    //     ScopedSetter _(ignore_end_grenade, true);
    //     next::SeinGrenadeAttack::CancelAiming(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinGrenadeAttack, EndAiming, app::SeinGrenadeAttack* this_ptr) {
    //     if (!ignore_end_grenade) {
    //         on_grenade.set(1);
    //     }
    //     next::SeinGrenadeAttack::EndAiming(this_ptr);
    //     if (!ignore_end_grenade) {
    //         on_grenade.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinBowAttack, ReleaseArrow, app::SeinBowAttack* this_ptr) {
    //     on_bow.set(1);
    //     next::SeinBowAttack::ReleaseArrow(this_ptr);
    //     on_bow.set(0);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinBlazeSpell, OnEnterBlazeQuick, app::SeinBlazeSpell* this_ptr) {
    //     on_blaze.set(1);
    //     next::SeinBlazeSpell::OnEnterBlazeQuick(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinBlazeSpell, OnExitBlazeQuick, app::SeinBlazeSpell* this_ptr) {
    //     next::SeinBlazeSpell::OnExitBlazeQuick(this_ptr);
    //     on_blaze.set(0);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinBlazeSpell, OnEnterBlazeFullCharge, app::SeinBlazeSpell* this_ptr) {
    //     on_blaze.set(1);
    //     next::SeinBlazeSpell::OnEnterBlazeFullCharge(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinBlazeSpell, OnExitBlazeFullCharge, app::SeinBlazeSpell* this_ptr) {
    //     next::SeinBlazeSpell::OnExitBlazeFullCharge(this_ptr);
    //     on_blaze.set(0);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinTurretSpell, ChangeState, app::SeinTurretSpell* this_ptr, app::SeinTurretSpell_State__Enum state) {
    //     if (state == app::SeinTurretSpell_State__Enum::StartReleasing) {
    //         on_sentry.set(1);
    //     }
    //
    //     next::SeinTurretSpell::ChangeState(this_ptr, state);
    //     if (state == app::SeinTurretSpell_State__Enum::Idle && on_sentry.get<bool>()) {
    //         on_sentry.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinGlowSpell, OnEnterQuickGlow, app::SeinGlowSpell* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinGlowSpell::get_class())) {
    //         on_flash.set(1);
    //     }
    //     next::SeinGlowSpell::OnEnterQuickGlow(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinGlowSpell, OnExitQuickGlow, app::SeinGlowSpell* this_ptr) {
    //     next::SeinGlowSpell::OnExitQuickGlow(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinGlowSpell::get_class())) {
    //         on_flash.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinChargeJump, EnterMove, app::SeinChargeJump* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinChargeJump::get_class())) {
    //         on_launch.set(1);
    //     }
    //     next::SeinChargeJump::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinChargeJump, ExitMove, app::SeinChargeJump* this_ptr) {
    //     next::SeinChargeJump::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinChargeJump::get_class())) {
    //         on_launch.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinWallJump, PerformWallJump_2, app::SeinWallJump* this_ptr, bool to_left) {
    //     on_wall_jump.set(1);
    //     next::SeinWallJump::PerformWallJump_2(this_ptr, to_left);
    //     on_wall_jump.set(0);
    // }
    //
    // bool digging = false;
    // bool is_water_dashing = false;
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinDashNew, EnterMove, app::SeinDashNew* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinDashNew::get_class())) {
    //         if (SeinDashNew::ShouldDig(this_ptr)) {
    //             on_burrow.set(1);
    //             digging = true;
    //         } else if (!is_water_dashing) {
    //             on_dash.set(1);
    //         }
    //     }
    //     next::SeinDashNew::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinDashNew, ExitMove, app::SeinDashNew* this_ptr) {
    //     next::SeinDashNew::ExitMove(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinDashNew::get_class())) {
    //         if (digging) {
    //             digging = false;
    //             on_burrow.set(0);
    //         } else if (on_dash.get<bool>()) {
    //             on_dash.set(0);
    //         }
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinDigging, StartDashing, app::SeinDigging* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinDigging::get_class()))
    //         on_burrow.set(1);
    //     next::SeinDigging::StartDashing(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinDigging, EndDash, app::SeinDigging* this_ptr) {
    //     next::SeinDigging::EndDash(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinDigging::get_class())) {
    //         on_burrow.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinSwimming, ChangeState, app::SeinSwimming* this_ptr, app::SeinSwimming_State__Enum state) {
    //     switch (state) {
    //         case app::SeinSwimming_State__Enum::Dashing:
    //         case app::SeinSwimming_State__Enum::SurfaceDash:
    //             is_water_dashing = true;
    //             on_water_dash.set(1);
    //             break;
    //         default:
    //             is_water_dashing = false;
    //             if (on_water_dash.get<bool>()) {
    //                 on_water_dash.set(0);
    //             }
    //             break;
    //     }
    //
    //     next::SeinSwimming::ChangeState(this_ptr, state);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinFeatherFlap, EnterAttack, app::SeinFeatherFlap* this_ptr) {
    //     if (il2cpp::is_assignable(this_ptr, types::SeinFeatherFlap::get_class())) {
    //         on_flap.set(1);
    //     }
    //     next::SeinFeatherFlap::EnterAttack(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinFeatherFlap, ExitAttack, app::SeinFeatherFlap* this_ptr) {
    //     next::SeinFeatherFlap::ExitAttack(this_ptr);
    //     if (il2cpp::is_assignable(this_ptr, types::SeinFeatherFlap::get_class())) {
    //         on_flap.set(0);
    //     }
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinSpiritLeashAbility, EnterMove, app::SeinSpiritLeashAbility* this_ptr) {
    //     on_grapple.set(1);
    //     next::SeinSpiritLeashAbility::EnterMove(this_ptr);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinSpiritLeashAbility, ExitMove, app::SeinSpiritLeashAbility* this_ptr) {
    //     next::SeinSpiritLeashAbility::ExitMove(this_ptr);
    //     on_grapple.set(0);
    // }
    //
    // IL2CPP_INTERCEPT_WITH_ORDER(100, void, SeinMeditateSpell, UpdateCharacterState, app::SeinMeditateSpell* this_ptr) {
    //     auto old = this_ptr->fields.CurrentState;
    //     next::SeinMeditateSpell::UpdateCharacterState(this_ptr);
    //     auto current = this_ptr->fields.CurrentState;
    //     if (old != app::SeinMeditateSpell_State__Enum::Heal && current == app::SeinMeditateSpell_State__Enum::Heal) {
    //         on_regenerate.set(1);
    //     } else if (old == app::SeinMeditateSpell_State__Enum::Heal && current == app::SeinMeditateSpell_State__Enum::Idle) {
    //         on_regenerate.set(0);
    //     }
    // }
} // namespace
