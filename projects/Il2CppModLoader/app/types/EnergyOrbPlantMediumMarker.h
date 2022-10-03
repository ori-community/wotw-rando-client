#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnergyOrbPlantMediumMarker {
        namespace {
            app::EnergyOrbPlantMediumMarker__Class* type_info_ref = nullptr;
        }
        app::EnergyOrbPlantMediumMarker__Class** type_info = &type_info_ref;
        inline app::EnergyOrbPlantMediumMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantMediumMarker__Class>(type_info, "", "EnergyOrbPlantMediumMarker");
        }
        inline app::EnergyOrbPlantMediumMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantMediumMarker>(get_class());
        }
    } // namespace EnergyOrbPlantMediumMarker
} // namespace app::classes::types
