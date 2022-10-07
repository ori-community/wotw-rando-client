#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager_BackupParseQueue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotBackupsManager_BackupParseQueue__Class** type_info;
        inline app::SaveSlotBackupsManager_BackupParseQueue__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotBackupsManager_BackupParseQueue__Class>(type_info, "", "SaveSlotBackupsManager", "BackupParseQueue");
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue* create() {
            return il2cpp::create_object<app::SaveSlotBackupsManager_BackupParseQueue>(get_class());
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Boxed* box(app::SaveSlotBackupsManager_BackupParseQueue value) {
            return il2cpp::box_value<app::SaveSlotBackupsManager_BackupParseQueue__Boxed>(get_class(), value);
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotBackupsManager_BackupParseQueue__Array>(get_class(), size);
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Array* create_array(const std::vector<app::SaveSlotBackupsManager_BackupParseQueue>& items) {
            return il2cpp::array_new<app::SaveSlotBackupsManager_BackupParseQueue__Array>(get_class(), items);
        }
    } // namespace SaveSlotBackupsManager_BackupParseQueue
} // namespace app::classes::types
