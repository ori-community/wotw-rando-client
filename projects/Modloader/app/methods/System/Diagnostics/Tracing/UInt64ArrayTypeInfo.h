#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UInt64ArrayTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/UInt64__Array.h>

namespace app::classes::System::Diagnostics::Tracing::UInt64ArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(0x01A0EFB0, void, WriteMetadata, (app::UInt64ArrayTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x01A0F080, void, WriteData, (app::UInt64ArrayTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, app::UInt64__Array** value))
    IL2CPP_REGISTER_METHOD(0x01A0F1A0, void, ctor, (app::UInt64ArrayTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::UInt64ArrayTypeInfo
