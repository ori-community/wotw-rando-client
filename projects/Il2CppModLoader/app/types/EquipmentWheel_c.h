#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentWheel_c {
        inline app::EquipmentWheel_c__Class** type_info = (app::EquipmentWheel_c__Class**)(modloader::win::memory::resolve_rva(0x0470EFC8));
        inline app::EquipmentWheel_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentWheel_c__Class>(type_info, "", "EquipmentWheel", "<>c");
        }
        inline app::EquipmentWheel_c* create() {
            return il2cpp::create_object<app::EquipmentWheel_c>(get_class());
        }
    } // namespace EquipmentWheel_c
} // namespace app::classes::types
