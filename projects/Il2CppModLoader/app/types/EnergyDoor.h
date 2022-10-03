#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnergyDoor {
        namespace {
            app::EnergyDoor__Class* type_info_ref = nullptr;
        }
        app::EnergyDoor__Class** type_info = &type_info_ref;
        inline app::EnergyDoor__Class* get_class() {
            return il2cpp::get_class<app::EnergyDoor__Class>(type_info, "", "EnergyDoor");
        }
        inline app::EnergyDoor* create() {
            return il2cpp::create_object<app::EnergyDoor>(get_class());
        }
    } // namespace EnergyDoor
} // namespace app::classes::types
