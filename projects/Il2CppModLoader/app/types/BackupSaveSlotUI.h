#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BackupSaveSlotUI {
        namespace {
            app::BackupSaveSlotUI__Class* type_info_ref = nullptr;
        }
        app::BackupSaveSlotUI__Class** type_info = &type_info_ref;
        inline app::BackupSaveSlotUI__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveSlotUI__Class>(type_info, "", "BackupSaveSlotUI");
        }
        inline app::BackupSaveSlotUI* create() {
            return il2cpp::create_object<app::BackupSaveSlotUI>(get_class());
        }
        inline app::BackupSaveSlotUI__Array* create_array(int size) {
            return il2cpp::array_new<app::BackupSaveSlotUI__Array>(get_class(), size);
        }
        inline app::BackupSaveSlotUI__Array* create_array(const std::vector<app::BackupSaveSlotUI*>& items) {
            return il2cpp::array_new<app::BackupSaveSlotUI__Array>(get_class(), items);
        }
    } // namespace BackupSaveSlotUI
} // namespace app::classes::types
