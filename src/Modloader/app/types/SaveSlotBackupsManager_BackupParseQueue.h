#pragma once
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue.h>
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue__Array.h>
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue__Boxed.h>
#include <Modloader/app/structs/SaveSlotBackupsManager_BackupParseQueue__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager_BackupParseQueue {
        inline app::SaveSlotBackupsManager_BackupParseQueue__Class** type_info() {
            static app::SaveSlotBackupsManager_BackupParseQueue__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SaveSlotBackupsManager_BackupParseQueue__Class**)(modloader::win::memory::resolve_rva(0x047788E8));
            }
            return cache;
        }
        inline app::SaveSlotBackupsManager_BackupParseQueue__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotBackupsManager_BackupParseQueue__Class>(type_info(), "", "SaveSlotBackupsManager", "BackupParseQueue");
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
