#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_.h>
#include <Modloader/app/structs/ProfilingSettings_Setting.h>
#include <Modloader/app/structs/ProfilingSettings_Setting__Array.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02F1E150,
        void,
        Add,
        app::List_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_* this_ptr,
        app::ProfilingSettings_Setting* item
    )
    IL2CPP_REGISTER_METHOD(
        0x025EAEF0,
        app::ProfilingSettings_Setting__Array*,
        ToArray,
        app::List_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_* this_ptr
    )
} // namespace app::classes::System::Collections::Generic::List_1_Moon_Telemetry_Performance_ProfilingSettings_Setting_
