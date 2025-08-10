#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/SaveFileInfo.h>
#include <Modloader/app/structs/SaveGameController.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateSaveFileHandler_LoadStatus__Enum.h>
#include <Modloader/app/structs/UberStateValueStore.h>

namespace app::classes::SaveGameController {
    IL2CPP_REGISTER_METHOD(0x00C2B3D0, int32_t, get_CurrentSlotIndex, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2B3E0, int32_t, get_CurrentBackupIndex, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2B3F0, bool, get_SaveGameQueried, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2B4E0, bool, get_IsStorageBusy, )
    IL2CPP_REGISTER_METHOD(0x00C2B5A0, bool, get_IsDownloadingSaves, )
    IL2CPP_REGISTER_METHOD(0x00C2B660, int32_t, get_SaveDataStateVersion, )
    IL2CPP_REGISTER_METHOD(
        0x00C2B720,
        void,
        SaveToCurrentSlotFile,
        app::SaveGameController* this_ptr,
        app::UberStateValueStore* value_store,
        bool clear_snapshot,
        bool should_notify_observers
    )
    IL2CPP_REGISTER_METHOD(
        0x00C2B790,
        void,
        SaveToFile_1,
        app::SaveGameController* this_ptr,
        int32_t slot_index,
        int32_t backup_index,
        app::UberStateValueStore* value_store,
        bool clear_snapshot,
        bool should_notify_observers
    )
    IL2CPP_REGISTER_METHOD(0x00C2B8E0, void, SaveToFile_2, app::SaveGameController* this_ptr, int32_t slot_index, int32_t backup_index, app::Byte__Array* bytes)
    IL2CPP_REGISTER_METHOD(0x00C2BBD0, void, CreateSnapshot, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2BCA0, void, ClearSnapshot, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2BCB0, bool, LoadFromFile_1, app::SaveGameController* this_ptr, app::SaveFileInfo* save_file_info)
    IL2CPP_REGISTER_METHOD(0x00C2BCF0, bool, LoadFromFile_2, app::SaveGameController* this_ptr, app::String* filename_new)
    IL2CPP_REGISTER_METHOD(0x00C2BD10, void, LoadCurrentUberState, app::SaveGameController* this_ptr, bool load_from_disc)
    IL2CPP_REGISTER_METHOD(
        0x00C2BFB0,
        app::UberStateValueStore*,
        LoadTemporaryValueStoreForCurrentSlot,
        app::SaveGameController* this_ptr,
        app::UberStateSaveFileHandler_LoadStatus__Enum* status
    )
    IL2CPP_REGISTER_METHOD(
        0x00C2C010,
        app::UberStateValueStore*,
        LoadTemporaryValueStoreForSlot,
        app::SaveGameController* this_ptr,
        int32_t slot_index,
        int32_t backup_index,
        app::UberStateSaveFileHandler_LoadStatus__Enum* status
    )
    IL2CPP_REGISTER_METHOD(
        0x00C2C060,
        app::UberStateValueStore*,
        LoadWithGRDK,
        app::SaveGameController* this_ptr,
        int32_t slot,
        int32_t backupslot,
        app::UberStateSaveFileHandler_LoadStatus__Enum* status
    )
    IL2CPP_REGISTER_METHOD(
        0x00C2C420,
        app::UberStateValueStore*,
        LoadTemporaryUberState_1,
        app::SaveGameController* this_ptr,
        app::String* filename,
        app::UberStateSaveFileHandler_LoadStatus__Enum* status
    )
    IL2CPP_REGISTER_METHOD(
        0x00C2C770,
        app::UberStateValueStore*,
        LoadTemporaryUberState_2,
        app::SaveGameController* this_ptr,
        app::Byte__Array* bytes,
        app::UberStateSaveFileHandler_LoadStatus__Enum* status
    )
    IL2CPP_REGISTER_METHOD(0x00C2C920, void, LoadUberState_1, app::SaveGameController* this_ptr, app::String* filename)
    IL2CPP_REGISTER_METHOD(0x00C2CAE0, app::Byte__Array*, ReadAllBytes, app::BinaryReader* reader)
    IL2CPP_REGISTER_METHOD(0x00C2CD70, void, LoadUberState_2, app::SaveGameController* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x00C2CED0, void, ResetUberState, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2D020, void, LoadUberState_3, app::SaveGameController* this_ptr, app::UberStateValueStore* value_store)
    IL2CPP_REGISTER_METHOD(0x00C2D0F0, bool, get_SaveWasOneLifeAndKilled, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2D120, bool, LoadFromBytes, app::SaveGameController* this_ptr, app::Byte__Array* binary)
    IL2CPP_REGISTER_METHOD(0x00C2D140, bool, SaveExists, app::SaveGameController* this_ptr, int32_t slot_index)
    IL2CPP_REGISTER_METHOD(0x00C2D4E0, bool, get_SaveFileExists, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2D770, app::SaveFileInfo*, get_CurrentSaveFileInfo, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2D7A0, app::SaveFileInfo*, GetSaveFileInfo, app::SaveGameController* this_ptr, int32_t slot_index, int32_t backup_index)
    IL2CPP_REGISTER_METHOD(0x00C2D940, void, Refresh, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2D950, bool, PerformLoad, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2DC50, bool, PerformLoadUbereState, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2DD40, bool, PerformLoadWithoutCheckpointRestore, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2DFC0, bool, OnLoadComplete, app::SaveGameController* this_ptr, app::Byte__Array* buffer)
    IL2CPP_REGISTER_METHOD(0x00C2DFF0, void, PerformSave, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2E630, bool, CanPerformLoad, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2E6F0, bool, CanPerformSave, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSaveComplete, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2E870, void, RestoreCheckpoint, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2EA70, void, RestoreCheckpointPart1, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C2F1C0, void, OnFinishedLoading, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00C2F470,
        void,
        CorruptSaveForTesting,
        app::SaveGameController* this_ptr,
        app::String* filename,
        app::Byte__Array* data,
        int32_t slot_index,
        int32_t backup_slot_index
    )
    IL2CPP_REGISTER_METHOD(0x00C2F5A0, void, ctor, app::SaveGameController* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::SaveGameController
