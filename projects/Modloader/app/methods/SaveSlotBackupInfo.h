#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/SaveSlotBackupInfo.h>
#include <Modloader/app/structs/SaveSlotInfo.h>

namespace app::classes::SaveSlotBackupInfo {
    IL2CPP_REGISTER_METHOD(0x0091DD30, void, ctor, (app::SaveSlotBackupInfo * this_ptr, int32_t slot_index, app::SaveSlotInfo* save_slot))
    IL2CPP_REGISTER_METHOD(0x0091DD40, int32_t, get_TotalSeconds, (app::SaveSlotBackupInfo * this_ptr))
} // namespace app::classes::SaveSlotBackupInfo
