#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectComparer_1_SaveSlotBackupsManager_BackupParseQueue_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue.h>

namespace app::classes::System::Collections::Generic::ObjectComparer_1_SaveSlotBackupsManager_BackupParseQueue_ {
    IL2CPP_REGISTER_METHOD(0x01CC86B0, int32_t, Compare, (app::ObjectComparer_1_SaveSlotBackupsManager_BackupParseQueue_ * this_ptr, app::SaveSlotBackupsManager_BackupParseQueue x, app::SaveSlotBackupsManager_BackupParseQueue y))
    IL2CPP_REGISTER_METHOD(0x01CC3E60, bool, Equals, (app::ObjectComparer_1_SaveSlotBackupsManager_BackupParseQueue_ * this_ptr, app::Object* obj))
    IL2CPP_REGISTER_METHOD(0x01CC3EB0, int32_t, GetHashCode, (app::ObjectComparer_1_SaveSlotBackupsManager_BackupParseQueue_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019F8810, void, ctor, (app::ObjectComparer_1_SaveSlotBackupsManager_BackupParseQueue_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::ObjectComparer_1_SaveSlotBackupsManager_BackupParseQueue_
