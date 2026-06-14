#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/InvokeTypeInfo_1_System_Guid_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/TypeAnalysis.h>

namespace app::classes::System::Diagnostics::Tracing::InvokeTypeInfo_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x02B98CC0, void, ctor, app::InvokeTypeInfo_1_System_Guid_* this_ptr, app::TypeAnalysis* type_analysis)
    IL2CPP_REGISTER_METHOD(
        0x02B98E80,
        void,
        WriteMetadata,
        app::InvokeTypeInfo_1_System_Guid_* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(
        0x02B98F50,
        void,
        WriteData,
        app::InvokeTypeInfo_1_System_Guid_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::Guid* value
    )
    IL2CPP_REGISTER_METHOD(0x02B9C240, app::Object*, GetData, app::InvokeTypeInfo_1_System_Guid_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(
        0x02B9A610,
        void,
        WriteObjectData,
        app::InvokeTypeInfo_1_System_Guid_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::Object* value_obj
    )
} // namespace app::classes::System::Diagnostics::Tracing::InvokeTypeInfo_1_System_Guid_
