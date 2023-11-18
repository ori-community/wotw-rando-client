#pragma once
#include <Modloader/app/structs/EnergyDoor.h>
#include <Modloader/app/structs/EnergyDoor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnergyDoor {
        inline app::EnergyDoor__Class** type_info() {
            static app::EnergyDoor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnergyDoor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnergyDoor__Class* get_class() {
            return il2cpp::get_class<app::EnergyDoor__Class>(type_info(), "", "EnergyDoor");
        }
        inline app::EnergyDoor* create() {
            return il2cpp::create_object<app::EnergyDoor>(get_class());
        }
    } // namespace EnergyDoor
} // namespace app::classes::types
