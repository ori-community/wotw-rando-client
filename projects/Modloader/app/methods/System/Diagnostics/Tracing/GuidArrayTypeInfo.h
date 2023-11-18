#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GuidArrayTypeInfo.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Guid__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::GuidArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FDEC0, void, WriteMetadata, (app::GuidArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FDF90, void, WriteData, (app::GuidArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::Guid__Array** value))
    IL2CPP_REGISTER_METHOD(0x019FE0B0, void, ctor, (app::GuidArrayTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::GuidArrayTypeInfo
