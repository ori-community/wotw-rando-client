#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DoubleTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::DoubleTypeInfo {
    IL2CPP_REGISTER_METHOD(0x017496F0, void, WriteMetadata, (app::DoubleTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x017497C0, void, WriteData, (app::DoubleTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, double* value))
    IL2CPP_REGISTER_METHOD(0x017497F0, void, ctor, (app::DoubleTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::DoubleTypeInfo
