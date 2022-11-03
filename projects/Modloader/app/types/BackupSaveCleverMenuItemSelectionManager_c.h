#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BackupSaveCleverMenuItemSelectionManager_c {
        inline app::BackupSaveCleverMenuItemSelectionManager_c__Class** type_info = (app::BackupSaveCleverMenuItemSelectionManager_c__Class**)(modloader::win::memory::resolve_rva(0x0472FE48));
        inline app::BackupSaveCleverMenuItemSelectionManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BackupSaveCleverMenuItemSelectionManager_c__Class>(type_info, "", "BackupSaveCleverMenuItemSelectionManager", "<>c");
        }
        inline app::BackupSaveCleverMenuItemSelectionManager_c* create() {
            return il2cpp::create_object<app::BackupSaveCleverMenuItemSelectionManager_c>(get_class());
        }
    } // namespace BackupSaveCleverMenuItemSelectionManager_c
} // namespace app::classes::types
