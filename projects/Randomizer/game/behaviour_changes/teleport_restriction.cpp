#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Modloader/app/methods/CharacterPlatformMovement.h>
#include <Modloader/app/methods/CharacterStateWrapper_1_SeinCinematic_.h>
#include <Modloader/app/methods/CharacterStateWrapper_1_SeinInteraction_.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/RaceSystem.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/SeinSwimming.h>
#include <Modloader/app/methods/ShrineCombat.h>
#include <Modloader/app/methods/ShrineCombat_RunningState.h>
#include <Modloader/app/methods/TeleportRestrictZone.h>
#include <Modloader/app/types/SavePedestalController.h>
#include <Modloader/app/types/ShrineCombat.h>
#include <Modloader/il2cpp_math.h>
#include <Modloader/interception_macros.h>

namespace {
    using namespace app::classes;

    core::api::uber_states::UberState allow_tp_underwater_state(UberStateGroup::RandoConfig, 18);
    core::api::uber_states::UberState allow_tp_in_combat_shrines_state(UberStateGroup::RandoConfig, 19);

    IL2CPP_INTERCEPT(bool, GameController, get_InputLocked, app::GameController* this_ptr) {
        const auto save_pedestal_controller_instance = types::SavePedestalController::get_class()->static_fields->Instance;

        // This is so Ori can't lose breath while teleporting
        if (il2cpp::unity::is_valid(save_pedestal_controller_instance) && SavePedestalController::get_IsTeleporting(save_pedestal_controller_instance)) {
            return true;
        }

        return next::GameController::get_InputLocked(this_ptr);
    }

    IL2CPP_INTERCEPT_WITH_ORDER(80, void, SavePedestalController, BeginTeleportation, app::Vector2 teleport_target_world_position) {
        next::SavePedestalController::BeginTeleportation(teleport_target_world_position);

        const auto sein = core::api::game::player::sein();
        const auto swimming = sein->fields.Abilities->fields.SwimmingWrapper;

        // Stop dashing.
        // The check for app::SeinSwimming_State__Enum::Digging is to still allow Moon Jumping.
        if (swimming->fields.HasState && swimming->fields.State->fields.CurrentState != app::SeinSwimming_State__Enum::Digging) {
            // This removes the root motion processor that is eventually present
            // because of an eventual water dash wall impact. That root motion
            // processor causes egg hammer & co.
            SeinSwimming::OnWallImpactAnimationEnded(swimming->fields.State);
            swimming->fields.State->fields.CurrentState = swimming->fields.State->fields.m_currentWater == nullptr
                ? app::SeinSwimming_State__Enum::OutOfWater
                : app::SeinSwimming_State__Enum::SwimMovingUnderwater;
            swimming->fields.State->fields.m_isDashing = false;
            swimming->fields.State->fields.m_swimAccelerationTime = 0.f;
        }

        // Clear scheduled movement curves (e.g. Water Dash) to prevent moving out of bounds during teleportation
        CharacterPlatformMovement::ClearScheduleCurves(sein->fields.PlatformBehaviour->fields.PlatformMovement);

        // Stop all combat shrines
        if (types::ShrineCombat::get_class()->static_fields->AllShrines != nullptr) {
            for (const auto& shrine: il2cpp::ListIterator(types::ShrineCombat::get_class()->static_fields->AllShrines)) {
                const auto state_machine = shrine->fields.m_stateMachine;

                if (state_machine == nullptr) {
                    continue;
                }

                const auto current_state = state_machine->fields._CurrentState_k__BackingField;

                if (current_state == nullptr) {
                    continue;
                }

                const auto all_states = shrine->fields.m_states;

                if (all_states == nullptr) {
                    continue;
                }

                if (reinterpret_cast<app::IState_2*>(all_states->fields.Running) == current_state) {
                    ShrineCombat_RunningState::CancelArena(reinterpret_cast<app::ShrineCombat_RunningState*>(current_state));
                }
            }
        }
    }

    IL2CPP_INTERCEPT(void, SavePedestalController, OnFinishedTeleporting, app::SavePedestalController* this_ptr) {
        next::SavePedestalController::OnFinishedTeleporting(this_ptr);

        const auto sein = core::api::game::player::sein();
        const auto swimming = sein->fields.Abilities->fields.SwimmingWrapper;

        // Reset the swimming state to fix the vanilla bug where it doesn't reset the swimming state
        // properly when falling into water when teleporting.
        // The check for app::SeinSwimming_State__Enum::Digging is to still allow Moon Jumping.
        if (swimming->fields.HasState && swimming->fields.State->fields.CurrentState != app::SeinSwimming_State__Enum::Digging) {
            SeinSwimming::ChangeState(swimming->fields.State, app::SeinSwimming_State__Enum::OutOfWater);
        }
    }

    IL2CPP_INTERCEPT(app::SavePedestalController_CanTeleportResult__Enum, SavePedestalController, CanTeleportWithResult) {
        if (!RaceSystem::get_IsIdle()) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_Racing;
        }

        if (TeleportRestrictZone::IsPlayerInTeleportRestrictZone()) {
            // Nobody has ever seen a tp restriction zone around the Inner Ruins TP...
            constexpr app::Vector2 inner_ruins_tp_position {2125.27, -3978.36};
            constexpr float inner_ruins_force_allow_tp_radius_squared = 196.f;  // sqrt = 14.f
            const auto is_near_inner_ruins_tp = modloader::math::distance2(modloader::math::to_vec2(core::api::game::player::get_position()), inner_ruins_tp_position) < inner_ruins_force_allow_tp_radius_squared;

            if (!is_near_inner_ruins_tp) {
                return app::SavePedestalController_CanTeleportResult__Enum::Denied_RestrictZone;
            }
        }

        if (ShrineCombat::IsAnyShrineRunning() && !allow_tp_in_combat_shrines_state.get<bool>()) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_RestrictZone;
        }

        if (SavePedestalController::get_IsRidingKu()) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_Riding;
        }

        const auto sein = core::api::game::player::sein();

        // This check is an addition of the randomizer. In vanilla, you can teleport while being dead
        // but this messes up a bunch of systems so it's not allowed here.
        if (core::api::game::player::health().get() <= 0.f) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_PerformingCinematic;
        }

        if (SeinLogicCycle::IsCharacterStateBlockedBy(
                sein->fields.LogicCycle,
                allow_tp_underwater_state.get<bool>()
                    ? static_cast<app::SeinLogicCycle_StateFlags__Enum>(0x00000000080c0000) // NOLINT(*-optin.core.EnumCastOutOfRange)
                    //                                                  ↑
                    // This is the vanilla BlockTeleport mask except I removed the 0x20 IsSwimming flag
                    : app::SeinLogicCycle_StateFlags__Enum::BlockTeleport
            )) {
            // Yes this is vanilla
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_NotOnGround;
        }

        if (CharacterStateWrapper_1_SeinCinematic_::get_IsPerforming(sein->fields.Abilities->fields.CinematicWrapper)) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_PerformingCinematic;
        }

        const auto game_controller = core::api::game::game_controller();

        if (GameController::get_InputLocked(game_controller)) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_PerformingCinematic;
        }

        if (CharacterStateWrapper_1_SeinInteraction_::get_IsPerforming(sein->fields.Abilities->fields.InteractionWrapper)) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_Interacting;
        }

        return app::SavePedestalController_CanTeleportResult__Enum::Success;
    }
} // namespace
