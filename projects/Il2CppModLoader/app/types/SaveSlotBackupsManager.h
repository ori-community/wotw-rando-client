#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotBackupsManager__Class** type_info;
        inline app::SaveSlotBackupsManager__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupsManager__Class>(type_info, "", "SaveSlotBackupsManager");
        }
        inline app::SaveSlotBackupsManager* create() {
            return il2cpp::create_object<app::SaveSlotBackupsManager>(get_class());
        }
    } // namespace SaveSlotBackupsManager
} // namespace app::classes::types
