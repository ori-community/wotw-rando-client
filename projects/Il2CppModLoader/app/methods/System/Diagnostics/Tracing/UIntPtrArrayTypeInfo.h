#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::UIntPtrArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A0F450, void, WriteMetadata, (app::UIntPtrArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A0F530, void, WriteData, (app::UIntPtrArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::UIntPtr__Array * * value))
    IL2CPP_REGISTER_METHOD(0x01A0F670, void, ctor, (app::UIntPtrArrayTypeInfo * this_ptr))
}
