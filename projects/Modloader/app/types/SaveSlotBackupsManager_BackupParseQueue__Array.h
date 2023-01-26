#pragma once
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue__Array.h>
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager_BackupParseQueue__Array {
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array__Class** type_info() {
            static app::SaveSlotBackupsManager_BackupParseQueue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SaveSlotBackupsManager_BackupParseQueue__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupsManager_BackupParseQueue__Array__Class>(type_info(), "", "SaveSlotBackupsManager+BackupParseQueue[]");
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array* create() {
            return il2cpp::create_object<app::SaveSlotBackupsManager_BackupParseQueue__Array>(get_class());
        }
    } // namespace SaveSlotBackupsManager_BackupParseQueue__Array
} // namespace app::classes::types
