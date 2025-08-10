#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_M_Teleme_Performa_ProfilingSetti_SettingT_M_Telem_Perform_Sett_IProfilingSet_.h>
#include <Modloader/app/structs/Dictionary_2_T_TV_Enumer_M_Tele_Perfor_ProfilingSet_Settin_M_Tele_Perfor_Set_IProfilingSe_.h>
#include <Modloader/app/structs/IProfilingSetting.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>

namespace app::classes::System::Collections::Generic::
    Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_ {
    IL2CPP_REGISTER_METHOD(
        0x02BA5400,
        app::
            Dictionary_2_TKey_TValue_Enumerator_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_,
        GetEnumerator,
        app::Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x0283B900,
        void,
        Clear,
        app::Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA5090,
        bool,
        ContainsKey,
        app::Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_* this_ptr,
        app::ProfilingSettings_SettingType__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_* this_ptr,
        app::ProfilingSettings_SettingType__Enum key,
        app::IProfilingSetting* value
    )
    IL2CPP_REGISTER_METHOD(
        0x02C35530,
        app::IProfilingSetting*,
        get_Item,
        app::Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_* this_ptr,
        app::ProfilingSettings_SettingType__Enum key
    )
    IL2CPP_REGISTER_METHOD(
        0x0283AC20,
        void,
        ctor,
        app::Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_* this_ptr
    )
} // namespace
  // app::classes::System::Collections::Generic::Dictionary_2_Moon_Telemetry_Performance_ProfilingSettings_SettingType_Moon_Telemetry_Performance_Settings_IProfilingSetting_
