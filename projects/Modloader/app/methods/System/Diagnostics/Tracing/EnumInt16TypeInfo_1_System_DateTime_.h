#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumInt16TypeInfo_1_System_DateTime_.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::EnumInt16TypeInfo_1_System_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x02F493B0, void, WriteMetadata, (app::EnumInt16TypeInfo_1_System_DateTime_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02F49480, void, WriteData, (app::EnumInt16TypeInfo_1_System_DateTime_ * this_ptr, app::TraceLoggingDataCollector* collector, app::DateTime* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumInt16TypeInfo_1_System_DateTime_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumInt16TypeInfo_1_System_DateTime_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumInt16TypeInfo_1_System_DateTime_
