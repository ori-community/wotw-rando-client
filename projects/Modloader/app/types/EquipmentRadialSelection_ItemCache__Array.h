#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection_ItemCache__Array {
        namespace {
            inline app::EquipmentRadialSelection_ItemCache__Array__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentRadialSelection_ItemCache__Array__Class** type_info = &type_info_ref;
        inline app::EquipmentRadialSelection_ItemCache__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentRadialSelection_ItemCache__Array__Class>(type_info, "", "EquipmentRadialSelection+ItemCache[]");
        }
        inline app::EquipmentRadialSelection_ItemCache__Array* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection_ItemCache__Array>(get_class());
        }
    } // namespace EquipmentRadialSelection_ItemCache__Array
} // namespace app::classes::types
