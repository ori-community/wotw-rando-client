#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentType__Enum__Array__Class.h>
#include <Modloader/app/structs/EquipmentType__Enum__Array.h>

namespace app::classes::types {
    namespace EquipmentType__Enum__Array {
        inline app::EquipmentType__Enum__Array__Class** type_info = (app::EquipmentType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0472B500));
        inline app::EquipmentType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentType__Enum__Array__Class>(type_info, "", "EquipmentType[]");
        }
        inline app::EquipmentType__Enum__Array* create() {
            return il2cpp::create_object<app::EquipmentType__Enum__Array>(get_class());
        }
    } // namespace EquipmentType__Enum__Array
} // namespace app::classes::types
