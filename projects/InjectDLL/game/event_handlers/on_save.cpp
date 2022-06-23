#include <game/game.h>
#include <interop/csharp_bridge.h>
#include <macros.h>

#include <Il2CppModLoader/app/methods/GameController.h>
#include <Il2CppModLoader/app/methods/NewGameAction.h>
#include <Il2CppModLoader/app/methods/SaveGameController.h>
#include <Il2CppModLoader/app/methods/SaveSlotBackupsManager.h>
#include <Il2CppModLoader/app/methods/SeinHealthController.h>
#include <Il2CppModLoader/common.h>
#include <Il2CppModLoader/interception_macros.h>

using namespace modloader;
using namespace app::methods;

extern bool temporary_glide_switch;

namespace {
    bool save_requested = false;

    IL2CPP_INTERCEPT(GameController, void, CreateCheckpoint, (app::GameController * this_ptr, bool doPerformSave, bool respectRestrictCheckpointZone)) {
        game::event_bus().trigger_event(GameEvent::CreateCheckpoint, EventTiming::Start);
        next::GameController::CreateCheckpoint(this_ptr, doPerformSave, respectRestrictCheckpointZone);
        game::event_bus().trigger_event(GameEvent::CreateCheckpoint, EventTiming::End);
    }

    IL2CPP_INTERCEPT(NewGameAction, void, Perform, (app::NewGameAction * this_ptr, app::IContext* context)) {
        game::event_bus().trigger_event(GameEvent::NewGame, EventTiming::Start);
        next::NewGameAction::Perform(this_ptr, context);
        game::event_bus().trigger_event(GameEvent::NewGame, EventTiming::End);
    }

    IL2CPP_INTERCEPT(SaveGameController, void, SaveToFile_2, (app::SaveGameController * this_ptr, int32_t slotIndex, int32_t backupIndex, app::Byte__Array* bytes)) {
        game::event_bus().trigger_event(GameEvent::CreateSave, EventTiming::Start);
        csharp_bridge::on_save(slotIndex, backupIndex);
        next::SaveGameController::SaveToFile_2(this_ptr, slotIndex, backupIndex, bytes);
        game::event_bus().trigger_event(GameEvent::CreateSave, EventTiming::End);
    }

    IL2CPP_INTERCEPT(SaveSlotBackupsManager, void, PerformBackup, (app::SaveSlotBackupsManager * this_ptr, app::SaveSlotBackup* saveSlot, int32_t backupIndex, app::String* backupName)) {
        game::event_bus().trigger_event(GameEvent::CreateBackup, EventTiming::Start);
        csharp_bridge::on_save(saveSlot->fields.Index, backupIndex);
        next::SaveSlotBackupsManager::PerformBackup(this_ptr, saveSlot, backupIndex, backupName);
        game::event_bus().trigger_event(GameEvent::CreateBackup, EventTiming::End);
    }

    IL2CPP_INTERCEPT(SaveGameController, void, OnFinishedLoading, (app::SaveGameController * this_ptr)) {
        game::event_bus().trigger_event(GameEvent::FinishedLoadingSave, EventTiming::Start);
        next::SaveGameController::OnFinishedLoading(this_ptr);
        game::event_bus().trigger_event(GameEvent::FinishedLoadingSave, EventTiming::End);
    }

    IL2CPP_INTERCEPT(SaveGameController, void, RestoreCheckpoint, (app::SaveGameController * this_ptr)) {
        game::event_bus().trigger_event(GameEvent::FinishedLoadingCheckpoint, EventTiming::Start);
        next::SaveGameController::RestoreCheckpoint(this_ptr);
        game::event_bus().trigger_event(GameEvent::FinishedLoadingCheckpoint, EventTiming::End);
    }

    IL2CPP_INTERCEPT(SeinHealthController, void, OnRespawn, (app::SeinHealthController * this_ptr)) {
        game::event_bus().trigger_event(GameEvent::Respawn, EventTiming::Start);
        next::SeinHealthController::OnRespawn(this_ptr);
        game::event_bus().trigger_event(GameEvent::Respawn, EventTiming::End);
    }
} // namespace

INJECT_C_DLLEXPORT void save() {
    trace(MessageType::Info, 3, "csharp_interop", "Save requested by c# code");
    game::save();
}

INJECT_C_DLLEXPORT void checkpoint() {
    trace(MessageType::Info, 3, "csharp_interop", "Checkpoint requested by c# code");
    game::checkpoint();
}
