#pragma once
#include <Modloader/app/structs/EquipmentScreen_c_DisplayClass58_0.h>
#include <Modloader/app/structs/EquipmentScreen_c_DisplayClass58_0__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentScreen_c_DisplayClass58_0 {
        inline app::EquipmentScreen_c_DisplayClass58_0__Class** type_info() {
            static app::EquipmentScreen_c_DisplayClass58_0__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EquipmentScreen_c_DisplayClass58_0__Class**)(modloader::win::memory::resolve_rva(0x0470E660));
            }
            return cache;
        }
        inline app::EquipmentScreen_c_DisplayClass58_0__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_c_DisplayClass58_0__Class>(type_info(), "", "EquipmentScreen", "<>c__DisplayClass58_0");
        }
        inline app::EquipmentScreen_c_DisplayClass58_0* create() {
            return il2cpp::create_object<app::EquipmentScreen_c_DisplayClass58_0>(get_class());
        }
    } // namespace EquipmentScreen_c_DisplayClass58_0
} // namespace app::classes::types
