#include <common.h>
#include <dll_main.h>
#include <macros.h>
#include <interception_macros.h>
#include <csharp_bridge.h>

namespace
{
    IL2CPP_BINDING(, SaveSlotsManager, int, get_CurrentSlotIndex, ()); //SaveSlotsManager$$get_CurrentSlotIndex
    IL2CPP_BINDING(, SaveSlotsManager, int, get_BackupIndex, ()); //SaveSlotsManager$$get_BackupIndex

    IL2CPP_INTERCEPT(, GameController, void, CreateCheckpoint, (app::GameController* thisPtr, bool doPerformSave, bool respectRestrictCheckpointZone)) {
        csharp_bridge::on_checkpoint();
        GameController_CreateCheckpoint(thisPtr, doPerformSave, respectRestrictCheckpointZone);
    }

    IL2CPP_INTERCEPT(, NewGameAction, void, Perform, (app::NewGameAction* this_ptr, app::IContext* context)) {
        csharp_bridge::new_game(SaveSlotsManager_get_CurrentSlotIndex());
        NewGameAction_Perform(this_ptr, context);
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, SaveToFile, (app::SaveGameController* thisPtr, int32_t slotIndex, int32_t backupIndex, app::Byte__Array* bytes)) {
        csharp_bridge::on_save(slotIndex, backupIndex);
        SaveGameController_SaveToFile(thisPtr, slotIndex, backupIndex, bytes);
    }

    IL2CPP_INTERCEPT(, SaveSlotBackupsManager, void, PerformBackup, (app::SaveSlotBackupsManager* thisPtr, app::SaveSlotBackup* saveSlot, int32_t backupIndex, app::String* backupName)) {
        csharp_bridge::on_save(saveSlot->fields.Index, backupIndex);
        SaveSlotBackupsManager_PerformBackup(thisPtr, saveSlot, backupIndex, backupName);
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, OnFinishedLoading, (app::SaveGameController* thisPtr)) {
        csharp_bridge::on_load(SaveSlotsManager_get_CurrentSlotIndex(), SaveSlotsManager_get_BackupIndex());
        SaveGameController_OnFinishedLoading(thisPtr);
    }

    IL2CPP_INTERCEPT(, SaveGameController, void, RestoreCheckpoint, (app::SaveGameController* thisPtr)) {
        csharp_bridge::on_load(SaveSlotsManager_get_CurrentSlotIndex(), SaveSlotsManager_get_BackupIndex());
        SaveGameController_RestoreCheckpoint(thisPtr);
    }

    IL2CPP_INTERCEPT(, SeinHealthController, void, OnRespawn, (app::SeinHealthController* thisPtr)) {
        csharp_bridge::on_load(SaveSlotsManager_get_CurrentSlotIndex(), SaveSlotsManager_get_BackupIndex());
        SeinHealthController_OnRespawn(thisPtr);
    }

    STATIC_IL2CPP_INTERCEPT(, SaveSlotsManager, void, CopySlot, (int32_t from, int32_t to)) {
        SaveSlotsManager_CopySlot(from, to);
        csharp_bridge::on_copy(from, to);
    }

    STATIC_IL2CPP_INTERCEPT(, SaveSlotsManager, void, DeleteSlot, (int32_t index)) {
        SaveSlotsManager_DeleteSlot(index);
        csharp_bridge::on_delete(index);
    }
}

INJECT_C_DLLEXPORT void save()
{
    trace(MessageType::Info, 3, "csharp_interop", "Save requested by c# code");
    GameController_CreateCheckpoint(get_game_controller(), true, false);
}
