#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::CharTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01747E90, void, WriteMetadata, (app::CharTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01747F60, void, WriteData, (app::CharTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, uint16_t* value))
    IL2CPP_REGISTER_METHOD(0x01748040, void, ctor, (app::CharTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::CharTypeInfo
