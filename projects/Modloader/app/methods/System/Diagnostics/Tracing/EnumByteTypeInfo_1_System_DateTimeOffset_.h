#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnumByteTypeInfo_1_System_DateTimeOffset_.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumByteTypeInfo_1_System_DateTimeOffset_ {
    IL2CPP_REGISTER_METHOD(0x02B3F5E0, void, WriteMetadata, (app::EnumByteTypeInfo_1_System_DateTimeOffset_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B3F6B0, void, WriteData, (app::EnumByteTypeInfo_1_System_DateTimeOffset_ * this_ptr, app::TraceLoggingDataCollector* collector, app::DateTimeOffset* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumByteTypeInfo_1_System_DateTimeOffset_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumByteTypeInfo_1_System_DateTimeOffset_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumByteTypeInfo_1_System_DateTimeOffset_
