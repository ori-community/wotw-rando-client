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

    IL2CPP_INTERCEPT(void, GameController, CreateCheckpoint, app::GameController * this_ptr, bool doPerformSave, bool respectRestrictCheckpointZone) {
        core::api::game::event_bus().trigger_event(GameEvent::CreateCheckpoint, EventTiming::Before);
        next::GameController::CreateCheckpoint(this_ptr, doPerformSave, respectRestrictCheckpointZone);
        core::api::game::event_bus().trigger_event(GameEvent::CreateCheckpoint, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, NewGameAction, Perform, app::NewGameAction * this_ptr, app::IContext* context) {
        current_slot = SaveSlotsManager::get_CurrentSlotIndex();
        core::api::game::event_bus().trigger_event(GameEvent::NewGame, EventTiming::Before);
        next::NewGameAction::Perform(this_ptr, context);
        core::api::game::event_bus().trigger_event(GameEvent::NewGame, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, SaveGameController, SaveToFile_2, app::SaveGameController * this_ptr, int32_t slotIndex, int32_t backupIndex, app::Byte__Array* bytes) {
        core::api::game::event_bus().trigger_event(GameEvent::CreateSave, EventTiming::Before);
        next::SaveGameController::SaveToFile_2(this_ptr, slotIndex, backupIndex, bytes);
        core::api::game::event_bus().trigger_event(GameEvent::CreateSave, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, SaveSlotBackupsManager, PerformBackup, app::SaveSlotBackupsManager * this_ptr, app::SaveSlotBackup* saveSlot, int32_t backupIndex, app::String* backupName) {
        core::api::game::event_bus().trigger_event(GameEvent::CreateBackup, EventTiming::Before);
        next::SaveSlotBackupsManager::PerformBackup(this_ptr, saveSlot, backupIndex, backupName);
        core::api::game::event_bus().trigger_event(GameEvent::CreateBackup, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, SaveGameController, OnFinishedLoading, app::SaveGameController * this_ptr) {
        core::api::game::event_bus().trigger_event(GameEvent::FinishedLoadingSave, EventTiming::Before);
        next::SaveGameController::OnFinishedLoading(this_ptr);
        core::api::game::event_bus().trigger_event(GameEvent::FinishedLoadingSave, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, SaveGameController, RestoreCheckpoint, app::SaveGameController * this_ptr) {
        core::api::game::event_bus().trigger_event(GameEvent::RestoreCheckpoint, EventTiming::Before);
        next::SaveGameController::RestoreCheckpoint(this_ptr);
        core::api::game::event_bus().trigger_event(GameEvent::RestoreCheckpoint, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, RestoreCheckpointController, RestoreCheckpoint, app::RestoreCheckpointController * this_ptr, bool load_from_disc) {
        core::api::game::event_bus().trigger_event(GameEvent::RestoreCheckpoint, EventTiming::Before);
        next::RestoreCheckpointController::RestoreCheckpoint(this_ptr, load_from_disc);
        core::api::game::event_bus().trigger_event(GameEvent::RestoreCheckpoint, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, SeinHealthController, OnRespawn, app::SeinHealthController * this_ptr) {
        core::api::game::event_bus().trigger_event(GameEvent::Respawn, EventTiming::Before);
        next::SeinHealthController::OnRespawn(this_ptr);
        core::api::game::event_bus().trigger_event(GameEvent::Respawn, EventTiming::After);
    }

    IL2CPP_INTERCEPT(void, Moon::UberStateController, SetState, app::UberStateValueStore * store) {
        core::api::game::event_bus().trigger_event(GameEvent::UberStateValueStoreLoaded, EventTiming::Before);
        next::Moon::UberStateController::SetState(store);
        core::api::game::event_bus().trigger_event(GameEvent::UberStateValueStoreLoaded, EventTiming::After);
    }
} // namespace

RANDOMIZER_C_DLLEXPORT void save() {
    info("csharp_interop", "Save requested by c# code");
    core::api::game::save();
}

RANDOMIZER_C_DLLEXPORT void checkpoint() {
    info("csharp_interop", "Checkpoint requested by c# code");
    core::api::game::checkpoint();
}
