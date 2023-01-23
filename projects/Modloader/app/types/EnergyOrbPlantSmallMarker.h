#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnergyOrbPlantSmallMarker__Class.h>
#include <Modloader/app/structs/EnergyOrbPlantSmallMarker.h>

namespace app::classes::types {
    namespace EnergyOrbPlantSmallMarker {
        namespace {
            inline app::EnergyOrbPlantSmallMarker__Class* type_info_ref = nullptr;
        }
        inline app::EnergyOrbPlantSmallMarker__Class** type_info = &type_info_ref;
        inline app::EnergyOrbPlantSmallMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantSmallMarker__Class>(type_info, "", "EnergyOrbPlantSmallMarker");
        }
        inline app::EnergyOrbPlantSmallMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantSmallMarker>(get_class());
        }
    } // namespace EnergyOrbPlantSmallMarker
} // namespace app::classes::types
