#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DataBundleEntry.h>
#include <Modloader/app/structs/Dictionary_2_System_String_Moon_Telemetry_Performance_DataBundleEntry_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_Telemetry_Performance_DataBundleEntry_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_Moon_Telemetry_Performance_DataBundleEntry_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_String_Moon_Telemetry_Performance_DataBundleEntry_* this_ptr,
        app::String* key,
        app::DataBundleEntry* value
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_Moon_Telemetry_Performance_DataBundleEntry_
