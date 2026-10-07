#include <Core/api/game/game.h>
#include <Randomizer/macros.h>

#include <Modloader/app/methods/GameController.h>
#include <Modloader/app/methods/Moon/UberStateController.h>
#include <Modloader/app/methods/NewGameAction.h>
#include <Modloader/app/methods/SaveGameController.h>
#include <Modloader/app/methods/SaveSlotBackupsManager.h>
#include <Modloader/app/methods/SaveSlotsManager.h>
#include <Modloader/app/methods/SeinHealthController.h>
#include <Modloader/app/methods/RestoreCheckpointController.h>
#include <Modloader/interception_macros.h>
#include <Modloader/modloader.h>

using namespace modloader;
using namespace app::classes;

extern bool temporary_glide_switch;

namespace {
    int current_slot = -1;

    IL2CPP_INTERCEPT_WITH_ORDER(0, void, GameController, CreateCheckpoint, app::GameController * this_ptr, bool do_perform_save, bool respect_restrict_checkpoint_zone) {
        core::api::game::event_bus().emit(core::api::game::events::BeforeCreateCheckpoint());
        next::GameController::CreateCheckpoint(this_ptr, do_perform_save, respect_restrict_checkpoint_zone);
        core::api::game::event_bus().emit(core::api::game::events::CreatedCheckpoint());
    }

    IL2CPP_INTERCEPT(void, NewGameAction, Perform, app::NewGameAction * this_ptr, app::IContext* context) {
        current_slot = SaveSlotsManager::get_CurrentSlotIndex();
        core::api::game::event_bus().emit(core::api::game::events::BeforeNewGame());
        next::NewGameAction::Perform(this_ptr, context);
        core::api::game::event_bus().emit(core::api::game::events::AfterNewGame());
    }

    IL2CPP_INTERCEPT(void, SaveGameController, SaveToFile_2, app::SaveGameController * this_ptr, int32_t slotIndex, int32_t backupIndex, app::Byte__Array* bytes) {
        next::SaveGameController::SaveToFile_2(this_ptr, slotIndex, backupIndex, bytes);
        core::api::game::event_bus().emit(core::api::game::events::CreatedSave());
    }

    IL2CPP_INTERCEPT(void, SaveSlotBackupsManager, PerformBackup, app::SaveSlotBackupsManager * this_ptr, app::SaveSlotBackup* saveSlot, int32_t backupIndex, app::String* backupName) {
        next::SaveSlotBackupsManager::PerformBackup(this_ptr, saveSlot, backupIndex, backupName);
        core::api::game::event_bus().emit(core::api::game::events::CreatedBackup());
    }

    IL2CPP_INTERCEPT(void, SaveGameController, OnFinishedLoading, app::SaveGameController * this_ptr) {
        core::api::game::event_bus().emit(core::api::game::events::BeforeFinishLoadingSave());
        next::SaveGameController::OnFinishedLoading(this_ptr);
        core::api::game::event_bus().emit(core::api::game::events::FinishedLoadingSave());
    }

    IL2CPP_INTERCEPT(void, SaveGameController, RestoreCheckpoint, app::SaveGameController * this_ptr) {
        core::api::game::event_bus().emit(core::api::game::events::BeforeRestoreCheckpoint());
        next::SaveGameController::RestoreCheckpoint(this_ptr);
        core::api::game::event_bus().emit(core::api::game::events::RestoreCheckpointPrepareSeedExecutionEnvironment());
        core::api::game::event_bus().emit(core::api::game::events::RestoredCheckpoint());
    }

    IL2CPP_INTERCEPT(void, SaveGameController, PerformSave, app::SaveGameController * this_ptr) {
        // Don't prevent saving multiple times in the same frame
        this_ptr->fields.m_lastSavedFrameIndex = -1;
        next::SaveGameController::PerformSave(this_ptr);
    }

    IL2CPP_INTERCEPT(void, RestoreCheckpointController, RestoreCheckpoint, app::RestoreCheckpointController * this_ptr, bool load_from_disc) {
        core::api::game::event_bus().emit(core::api::game::events::BeforeRestoreCheckpoint());
        next::RestoreCheckpointController::RestoreCheckpoint(this_ptr, load_from_disc);
        core::api::game::event_bus().emit(core::api::game::events::RestoreCheckpointPrepareSeedExecutionEnvironment());
        core::api::game::event_bus().emit(core::api::game::events::RestoredCheckpoint());
    }

    IL2CPP_INTERCEPT(void, SeinHealthController, OnRespawn, app::SeinHealthController * this_ptr) {
        core::api::game::event_bus().emit(core::api::game::events::BeforeRespawn());
        next::SeinHealthController::OnRespawn(this_ptr);
        core::api::game::event_bus().emit(core::api::game::events::Respawned());
    }

    IL2CPP_INTERCEPT(void, Moon::UberStateController, SetState, app::UberStateValueStore * store) {
        next::Moon::UberStateController::SetState(store);
        core::api::game::event_bus().emit(core::api::game::events::UberStateValueStoreLoaded());
    }
} // namespace

RANDOMIZER_C_DLLEXPORT void save() {
    info("csharp_interop", "Save requested by c# code");
    core::api::game::save();
}

RANDOMIZER_C_DLLEXPORT void checkpoint() {
    info("csharp_interop", "Checkpoint requested by c# code");
    core::api::game::temporary_save();
}
