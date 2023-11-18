#pragma once
#include <Modloader/app/structs/EnergyOrbPlantLargeMarker.h>
#include <Modloader/app/structs/EnergyOrbPlantLargeMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnergyOrbPlantLargeMarker {
        inline app::EnergyOrbPlantLargeMarker__Class** type_info() {
            static app::EnergyOrbPlantLargeMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnergyOrbPlantLargeMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnergyOrbPlantLargeMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantLargeMarker__Class>(type_info(), "", "EnergyOrbPlantLargeMarker");
        }
        inline app::EnergyOrbPlantLargeMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantLargeMarker>(get_class());
        }
    } // namespace EnergyOrbPlantLargeMarker
} // namespace app::classes::types
