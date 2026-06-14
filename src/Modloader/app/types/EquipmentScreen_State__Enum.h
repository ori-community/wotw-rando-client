#pragma once
#include <Modloader/app/structs/EquipmentScreen_State__Enum.h>
#include <Modloader/app/structs/EquipmentScreen_State__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentScreen_State__Enum {
        inline app::EquipmentScreen_State__Enum__Class** type_info() {
            static app::EquipmentScreen_State__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EquipmentScreen_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476A810));
            }
            return cache;
        }
        inline app::EquipmentScreen_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_State__Enum__Class>(type_info(), "", "EquipmentScreen", "State");
        }
        inline app::EquipmentScreen_State__Enum* create() {
            return il2cpp::create_object<app::EquipmentScreen_State__Enum>(get_class());
        }
    } // namespace EquipmentScreen_State__Enum
} // namespace app::classes::types
