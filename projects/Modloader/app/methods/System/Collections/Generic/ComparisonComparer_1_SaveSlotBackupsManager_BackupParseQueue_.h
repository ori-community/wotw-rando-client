#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComparisonComparer_1_SaveSlotBackupsManager_BackupParseQueue_.h>
#include <Modloader/app/structs/Comparison_1_SaveSlotBackupsManager_BackupParseQueue_.h>
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue.h>

namespace app::classes::System::Collections::Generic::ComparisonComparer_1_SaveSlotBackupsManager_BackupParseQueue_ {
    IL2CPP_REGISTER_METHOD(
        0x0162A010,
        void,
        ctor,
        app::ComparisonComparer_1_SaveSlotBackupsManager_BackupParseQueue_* this_ptr,
        app::Comparison_1_SaveSlotBackupsManager_BackupParseQueue_* comparison
    )
    IL2CPP_REGISTER_METHOD(
        0x0162A050,
        int32_t,
        Compare,
        app::ComparisonComparer_1_SaveSlotBackupsManager_BackupParseQueue_* this_ptr,
        app::SaveSlotBackupsManager_BackupParseQueue x,
        app::SaveSlotBackupsManager_BackupParseQueue y
    )
} // namespace app::classes::System::Collections::Generic::ComparisonComparer_1_SaveSlotBackupsManager_BackupParseQueue_
