#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action_1_Int32_.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/List_1_SaveSlotBackupsManager_BackupParseQueue_.h>
#include <Modloader/app/structs/SaveSlotBackup.h>
#include <Modloader/app/structs/SaveSlotBackupsManager.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::SaveSlotBackupsManager {
    IL2CPP_REGISTER_METHOD(0x0091DD70, void, add_OnFinishedReadingBackups, app::Action_1_Int32_* value)
    IL2CPP_REGISTER_METHOD(0x0091DEB0, void, remove_OnFinishedReadingBackups, app::Action_1_Int32_* value)
    IL2CPP_REGISTER_METHOD(0x0091DFF0, app::SaveSlotBackupsManager*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x003FDCE0, int32_t, get_CurrentReadingSlot, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_CurrentReadingBackup, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E090, app::SaveSlotBackup*, get_CurrentSlotBackup, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E0B0, float, get_GameJustLoadedDelay, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E0C0, int32_t, get_SaveSlotBackupsCount, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008682A0, float, get_LastSaveTime, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004430B0, bool, get_CreateBackupPending, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB990, app::List_1_SaveSlotBackupsManager_BackupParseQueue_*, get_BackupParsingQueue, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E150, void, Awake, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E320, void, OnDestroy, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E630, void, OnGameReset, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E630, void, OnSaveGameCacheCleared, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091E640, void, RequestReadBackups, int32_t slot_index)
    IL2CPP_REGISTER_METHOD(0x0091EA40, app::SaveSlotBackup*, SaveSlotBackupAtIndex, int32_t index)
    IL2CPP_REGISTER_METHOD(0x0091EB20, void, DeleteAllBackups, int32_t slot_index)
    IL2CPP_REGISTER_METHOD(0x0091EDD0, void, CreateCurrentBackup, )
    IL2CPP_REGISTER_METHOD(0x0091F480, void, PerformRecentBackup, app::SaveSlotBackupsManager* this_ptr, int32_t slot_index)
    IL2CPP_REGISTER_METHOD(0x0091F510, void, PerformTimeGatedBackup, app::SaveSlotBackupsManager* this_ptr, int32_t slot_index)
    IL2CPP_REGISTER_METHOD(
        0x0091F5B0,
        void,
        PerformBackup,
        app::SaveSlotBackupsManager* this_ptr,
        app::SaveSlotBackup* save_slot,
        int32_t backup_index,
        app::String* backup_name
    )
    IL2CPP_REGISTER_METHOD(0x0091FC70, void, ResetBackupDelay, )
    IL2CPP_REGISTER_METHOD(0x0091FD90, void, SetupGameLoadedDelay, float delay)
    IL2CPP_REGISTER_METHOD(0x0091FF00, bool, IsBusyWithGracePeriod, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0091FF30, void, Update, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00920CB0, void, ClearCache, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00920EB0, app::SaveSlotBackup*, FindByIndex, app::SaveSlotBackupsManager* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00920F60, app::String*, BackupName, app::SaveSlotBackupsManager* this_ptr, int32_t slot, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00921130, void, LookForBackup_PC_Switch, app::SaveSlotBackupsManager* this_ptr, int32_t slot_index, int32_t backup_index)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LoadAllBackUps_XBoxOne, app::SaveSlotBackupsManager* this_ptr, int32_t slot_index)
    IL2CPP_REGISTER_METHOD(0x009219D0, bool, IsBusyLoading, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, LoadBackup_XboxOne, app::SaveSlotBackupsManager* this_ptr, int32_t slot_index, int32_t backup_index)
    IL2CPP_REGISTER_METHOD(
        0x00921AA0,
        void,
        ReportFailure,
        app::SaveSlotBackupsManager* this_ptr,
        app::SaveSlotBackup* current_slot,
        app::String* error_message
    )
    IL2CPP_REGISTER_METHOD(
        0x00921B70,
        bool,
        ParseBackup,
        app::SaveSlotBackupsManager* this_ptr,
        int32_t slot_index,
        int32_t backup_index,
        app::Byte__Array* bytes
    )
    IL2CPP_REGISTER_METHOD(0x00922470, void, ctor, app::SaveSlotBackupsManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00922840, void, cctor, )
} // namespace app::classes::SaveSlotBackupsManager
