#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BackupSaveCleverMenuItemSelectionManager_c.h>
#include <Modloader/app/structs/SaveSlotBackupInfo.h>

namespace app::classes::BackupSaveCleverMenuItemSelectionManager___c {
    IL2CPP_REGISTER_METHOD(0x00F832E0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BackupSaveCleverMenuItemSelectionManager_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D4A040,
        bool,
        _OnFinishedReadingBackups_b__7_0,
        app::BackupSaveCleverMenuItemSelectionManager_c* this_ptr,
        app::SaveSlotBackupInfo* a
    )
    IL2CPP_REGISTER_METHOD(
        0x00F83420,
        int32_t,
        _OnFinishedReadingBackups_b__7_1,
        app::BackupSaveCleverMenuItemSelectionManager_c* this_ptr,
        app::SaveSlotBackupInfo* a,
        app::SaveSlotBackupInfo* b
    )
} // namespace app::classes::BackupSaveCleverMenuItemSelectionManager___c
