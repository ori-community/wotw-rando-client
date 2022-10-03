#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::SingleArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A076F0, void, WriteMetadata, (app::SingleArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A077C0, void, WriteData, (app::SingleArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::Single__Array** value))
    IL2CPP_REGISTER_METHOD(0x01A078E0, void, ctor, (app::SingleArrayTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::SingleArrayTypeInfo
