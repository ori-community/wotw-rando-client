#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/EnumUInt64TypeInfo_1_System_UIntPtr_.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/void.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::EnumUInt64TypeInfo_1_System_UIntPtr_ {
    IL2CPP_REGISTER_METHOD(0x02B98440, void, WriteMetadata, (app::EnumUInt64TypeInfo_1_System_UIntPtr_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B98510, void, WriteData, (app::EnumUInt64TypeInfo_1_System_UIntPtr_ * this_ptr, app::TraceLoggingDataCollector* collector, app::void** value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumUInt64TypeInfo_1_System_UIntPtr_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumUInt64TypeInfo_1_System_UIntPtr_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumUInt64TypeInfo_1_System_UIntPtr_
