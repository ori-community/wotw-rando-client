#include <common.h>
#include <dll_main.h>
#include <macros.h>
#include <interception_macros.h>
#include <csharp_bridge.h>

namespace
{
    BINDING(8332848, int, getSaveSlot, ()); //SaveSlotsManager$$get_CurrentSlotIndex
    BINDING(8333136, int, getBackupSlot, ()); //SaveSlotsManager$$get_BackupIndex

    INTERCEPT(10056256, void, GameController__CreateCheckpoint, (app::GameController* thisPtr, bool doPerformSave, bool respectRestrictCheckpointZone)) {
        csharp_bridge::on_checkpoint();
        GameController__CreateCheckpoint(thisPtr, doPerformSave, respectRestrictCheckpointZone);
    }

    INTERCEPT(6709008, void, NewGameAction__Perform, (app::NewGameAction* this_ptr, app::IContext* context)) {
        csharp_bridge::new_game(getSaveSlot());
        NewGameAction__Perform(this_ptr, context);
    }

    INTERCEPT(8237360, void, SaveGameController__SaveToFile, (app::SaveGameController* thisPtr, int32_t slotIndex, int32_t backupIndex, app::Byte__Array* bytes)) {
        csharp_bridge::on_save(slotIndex, backupIndex);
        SaveGameController__SaveToFile(thisPtr, slotIndex, backupIndex, bytes);
    }

    INTERCEPT(8297856, void, SaveSlotBackupsManager__PerformBackup, (app::SaveSlotBackupsManager* thisPtr, app::SaveSlotBackup* saveSlot, int32_t backupIndex, app::String* backupName)) {
        csharp_bridge::on_save(saveSlot->fields.Index, backupIndex);
        SaveSlotBackupsManager__PerformBackup(thisPtr, saveSlot, backupIndex, backupName);
    }

    INTERCEPT(8252224, void, SaveGameController__OnFinishedLoading, (app::SaveGameController* thisPtr)) {
        csharp_bridge::on_load(getSaveSlot(), getBackupSlot());
        SaveGameController__OnFinishedLoading(thisPtr);
    }

    INTERCEPT(8249872, void, SaveGameController__RestoreCheckpoint, (app::SaveGameController* thisPtr)) {
        csharp_bridge::on_load(getSaveSlot(), getBackupSlot());
        SaveGameController__RestoreCheckpoint(thisPtr);
    }

    INTERCEPT(18324032, void, SeinHealthController__OnRespawn, (app::SeinHealthController* thisPtr)) {
        csharp_bridge::on_load(getSaveSlot(), getBackupSlot());
        SeinHealthController__OnRespawn(thisPtr);
    }

    INTERCEPT(8336656, void, SaveSlotsManager__CopySlot, (int32_t from, int32_t to)) {
        SaveSlotsManager__CopySlot(from, to);
        csharp_bridge::on_copy(from, to);
    }

    INTERCEPT(8337952, void, SaveSlotsManager__DeleteSlot, (int32_t index)) {
        SaveSlotsManager__DeleteSlot(index);
        csharp_bridge::on_delete(index);
    }
}

INJECT_C_DLLEXPORT void save()
{
    trace(MessageType::Info, 3, "csharp_interop", "Save requested by c# code");
    GameController__CreateCheckpoint(get_game_controller(), true, false);
}
