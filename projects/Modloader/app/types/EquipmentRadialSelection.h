#pragma once
#include <Modloader/app/structs/EquipmentRadialSelection.h>
#include <Modloader/app/structs/EquipmentRadialSelection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EquipmentRadialSelection {
        inline app::EquipmentRadialSelection__Class** type_info() {
            static app::EquipmentRadialSelection__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EquipmentRadialSelection__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EquipmentRadialSelection__Class* get_class() {
            return il2cpp::get_class<app::EquipmentRadialSelection__Class>(type_info(), "", "EquipmentRadialSelection");
        }
        inline app::EquipmentRadialSelection* create() {
            return il2cpp::create_object<app::EquipmentRadialSelection>(get_class());
        }
    } // namespace EquipmentRadialSelection
} // namespace app::classes::types
