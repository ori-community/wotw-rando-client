#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BooleanTypeInfo.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::BooleanTypeInfo {
    IL2CPP_REGISTER_METHOD(0x017473D0, void, WriteMetadata, (app::BooleanTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x017474A0, void, WriteData, (app::BooleanTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, bool* value))
    IL2CPP_REGISTER_METHOD(0x01747580, void, ctor, (app::BooleanTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::BooleanTypeInfo
