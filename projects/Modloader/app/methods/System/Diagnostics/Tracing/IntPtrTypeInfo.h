#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IntPtrTypeInfo.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::System::Diagnostics::Tracing::IntPtrTypeInfo {
    IL2CPP_REGISTER_METHOD(0x019FF470, void, WriteMetadata, (app::IntPtrTypeInfo * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x019FF550, void, WriteData, (app::IntPtrTypeInfo * this_ptr, app::TraceLoggingDataCollector* collector, void** value))
    IL2CPP_REGISTER_METHOD(0x019FF620, void, ctor, (app::IntPtrTypeInfo * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::IntPtrTypeInfo
