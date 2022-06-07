#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::GuidTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FE130, void, WriteMetadata, (app::GuidTypeInfo * this_ptr, app::TraceLoggingMetadataCollector * collector, app::String * name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FE200, void, WriteData, (app::GuidTypeInfo * this_ptr, app::TraceLoggingDataCollector * collector, app::Guid * value))
    IL2CPP_REGISTER_METHOD(0x019FE2E0, void, ctor, (app::GuidTypeInfo * this_ptr))
}
