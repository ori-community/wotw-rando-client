#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupsManager_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotBackupsManager_c__Class** type_info;
        inline app::SaveSlotBackupsManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SaveSlotBackupsManager_c__Class>(type_info, "", "SaveSlotBackupsManager", "<>c");
        }
        inline app::SaveSlotBackupsManager_c* create() {
            return il2cpp::create_object<app::SaveSlotBackupsManager_c>(get_class());
        }
    } // namespace SaveSlotBackupsManager_c
} // namespace app::classes::types
