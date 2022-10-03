#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EnergyOrbPlantLargeMarker {
        namespace {
            app::EnergyOrbPlantLargeMarker__Class* type_info_ref = nullptr;
        }
        app::EnergyOrbPlantLargeMarker__Class** type_info = &type_info_ref;
        inline app::EnergyOrbPlantLargeMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantLargeMarker__Class>(type_info, "", "EnergyOrbPlantLargeMarker");
        }
        inline app::EnergyOrbPlantLargeMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantLargeMarker>(get_class());
        }
    } // namespace EnergyOrbPlantLargeMarker
} // namespace app::classes::types
