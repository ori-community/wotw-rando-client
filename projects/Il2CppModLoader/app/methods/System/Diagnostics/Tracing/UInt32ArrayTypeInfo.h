#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::UInt32ArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A0EB10, void, WriteMetadata, (app::UInt32ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A0EBE0, void, WriteData, (app::UInt32ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::UInt32__Array** value))
    IL2CPP_REGISTER_METHOD(0x01A0ED00, void, ctor, (app::UInt32ArrayTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::UInt32ArrayTypeInfo
