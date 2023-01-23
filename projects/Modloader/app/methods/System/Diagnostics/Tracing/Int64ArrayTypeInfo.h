#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Int64ArrayTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Int64__Array.h>

namespace app::classes::System::Diagnostics::Tracing::Int64ArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FED50, void, WriteMetadata, (app::Int64ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FEE20, void, WriteData, (app::Int64ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::Int64__Array** value))
    IL2CPP_REGISTER_METHOD(0x019FEF40, void, ctor, (app::Int64ArrayTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::Int64ArrayTypeInfo
