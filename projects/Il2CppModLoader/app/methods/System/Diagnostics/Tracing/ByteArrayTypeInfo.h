#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ByteArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x017476B0, void, WriteMetadata, (app::ByteArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01747850, void, WriteData, (app::ByteArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Byte__Array * * value))
    IL2CPP_REGISTER_METHOD(0x01747970, void, ctor, (app::ByteArrayTypeInfo * this_ptr))
}
