#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::IntPtrArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FF1F0, void, WriteMetadata, (app::IntPtrArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FF2D0, void, WriteData, (app::IntPtrArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::IntPtr__Array * * value))
    IL2CPP_REGISTER_METHOD(0x019FF3F0, void, ctor, (app::IntPtrArrayTypeInfo * this_ptr))
}
