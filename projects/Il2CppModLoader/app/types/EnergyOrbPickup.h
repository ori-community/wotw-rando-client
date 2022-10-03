#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnergyOrbPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EnergyOrbPickup__Class** type_info;
        inline app::EnergyOrbPickup__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPickup__Class>(type_info, "", "EnergyOrbPickup");
        }
        inline app::EnergyOrbPickup* create() {
            return il2cpp::create_object<app::EnergyOrbPickup>(get_class());
        }
    } // namespace EnergyOrbPickup
} // namespace app::classes::types
