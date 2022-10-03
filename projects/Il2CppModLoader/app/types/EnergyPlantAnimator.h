#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnergyPlantAnimator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnergyPlantAnimator__Class** type_info;
        inline app::EnergyPlantAnimator__Class* get_class() {
            return il2cpp::get_class<app::EnergyPlantAnimator__Class>(type_info, "", "EnergyPlantAnimator");
        }
        inline app::EnergyPlantAnimator* create() {
            return il2cpp::create_object<app::EnergyPlantAnimator>(get_class());
        }
    } // namespace EnergyPlantAnimator
} // namespace app::classes::types
