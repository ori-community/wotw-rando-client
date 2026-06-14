#pragma once
#include <Modloader/app/structs/EnergyDoorSlot.h>
#include <Modloader/app/structs/EnergyDoorSlot__Array.h>
#include <Modloader/app/structs/EnergyDoorSlot__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnergyDoorSlot {
        inline app::EnergyDoorSlot__Class** type_info() {
            static app::EnergyDoorSlot__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnergyDoorSlot__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnergyDoorSlot__Class* get_class() {
            return il2cpp::get_class<app::EnergyDoorSlot__Class>(type_info(), "", "EnergyDoorSlot");
        }
        inline app::EnergyDoorSlot* create() {
            return il2cpp::create_object<app::EnergyDoorSlot>(get_class());
        }
        inline app::EnergyDoorSlot__Array* create_array(int size) {
            return il2cpp::array_new<app::EnergyDoorSlot__Array>(get_class(), size);
        }
        inline app::EnergyDoorSlot__Array* create_array(const std::vector<app::EnergyDoorSlot*>& items) {
            return il2cpp::array_new<app::EnergyDoorSlot__Array>(get_class(), items);
        }
    } // namespace EnergyDoorSlot
} // namespace app::classes::types
