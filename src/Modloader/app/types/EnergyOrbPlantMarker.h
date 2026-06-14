#pragma once
#include <Modloader/app/structs/EnergyOrbPlantMarker.h>
#include <Modloader/app/structs/EnergyOrbPlantMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnergyOrbPlantMarker {
        inline app::EnergyOrbPlantMarker__Class** type_info() {
            static app::EnergyOrbPlantMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnergyOrbPlantMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnergyOrbPlantMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantMarker__Class>(type_info(), "", "EnergyOrbPlantMarker");
        }
        inline app::EnergyOrbPlantMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantMarker>(get_class());
        }
    } // namespace EnergyOrbPlantMarker
} // namespace app::classes::types
