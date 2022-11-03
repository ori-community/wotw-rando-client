#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::DateTimeOffsetTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01748C70, void, WriteMetadata, (app::DateTimeOffsetTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01748D70, void, WriteData, (app::DateTimeOffsetTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::DateTimeOffset* value))
    IL2CPP_REGISTER_METHOD(0x01748E10, void, ctor, (app::DateTimeOffsetTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::DateTimeOffsetTypeInfo
