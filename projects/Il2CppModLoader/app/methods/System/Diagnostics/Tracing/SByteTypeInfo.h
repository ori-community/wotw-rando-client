#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::SByteTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A074A0, void, WriteMetadata, (app::SByteTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A07570, void, WriteData, (app::SByteTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, int8_t* value))
    IL2CPP_REGISTER_METHOD(0x01A075A0, void, ctor, (app::SByteTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::SByteTypeInfo
