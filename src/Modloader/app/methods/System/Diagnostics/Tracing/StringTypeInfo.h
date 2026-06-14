#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringTypeInfo.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::StringTypeInfo {
    IL2CPP_REGISTER_METHOD(
        0x01A08E70,
        void,
        WriteMetadata,
        app::StringTypeInfo* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(0x01A08F40, void, WriteData, app::StringTypeInfo* this_ptr, app::TraceLoggingDataCollector* collector, app::String** value)
    IL2CPP_REGISTER_METHOD(0x01A09060, app::Object*, GetData, app::StringTypeInfo* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01A090E0, void, ctor, app::StringTypeInfo* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::StringTypeInfo
