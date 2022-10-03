#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WaterSimulationProfilingSetting {
        namespace {
            app::WaterSimulationProfilingSetting__Class* type_info_ref = nullptr;
        }
        app::WaterSimulationProfilingSetting__Class** type_info = &type_info_ref;
        inline app::WaterSimulationProfilingSetting__Class* get_class() {
            return il2cpp::get_class<app::WaterSimulationProfilingSetting__Class>(type_info, "Moon.Telemetry.Performance.Settings", "WaterSimulationProfilingSetting");
        }
        inline app::WaterSimulationProfilingSetting* create() {
            return il2cpp::create_object<app::WaterSimulationProfilingSetting>(get_class());
        }
    } // namespace WaterSimulationProfilingSetting
} // namespace app::classes::types
