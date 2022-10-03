#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager_BackupParseQueue__Array {
        namespace {
            app::SaveSlotBackupsManager_BackupParseQueue__Array__Class* type_info_ref = nullptr;
        }
        app::SaveSlotBackupsManager_BackupParseQueue__Array__Class** type_info = &type_info_ref;
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupsManager_BackupParseQueue__Array__Class>(type_info, "", "SaveSlotBackupsManager+BackupParseQueue[]");
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array* create() {
            return il2cpp::create_object<app::SaveSlotBackupsManager_BackupParseQueue__Array>(get_class());
        }
    } // namespace SaveSlotBackupsManager_BackupParseQueue__Array
} // namespace app::classes::types
