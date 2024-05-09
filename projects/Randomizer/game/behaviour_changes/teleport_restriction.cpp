#include <Core/api/game/game.h>
#include <Core/api/game/player.h>
#include <Modloader/app/methods/CharacterStateWrapper_1_SeinCinematic_.h>
#include <Modloader/app/methods/CharacterStateWrapper_1_SeinInteraction_.h>
#include <Modloader/app/methods/CharacterPlatformMovement.h>
#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/RaceSystem.h>
#include <Modloader/app/methods/SavePedestalController.h>
#include <Modloader/app/methods/SeinLogicCycle.h>
#include <Modloader/app/methods/TeleportRestrictZone.h>
#include <Modloader/app/methods/SeinSwimming.h>
#include <Modloader/app/methods/ShrineCombat.h>
#include <Modloader/app/types/SavePedestalController.h>
#include <Modloader/interception_macros.h>

namespace {
    using namespace app::classes;

    core::api::uber_states::UberState allow_tp_underwater_state(UberStateGroup::RandoConfig, 18);
    core::api::uber_states::UberState allow_tp_in_combat_shrines_state(UberStateGroup::RandoConfig, 19);

    IL2CPP_INTERCEPT(GameController, bool, get_InputLocked, (app::GameController* this_ptr)) {
        const auto save_pedestal_controller_instance = types::SavePedestalController::get_class()->static_fields->Instance;

        // This is so Ori can't lose breath while teleporting
        if (il2cpp::unity::is_valid(save_pedestal_controller_instance) && SavePedestalController::get_IsTeleporting(save_pedestal_controller_instance)) {
            return true;
        }

        return next::GameController::get_InputLocked(this_ptr);
    }

    IL2CPP_INTERCEPT(SavePedestalController, void, BeginTeleportation, (app::Vector2 teleport_target_world_position)) {
        next::SavePedestalController::BeginTeleportation(teleport_target_world_position);

        const auto sein = core::api::game::player::sein();
        const auto swimming = sein->fields.Abilities->fields.SwimmingWrapper;

        // Stop dashing
        if (swimming->fields.HasState) {
            swimming->fields.State->fields.CurrentState = swimming->fields.State->fields.m_currentWater == nullptr
                ? app::SeinSwimming_State__Enum::OutOfWater
                : app::SeinSwimming_State__Enum::SwimMovingUnderwater;
            swimming->fields.State->fields.m_isDashing = false;
            swimming->fields.State->fields.m_swimAccelerationTime = 0.f;
        }

        // Clear scheduled movement curves (e.g. Water Dash) to prevent moving out of bounds during teleportation
        CharacterPlatformMovement::ClearScheduleCurves(sein->fields.PlatformBehaviour->fields.PlatformMovement);
    }

    IL2CPP_INTERCEPT(SavePedestalController, void, OnFinishedTeleporting, (app::SavePedestalController* this_ptr)) {
        next::SavePedestalController::OnFinishedTeleporting(this_ptr);

        const auto sein = core::api::game::player::sein();
        const auto swimming = sein->fields.Abilities->fields.SwimmingWrapper;

        // Reset the swimming state to fix the vanilla bug where it doesn't reset the swimming state
        // properly when falling into water when teleporting
        if (swimming->fields.HasState) {
            SeinSwimming::ChangeState(swimming->fields.State, app::SeinSwimming_State__Enum::OutOfWater);
        }
    }

    IL2CPP_INTERCEPT(SavePedestalController, app::SavePedestalController_CanTeleportResult__Enum, CanTeleportWithResult, ()) {
        if (!RaceSystem::get_IsIdle()) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_Racing;
        }

        if (TeleportRestrictZone::IsPlayerInTeleportRestrictZone()) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_RestrictZone;
        }

        if (ShrineCombat::IsAnyShrineRunning() && !allow_tp_in_combat_shrines_state.get<bool>()) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_RestrictZone;
        }

        if (SavePedestalController::get_IsRidingKu()) {
            return app::SavePedestalController_CanTeleportResult__Enum::Denied_Riding;
        }

        const auto sein = core::api::game::player::sein();

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
