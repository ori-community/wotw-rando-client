#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BackupSaveCleverMenuItemSelectionManager {
        namespace {
            app::BackupSaveCleverMenuItemSelectionManager__Class* type_info_ref = nullptr;
        }
        app::BackupSaveCleverMenuItemSelectionManager__Class** type_info = &type_info_ref;
        inline app::BackupSaveCleverMenuItemSelectionManager__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveCleverMenuItemSelectionManager__Class>(type_info, "", "BackupSaveCleverMenuItemSelectionManager");
        }
        inline app::BackupSaveCleverMenuItemSelectionManager* create() {
            return il2cpp::create_object<app::BackupSaveCleverMenuItemSelectionManager>(get_class());
        }
    } // namespace BackupSaveCleverMenuItemSelectionManager
} // namespace app::classes::types
