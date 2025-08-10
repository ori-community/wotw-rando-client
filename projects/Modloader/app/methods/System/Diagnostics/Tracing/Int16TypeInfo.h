#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Int16TypeInfo.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::Int16TypeInfo {
    IL2CPP_REGISTER_METHOD(
        0x019FE680,
        void,
        WriteMetadata,
        app::Int16TypeInfo* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x019FE750, void, WriteData, app::Int16TypeInfo* this_ptr, app::TraceLoggingDataCollector* collector, int16_t* value)
    IL2CPP_REGISTER_METHOD(0x019FE780, void, ctor, app::Int16TypeInfo* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::Int16TypeInfo
