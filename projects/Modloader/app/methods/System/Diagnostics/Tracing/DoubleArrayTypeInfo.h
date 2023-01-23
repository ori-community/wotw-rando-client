#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DoubleArrayTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Double__Array.h>

namespace app::classes::System::Diagnostics::Tracing::DoubleArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01749480, void, WriteMetadata, (app::DoubleArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01749550, void, WriteData, (app::DoubleArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::Double__Array** value))
    IL2CPP_REGISTER_METHOD(0x01749670, void, ctor, (app::DoubleArrayTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::DoubleArrayTypeInfo
