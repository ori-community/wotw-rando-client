#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SaveSlotBackup {
        inline app::SaveSlotBackup__Class** type_info = (app::SaveSlotBackup__Class**)(modloader::win::memory::resolve_rva(0x04709410));
        inline app::SaveSlotBackup__Class* get_class() {
            return il2cpp::get_class<app::SaveSlotBackup__Class>(type_info, "", "SaveSlotBackup");
        }
        inline app::SaveSlotBackup* create() {
            return il2cpp::create_object<app::SaveSlotBackup>(get_class());
        }
        inline app::SaveSlotBackup__Array* create_array(int size) {
            return il2cpp::array_new<app::SaveSlotBackup__Array>(get_class(), size);
        }
        inline app::SaveSlotBackup__Array* create_array(const std::vector<app::SaveSlotBackup*>& items) {
            return il2cpp::array_new<app::SaveSlotBackup__Array>(get_class(), items);
        }
    } // namespace SaveSlotBackup
} // namespace app::classes::types
