#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::Int32ArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FE8B0, void, WriteMetadata, (app::Int32ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FE980, void, WriteData, (app::Int32ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Int32__Array * * value))
    IL2CPP_REGISTER_METHOD(0x019FEAA0, void, ctor, (app::Int32ArrayTypeInfo * this_ptr))
}
