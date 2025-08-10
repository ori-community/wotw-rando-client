#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum.h>
#include <Modloader/app/structs/ProfilingSettings_SettingType__Enum__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, app::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1C970,
        void,
        Add,
        app::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* this_ptr,
        app::ProfilingSettings_SettingType__Enum item
    )
    IL2CPP_REGISTER_METHOD(
        0x02F1CC20,
        bool,
        Contains,
        app::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* this_ptr,
        app::ProfilingSettings_SettingType__Enum item
    )
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x025EAEF0,
        app::ProfilingSettings_SettingType__Enum__Array*,
        ToArray,
        app::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* this_ptr
    )
    IL2CPP_REGISTER_METHOD(
        0x02D1F360,
        app::ProfilingSettings_SettingType__Enum,
        get_Item,
        app::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* this_ptr,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Telemetry_Performance_ProfilingSettings_SettingType_
