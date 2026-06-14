#pragma once
#include <Modloader/app/structs/KeyValuePair_2_GameControl_ProfilingConfigurat_M_Teleme_Performa_ProfilingSetti_Set___A__C.h>
#include <Modloader/app/structs/KeyValuePair_2_GameControll_ProfilingConfigurat_M_Teleme_Performa_ProfilingSetti_Sett___Ar.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array {
        inline app::KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class** type_info() {
            static app::KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[GameController+ProfilingConfiguration,Moon.Telemetry.Performance.ProfilingSettings+Setting[]][]");
        }
        inline app::KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array>(get_class());
        }
    } // namespace KeyValuePair_2_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array
} // namespace app::classes::types
