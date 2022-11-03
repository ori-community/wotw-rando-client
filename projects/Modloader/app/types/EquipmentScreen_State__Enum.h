#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentScreen_State__Enum {
        inline app::EquipmentScreen_State__Enum__Class** type_info = (app::EquipmentScreen_State__Enum__Class**)(modloader::win::memory::resolve_rva(0x0476A810));
        inline app::EquipmentScreen_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentScreen_State__Enum__Class>(type_info, "", "EquipmentScreen", "State");
        }
        inline app::EquipmentScreen_State__Enum* create() {
            return il2cpp::create_object<app::EquipmentScreen_State__Enum>(get_class());
        }
    } // namespace EquipmentScreen_State__Enum
} // namespace app::classes::types
