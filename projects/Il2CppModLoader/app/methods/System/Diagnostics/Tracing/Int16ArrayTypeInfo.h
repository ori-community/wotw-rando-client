#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::Int16ArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FE410, void, WriteMetadata, (app::Int16ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FE4E0, void, WriteData, (app::Int16ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Int16__Array * * value))
    IL2CPP_REGISTER_METHOD(0x019FE600, void, ctor, (app::Int16ArrayTypeInfo * this_ptr))
}
