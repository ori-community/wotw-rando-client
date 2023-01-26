#pragma once
#include <Modloader/app/structs/Dictionary_2_T_TV_E_GameContro_ProfilingConfigura_M_Telem_Perform_ProfilingSett_Set___A__C.h>
#include <Modloader/app/structs/Dictionary_2_T_TVa_En_GameControl_ProfilingConfigura_M_Telem_Perform_ProfilingSett_Set___A.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array {
        inline app::Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class** type_info() {
            static app::Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class* get_class() {
            return il2cpp::get_class<app::Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array__Class>(type_info(), "System.Collections.Generic", "Dictionary`2[TKey,TValue]+Entry[GameController+ProfilingConfiguration,Moon.Telemetry.Performance.ProfilingSettings+Setting[]][]");
        }
        inline app::Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array* create() {
            return il2cpp::create_object<app::Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array>(get_class());
        }
    } // namespace Dictionary_2_TKey_TValue_Entry_GameController_ProfilingConfiguration_Moon_Telemetry_Performance_ProfilingSettings_Setting___Array
} // namespace app::classes::types
