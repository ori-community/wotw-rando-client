#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentWheel {
        inline app::EquipmentWheel__Class** type_info = (app::EquipmentWheel__Class**)(modloader::win::memory::resolve_rva(0x0474DE98));
        inline app::EquipmentWheel__Class* get_class() {
            return il2cpp::get_class<app::EquipmentWheel__Class>(type_info, "", "EquipmentWheel");
        }
        inline app::EquipmentWheel* create() {
            return il2cpp::create_object<app::EquipmentWheel>(get_class());
        }
    } // namespace EquipmentWheel
} // namespace app::classes::types
