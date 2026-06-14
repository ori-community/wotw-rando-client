#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/SByteArrayTypeInfo.h>
#include <Modloader/app/structs/SByte__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::SByteArrayTypeInfo {
    IL2CPP_REGISTER_METHOD(
        0x01A07230,
        void,
        WriteMetadata,
        app::SByteArrayTypeInfo* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x01A07300, void, WriteData, app::SByteArrayTypeInfo* this_ptr, app::TraceLoggingDataCollector* collector, app::SByte__Array** value)
    IL2CPP_REGISTER_METHOD(0x01A07420, void, ctor, app::SByteArrayTypeInfo* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::SByteArrayTypeInfo
