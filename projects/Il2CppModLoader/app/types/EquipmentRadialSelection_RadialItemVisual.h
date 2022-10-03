#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection_RadialItemVisual {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EquipmentRadialSelection_RadialItemVisual__Class** type_info;
        inline app::EquipmentRadialSelection_RadialItemVisual__Class* get_class() {
            return il2cpp::get_nested_class<app::EquipmentRadialSelection_RadialItemVisual__Class>(type_info, "", "EquipmentRadialSelection", "RadialItemVisual");
        }
        inline app::EquipmentRadialSelection_RadialItemVisual* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection_RadialItemVisual>(get_class());
        }
        inline app::EquipmentRadialSelection_RadialItemVisual__Array* create_array(int size) {
            return il2cpp::array_new<app::EquipmentRadialSelection_RadialItemVisual__Array>(get_class(), size);
        }
    } // namespace EquipmentRadialSelection_RadialItemVisual
} // namespace app::classes::types
