#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumerableTypeInfo_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::EnumerableTypeInfo_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(
        0x02B985F0,
        void,
        WriteMetadata,
        app::EnumerableTypeInfo_2_System_Object_System_Object_* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(
        0x02B98680,
        void,
        WriteData,
        app::EnumerableTypeInfo_2_System_Object_System_Object_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::Object** value
    )
    IL2CPP_REGISTER_METHOD(0x02B98920, app::Object*, GetData, app::EnumerableTypeInfo_2_System_Object_System_Object_* this_ptr, app::Object* value)
} // namespace app::classes::System::Diagnostics::Tracing::EnumerableTypeInfo_2_System_Object_System_Object_
