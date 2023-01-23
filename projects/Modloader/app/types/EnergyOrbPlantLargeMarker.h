#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EnergyOrbPlantLargeMarker__Class.h>
#include <Modloader/app/structs/EnergyOrbPlantLargeMarker.h>

namespace app::classes::types {
    namespace EnergyOrbPlantLargeMarker {
        namespace {
            inline app::EnergyOrbPlantLargeMarker__Class* type_info_ref = nullptr;
        }
        inline app::EnergyOrbPlantLargeMarker__Class** type_info = &type_info_ref;
        inline app::EnergyOrbPlantLargeMarker__Class* get_class() {
            return il2cpp::get_class<app::EnergyOrbPlantLargeMarker__Class>(type_info, "", "EnergyOrbPlantLargeMarker");
        }
        inline app::EnergyOrbPlantLargeMarker* create() {
            return il2cpp::create_object<app::EnergyOrbPlantLargeMarker>(get_class());
        }
    } // namespace EnergyOrbPlantLargeMarker
} // namespace app::classes::types
