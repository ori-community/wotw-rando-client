#pragma once
#include <Modloader/app/structs/KeyValuePair_2_M_Telem_Perform_ProfilingSett_Setting_M_Tele_Perfor_Set_IProfilingSe___A__C.h>
#include <Modloader/app/structs/KeyValuePair_2_M_Telem_Perform_ProfilingSett_Setting_M_Telem_Perform_Sett_IProfilingSe___A.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array {
        inline app::KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array__Class** type_info() {
            static app::KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array__Class* get_class() {
            return il2cpp::get_class<app::KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array__Class>(type_info(), "System.Collections.Generic", "KeyValuePair`2[Moon.Telemetry.Performance.ProfilingSettings+SettingType,Moon.Telemetry.Performance.Settings.IProfilingSetting][]");
        }
        inline app::KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array* create() {
            return il2cpp::create_object<app::KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array>(get_class());
        }
    } // namespace KeyValuePair_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting___Array
} // namespace app::classes::types
