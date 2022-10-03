#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::DateTimeTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01748F40, void, WriteMetadata, (app::DateTimeTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01749010, void, WriteData, (app::DateTimeTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::DateTime* value))
    IL2CPP_REGISTER_METHOD(0x01749070, void, ctor, (app::DateTimeTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::DateTimeTypeInfo
