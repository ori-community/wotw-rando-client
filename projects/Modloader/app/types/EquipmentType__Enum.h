#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentType__Enum {
        inline app::EquipmentType__Enum__Class** type_info = (app::EquipmentType__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471BCC8));
        inline app::EquipmentType__Enum__Class* get_class() {
            return il2cpp::get_class<app::EquipmentType__Enum__Class>(type_info, "", "EquipmentType");
        }
        inline app::EquipmentType__Enum* create() {
            return il2cpp::create_object<app::EquipmentType__Enum>(get_class());
        }
        inline app::EquipmentType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::EquipmentType__Enum__Array>(get_class(), size);
        }
        inline app::EquipmentType__Enum__Array* create_array(const std::vector<app::EquipmentType__Enum*>& items) {
            return il2cpp::array_new<app::EquipmentType__Enum__Array>(get_class(), items);
        }
    } // namespace EquipmentType__Enum
} // namespace app::classes::types
