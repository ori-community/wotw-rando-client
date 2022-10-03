#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterControl_Simulation {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberWaterControl_Simulation__Class** type_info;
        inline app::UberWaterControl_Simulation__Class* get_class() {
            return il2cpp::get_nested_class<app::UberWaterControl_Simulation__Class>(type_info, "", "UberWaterControl", "Simulation");
        }
        inline app::UberWaterControl_Simulation* create() {
            return il2cpp::create_object<app::UberWaterControl_Simulation>(get_class());
        }
    } // namespace UberWaterControl_Simulation
} // namespace app::classes::types
