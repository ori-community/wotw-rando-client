#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BackupSaveSlotUI__Array__Class.h>
#include <Modloader/app/structs/BackupSaveSlotUI__Array.h>

namespace app::classes::types {
    namespace BackupSaveSlotUI__Array {
        namespace {
            inline app::BackupSaveSlotUI__Array__Class* type_info_ref = nullptr;
        }
        inline app::BackupSaveSlotUI__Array__Class** type_info = &type_info_ref;
        inline app::BackupSaveSlotUI__Array__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveSlotUI__Array__Class>(type_info, "", "BackupSaveSlotUI[]");
        }
        inline app::BackupSaveSlotUI__Array* create() {
            return il2cpp::create_object<app::BackupSaveSlotUI__Array>(get_class());
        }
    } // namespace BackupSaveSlotUI__Array
} // namespace app::classes::types
