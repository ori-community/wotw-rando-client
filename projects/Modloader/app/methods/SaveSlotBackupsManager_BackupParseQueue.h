#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue__Boxed.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace app::classes::SaveSlotBackupsManager_BackupParseQueue {
    IL2CPP_REGISTER_METHOD(0x0011B1F0, void, ctor, (app::SaveSlotBackupsManager_BackupParseQueue__Boxed * this_ptr, int32_t slot, int32_t backup, app::Byte__Array* data))
}
