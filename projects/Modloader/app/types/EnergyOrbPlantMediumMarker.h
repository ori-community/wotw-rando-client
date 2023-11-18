#pragma once
#include <Modloader/app/structs/EnergyOrbPlantMediumMarker.h>
#include <Modloader/app/structs/EnergyOrbPlantMediumMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnergyOrbPlantMediumMarker {
        inline app::EnergyOrbPlantMediumMarker__Class** type_info() {
            static app::EnergyOrbPlantMediumMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnergyOrbPlantMediumMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnergyOrbPlantMediumMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantMediumMarker__Class>(type_info(), "", "EnergyOrbPlantMediumMarker");
        }
        inline app::EnergyOrbPlantMediumMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantMediumMarker>(get_class());
        }
    } // namespace EnergyOrbPlantMediumMarker
} // namespace app::classes::types
