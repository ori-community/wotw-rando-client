#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BackupSaveCleverMenuItem.h>
#include <Modloader/app/structs/SaveSlotInfo.h>

namespace app::classes::BackupSaveCleverMenuItem {
    IL2CPP_REGISTER_METHOD(0x00F814B0, void, OnDisable, (app::BackupSaveCleverMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F81610, void, SetData, (app::BackupSaveCleverMenuItem * this_ptr, app::SaveSlotInfo* save_slot, int32_t save_slot_index, int32_t display_index))
    IL2CPP_REGISTER_METHOD(0x00F81D50, void, OnPress, (app::BackupSaveCleverMenuItem * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F81D90, void, ctor, (app::BackupSaveCleverMenuItem * this_ptr))
} // namespace app::classes::BackupSaveCleverMenuItem
