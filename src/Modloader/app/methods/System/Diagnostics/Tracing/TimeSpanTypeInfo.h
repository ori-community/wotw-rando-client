#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TimeSpanTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::TimeSpanTypeInfo {
    IL2CPP_REGISTER_METHOD(
        0x01A09160,
        void,
        WriteMetadata,
        app::TimeSpanTypeInfo* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x019FF090, void, WriteData, app::TimeSpanTypeInfo* this_ptr, app::TraceLoggingDataCollector* collector, app::TimeSpan* value)
    IL2CPP_REGISTER_METHOD(0x01A09230, void, ctor, app::TimeSpanTypeInfo* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::TimeSpanTypeInfo
