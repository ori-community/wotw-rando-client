#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotBackup__Class** type_info;
        inline app::SaveSlotBackup__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackup__Class>(type_info, "", "SaveSlotBackup");
        }
        inline app::SaveSlotBackup* create() {
            return il2cpp::create_object<app::SaveSlotBackup>(get_class());
        }
        inline app::SaveSlotBackup__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotBackup__Array>(get_class(), size);
        }
    } // namespace SaveSlotBackup
} // namespace app::classes::types
