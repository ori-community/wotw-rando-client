#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnumUInt16TypeInfo_1_System_UInt16_.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumUInt16TypeInfo_1_System_UInt16_ {
    IL2CPP_REGISTER_METHOD(0x02B93450, void, WriteMetadata, (app::EnumUInt16TypeInfo_1_System_UInt16_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B93520, void, WriteData, (app::EnumUInt16TypeInfo_1_System_UInt16_ * this_ptr, app::TraceLoggingDataCollector* collector, uint16_t* value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumUInt16TypeInfo_1_System_UInt16_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt16TypeInfo_1_System_UInt16_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumUInt16TypeInfo_1_System_UInt16_
