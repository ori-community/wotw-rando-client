#pragma once
#include <Modloader/app/structs/BackupSaveSlotUI__Array.h>
#include <Modloader/app/structs/BackupSaveSlotUI__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BackupSaveSlotUI__Array {
        inline app::BackupSaveSlotUI__Array__Class** type_info() {
            static app::BackupSaveSlotUI__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BackupSaveSlotUI__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BackupSaveSlotUI__Array__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveSlotUI__Array__Class>(type_info(), "", "BackupSaveSlotUI[]");
        }
        inline app::BackupSaveSlotUI__Array* create() {
            return il2cpp::create_object<app::BackupSaveSlotUI__Array>(get_class());
        }
    } // namespace BackupSaveSlotUI__Array
} // namespace app::classes::types
