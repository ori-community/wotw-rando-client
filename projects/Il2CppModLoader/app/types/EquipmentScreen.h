#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentScreen {
        inline app::EquipmentScreen__Class** type_info = (app::EquipmentScreen__Class**)(modloader::win::memory::resolve_rva(0x0477E788));
        inline app::EquipmentScreen__Class* get_class() {
            return il2cpp::get_class<app::EquipmentScreen__Class>(type_info, "", "EquipmentScreen");
        }
        inline app::EquipmentScreen* create() {
            return il2cpp::create_object<app::EquipmentScreen>(get_class());
        }
    } // namespace EquipmentScreen
} // namespace app::classes::types
