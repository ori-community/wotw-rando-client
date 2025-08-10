#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumByteTypeInfo_1_System_Collections_Generic_KeyValuePair_2_.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::EnumByteTypeInfo_1_System_Collections_Generic_KeyValuePair_2_ {
    IL2CPP_REGISTER_METHOD(
        0x02B3F270,
        void,
        WriteMetadata,
        app::EnumByteTypeInfo_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(
        0x02B3F340,
        void,
        WriteData,
        app::EnumByteTypeInfo_1_System_Collections_Generic_KeyValuePair_2_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::KeyValuePair_2_System_Object_System_Object_* value
    )
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, app::EnumByteTypeInfo_1_System_Collections_Generic_KeyValuePair_2_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, app::EnumByteTypeInfo_1_System_Collections_Generic_KeyValuePair_2_* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::EnumByteTypeInfo_1_System_Collections_Generic_KeyValuePair_2_
