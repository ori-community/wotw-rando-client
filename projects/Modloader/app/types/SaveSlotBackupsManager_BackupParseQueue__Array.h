#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager_BackupParseQueue__Array {
        namespace {
            inline app::SaveSlotBackupsManager_BackupParseQueue__Array__Class* type_info_ref = nullptr;
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array__Class** type_info = &type_info_ref;
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupsManager_BackupParseQueue__Array__Class>(type_info, "", "SaveSlotBackupsManager+BackupParseQueue[]");
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array* create() {
            return il2cpp::create_object<app::SaveSlotBackupsManager_BackupParseQueue__Array>(get_class());
        }
    } // namespace SaveSlotBackupsManager_BackupParseQueue__Array
} // namespace app::classes::types
