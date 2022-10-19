#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotBackupInfo {
        inline app::SaveSlotBackupInfo__Class** type_info = (app::SaveSlotBackupInfo__Class**)(modloader::win::memory::resolve_rva(0x04708748));
        inline app::SaveSlotBackupInfo__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackupInfo__Class>(type_info, "", "SaveSlotBackupInfo");
        }
        inline app::SaveSlotBackupInfo* create() {
            return il2cpp::create_object<app::SaveSlotBackupInfo>(get_class());
        }
        inline app::SaveSlotBackupInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotBackupInfo__Array>(get_class(), size);
        }
        inline app::SaveSlotBackupInfo__Array* create_array(const std::vector<app::SaveSlotBackupInfo*>& items) {
            return il2cpp::array_new<app::SaveSlotBackupInfo__Array>(get_class(), items);
        }
    } // namespace SaveSlotBackupInfo
} // namespace app::classes::types
