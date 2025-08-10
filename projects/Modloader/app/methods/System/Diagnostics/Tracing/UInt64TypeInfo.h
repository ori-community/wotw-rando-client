#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/UInt64TypeInfo.h>

namespace app::classes::System::Diagnostics::Tracing::UInt64TypeInfo {
    IL2CPP_REGISTER_METHOD(
        0x01A0F220,
        void,
        WriteMetadata,
        app::UInt64TypeInfo* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x01A0F2F0, void, WriteData, app::UInt64TypeInfo* this_ptr, app::TraceLoggingDataCollector* collector, uint64_t* value)
    IL2CPP_REGISTER_METHOD(0x01A0F320, void, ctor, app::UInt64TypeInfo* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::UInt64TypeInfo
