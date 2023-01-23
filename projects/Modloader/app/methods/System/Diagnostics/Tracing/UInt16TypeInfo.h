#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UInt16TypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::UInt16TypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A0E8E0, void, WriteMetadata, (app::UInt16TypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A0E9B0, void, WriteData, (app::UInt16TypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, uint16_t* value))
    IL2CPP_REGISTER_METHOD(0x01A0E9E0, void, ctor, (app::UInt16TypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::UInt16TypeInfo
