#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::SingleTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A07960, void, WriteMetadata, (app::SingleTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A07A30, void, WriteData, (app::SingleTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, float* value))
    IL2CPP_REGISTER_METHOD(0x01A07B10, void, ctor, (app::SingleTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::SingleTypeInfo
