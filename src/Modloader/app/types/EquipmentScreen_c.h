#pragma once
#include <Modloader/app/structs/EquipmentScreen_c.h>
#include <Modloader/app/structs/EquipmentScreen_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentScreen_c {
        inline app::EquipmentScreen_c__Class** type_info() {
            static app::EquipmentScreen_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EquipmentScreen_c__Class**)(modloader::win::memory::resolve_rva(0x04782EF0));
            }
            return cache;
        }
        inline app::EquipmentScreen_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_c__Class>(type_info(), "", "EquipmentScreen", "<>c");
        }
        inline app::EquipmentScreen_c* create() {
            return il2cpp::create_object<app::EquipmentScreen_c>(get_class());
        }
    } // namespace EquipmentScreen_c
} // namespace app::classes::types
