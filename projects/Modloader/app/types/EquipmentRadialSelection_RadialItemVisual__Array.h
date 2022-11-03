#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection_RadialItemVisual__Array {
        namespace {
            inline app::EquipmentRadialSelection_RadialItemVisual__Array__Class* type_info_ref = nullptr;
        }
        inline app::EquipmentRadialSelection_RadialItemVisual__Array__Class** type_info = &type_info_ref;
        inline app::EquipmentRadialSelection_RadialItemVisual__Array__Class* get_class() {
            return il2cpp::get_class<app::EquipmentRadialSelection_RadialItemVisual__Array__Class>(type_info, "", "EquipmentRadialSelection+RadialItemVisual[]");
        }
        inline app::EquipmentRadialSelection_RadialItemVisual__Array* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection_RadialItemVisual__Array>(get_class());
        }
    } // namespace EquipmentRadialSelection_RadialItemVisual__Array
} // namespace app::classes::types
