#pragma once
#include <Modloader/app/structs/WaterSimulationProfilingSetting.h>
#include <Modloader/app/structs/WaterSimulationProfilingSetting__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterSimulationProfilingSetting {
        inline app::WaterSimulationProfilingSetting__Class** type_info() {
            static app::WaterSimulationProfilingSetting__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterSimulationProfilingSetting__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterSimulationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WaterSimulationProfilingSetting__Class>(type_info(), "Moon.Telemetry.Performance.Settings", "WaterSimulationProfilingSetting");
        }
        inline app::WaterSimulationProfilingSetting* create() {
            return il2cpp::create_object<app::WaterSimulationProfilingSetting>(get_class());
        }
    } // namespace WaterSimulationProfilingSetting
} // namespace app::classes::types
