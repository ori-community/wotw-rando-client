#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::Int32TypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FEB20, void, WriteMetadata, (app::Int32TypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FEBF0, void, WriteData, (app::Int32TypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, int32_t* value))
    IL2CPP_REGISTER_METHOD(0x019FEC20, void, ctor, (app::Int32TypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::Int32TypeInfo
