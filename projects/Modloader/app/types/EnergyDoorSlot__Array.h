#pragma once
#include <Modloader/app/structs/EnergyDoorSlot__Array.h>
#include <Modloader/app/structs/EnergyDoorSlot__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnergyDoorSlot__Array {
        inline app::EnergyDoorSlot__Array__Class** type_info() {
            static app::EnergyDoorSlot__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnergyDoorSlot__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnergyDoorSlot__Array__Class* get_class() {
            return il2cpp::get_class<app::EnergyDoorSlot__Array__Class>(type_info(), "", "EnergyDoorSlot[]");
        }
        inline app::EnergyDoorSlot__Array* create() {
            return il2cpp::create_object<app::EnergyDoorSlot__Array>(get_class());
        }
    } // namespace EnergyDoorSlot__Array
} // namespace app::classes::types
