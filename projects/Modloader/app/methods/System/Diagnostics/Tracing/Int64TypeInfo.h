#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Int64TypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::Int64TypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FEFC0, void, WriteMetadata, (app::Int64TypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FF090, void, WriteData, (app::Int64TypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, int64_t* value))
    IL2CPP_REGISTER_METHOD(0x019FF0C0, void, ctor, (app::Int64TypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::Int64TypeInfo
