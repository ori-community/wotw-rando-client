#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BackupSaveCleverMenuItemSelectionManager {
        namespace {
            inline app::BackupSaveCleverMenuItemSelectionManager__Class* type_info_ref = nullptr;
        }
        inline app::BackupSaveCleverMenuItemSelectionManager__Class** type_info = &type_info_ref;
        inline app::BackupSaveCleverMenuItemSelectionManager__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveCleverMenuItemSelectionManager__Class>(type_info, "", "BackupSaveCleverMenuItemSelectionManager");
        }
        inline app::BackupSaveCleverMenuItemSelectionManager* create() {
            return il2cpp::create_object<app::BackupSaveCleverMenuItemSelectionManager>(get_class());
        }
    } // namespace BackupSaveCleverMenuItemSelectionManager
} // namespace app::classes::types
