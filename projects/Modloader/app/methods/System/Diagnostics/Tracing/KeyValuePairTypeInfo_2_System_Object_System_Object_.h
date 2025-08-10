#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/KeyValuePairTypeInfo_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/KeyValuePair_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::KeyValuePairTypeInfo_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02BA07B0,
        void,
        WriteMetadata,
        app::KeyValuePairTypeInfo_2_System_Object_System_Object_* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(
        0x02BA08D0,
        void,
        WriteData,
        app::KeyValuePairTypeInfo_2_System_Object_System_Object_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::KeyValuePair_2_System_Object_System_Object_* value
    )
    IL2CPP_REGISTER_METHOD(0x02BA0950, app::Object*, GetData, app::KeyValuePairTypeInfo_2_System_Object_System_Object_* this_ptr, app::Object* value)
} // namespace app::classes::System::Diagnostics::Tracing::KeyValuePairTypeInfo_2_System_Object_System_Object_
