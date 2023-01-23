#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Int32ArrayTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Int32__Array.h>

namespace app::classes::System::Diagnostics::Tracing::Int32ArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FE8B0, void, WriteMetadata, (app::Int32ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FE980, void, WriteData, (app::Int32ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::Int32__Array** value))
    IL2CPP_REGISTER_METHOD(0x019FEAA0, void, ctor, (app::Int32ArrayTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::Int32ArrayTypeInfo
