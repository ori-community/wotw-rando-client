#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BackupSaveCleverMenuItem {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BackupSaveCleverMenuItem__Class** type_info;
        inline app::BackupSaveCleverMenuItem__Class* get_class() {
            return il2cpp::get_class<app::BackupSaveCleverMenuItem__Class>(type_info, "", "BackupSaveCleverMenuItem");
        }
        inline app::BackupSaveCleverMenuItem* create() {
            return il2cpp::create_object<app::BackupSaveCleverMenuItem>(get_class());
        }
    } // namespace BackupSaveCleverMenuItem
} // namespace app::classes::types
