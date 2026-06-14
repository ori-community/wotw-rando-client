#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint_.h>
#include <Modloader/app/structs/List_1_Moon_Telemetry_DataPoint_.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint__ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, app::Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02BAC170,
        void,
        Add,
        app::Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint_* this_ptr,
        app::String* key,
        app::List_1_Moon_Telemetry_DataPoint_* value
    )
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, app::Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint_* this_ptr, app::String* key)
    IL2CPP_REGISTER_METHOD(
        0x02BD24D0,
        app::List_1_Moon_Telemetry_DataPoint_*,
        get_Item,
        app::Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint_* this_ptr,
        app::String* key
    )
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_List_1_Moon_Telemetry_DataPoint__
