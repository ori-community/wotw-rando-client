#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EnergyDoorSlot {
        namespace {
            inline app::EnergyDoorSlot__Class* type_info_ref = nullptr;
        }
        inline app::EnergyDoorSlot__Class** type_info = &type_info_ref;
        inline app::EnergyDoorSlot__Class* get_class() {
            return il2cpp::get_class<app::EnergyDoorSlot__Class>(type_info, "", "EnergyDoorSlot");
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
