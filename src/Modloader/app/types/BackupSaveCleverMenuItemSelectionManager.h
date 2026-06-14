#pragma once
#include <Modloader/app/structs/BackupSaveCleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/BackupSaveCleverMenuItemSelectionManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BackupSaveCleverMenuItemSelectionManager {
        inline app::BackupSaveCleverMenuItemSelectionManager__Class** type_info() {
            static app::BackupSaveCleverMenuItemSelectionManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BackupSaveCleverMenuItemSelectionManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BackupSaveCleverMenuItemSelectionManager__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveCleverMenuItemSelectionManager__Class>(type_info(), "", "BackupSaveCleverMenuItemSelectionManager");
        }
        inline app::BackupSaveCleverMenuItemSelectionManager* create() {
            return il2cpp::create_object<app::BackupSaveCleverMenuItemSelectionManager>(get_class());
        }
    } // namespace BackupSaveCleverMenuItemSelectionManager
} // namespace app::classes::types
