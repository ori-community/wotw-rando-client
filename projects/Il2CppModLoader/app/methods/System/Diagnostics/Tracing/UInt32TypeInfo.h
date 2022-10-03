#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::UInt32TypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A0ED80, void, WriteMetadata, (app::UInt32TypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A0EE50, void, WriteData, (app::UInt32TypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, uint32_t* value))
    IL2CPP_REGISTER_METHOD(0x01A0EE80, void, ctor, (app::UInt32TypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::UInt32TypeInfo
