#pragma once
#include <Modloader/app/structs/EnergyOrbPlantSmallMarker.h>
#include <Modloader/app/structs/EnergyOrbPlantSmallMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnergyOrbPlantSmallMarker {
        inline app::EnergyOrbPlantSmallMarker__Class** type_info() {
            static app::EnergyOrbPlantSmallMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnergyOrbPlantSmallMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnergyOrbPlantSmallMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantSmallMarker__Class>(type_info(), "", "EnergyOrbPlantSmallMarker");
        }
        inline app::EnergyOrbPlantSmallMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantSmallMarker>(get_class());
        }
    } // namespace EnergyOrbPlantSmallMarker
} // namespace app::classes::types
