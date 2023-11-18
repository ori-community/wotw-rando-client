#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumInt64TypeInfo_1_System_UInt32_.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::EnumInt64TypeInfo_1_System_UInt32_ {
    IL2CPP_REGISTER_METHOD(0x02B8EB00, void, WriteMetadata, (app::EnumInt64TypeInfo_1_System_UInt32_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B8EBD0, void, WriteData, (app::EnumInt64TypeInfo_1_System_UInt32_ * this_ptr, app::TraceLoggingDataCollector* collector, uint32_t* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumInt64TypeInfo_1_System_UInt32_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumInt64TypeInfo_1_System_UInt32_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumInt64TypeInfo_1_System_UInt32_
