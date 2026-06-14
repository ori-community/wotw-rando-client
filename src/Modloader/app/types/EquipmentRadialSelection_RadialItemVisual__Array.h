#pragma once
#include <Modloader/app/structs/EquipmentRadialSelection_RadialItemVisual__Array.h>
#include <Modloader/app/structs/EquipmentRadialSelection_RadialItemVisual__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection_RadialItemVisual__Array {
        inline app::EquipmentRadialSelection_RadialItemVisual__Array__Class** type_info() {
            static app::EquipmentRadialSelection_RadialItemVisual__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentRadialSelection_RadialItemVisual__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentRadialSelection_RadialItemVisual__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentRadialSelection_RadialItemVisual__Array__Class>(type_info(), "", "EquipmentRadialSelection+RadialItemVisual[]");
        }
        inline app::EquipmentRadialSelection_RadialItemVisual__Array* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection_RadialItemVisual__Array>(get_class());
        }
    } // namespace EquipmentRadialSelection_RadialItemVisual__Array
} // namespace app::classes::types
