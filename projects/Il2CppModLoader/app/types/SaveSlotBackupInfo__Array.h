#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SaveSlotBackupInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SaveSlotBackupInfo__Array__Class** type_info;
        inline app::SaveSlotBackupInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupInfo__Array__Class>(type_info, "", "SaveSlotBackupInfo[]");
        }
        inline app::SaveSlotBackupInfo__Array* create() {
            return il2cpp::create_object<app::SaveSlotBackupInfo__Array>(get_class());
        }
    } // namespace SaveSlotBackupInfo__Array
} // namespace app::classes::types
