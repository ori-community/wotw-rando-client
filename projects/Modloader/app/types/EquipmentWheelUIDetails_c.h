#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EquipmentWheelUIDetails_c__Class.h>
#include <Modloader/app/structs/EquipmentWheelUIDetails_c.h>

namespace app::classes::types {
    namespace EquipmentWheelUIDetails_c {
        inline app::EquipmentWheelUIDetails_c__Class** type_info = (app::EquipmentWheelUIDetails_c__Class**)(modloader::win::memory::resolve_rva(0x0473FCF0));
        inline app::EquipmentWheelUIDetails_c__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentWheelUIDetails_c__Class>(type_info, "", "EquipmentWheelUIDetails", "<>c");
        }
        inline app::EquipmentWheelUIDetails_c* create() {
            return il2cpp::create_object<app::EquipmentWheelUIDetails_c>(get_class());
        }
    } // namespace EquipmentWheelUIDetails_c
} // namespace app::classes::types
