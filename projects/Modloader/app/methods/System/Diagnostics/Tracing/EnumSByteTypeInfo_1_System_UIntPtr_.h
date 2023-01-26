#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumSByteTypeInfo_1_System_UIntPtr_.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::System::Diagnostics::Tracing::EnumSByteTypeInfo_1_System_UIntPtr_ {
    IL2CPP_REGISTER_METHOD(0x02B913E0, void, WriteMetadata, (app::EnumSByteTypeInfo_1_System_UIntPtr_ * this_ptr, app::TraceLoggingMetadataCollector* collector, app::String* name, app::EventFieldFormat__Enum format))
    IL2CPP_REGISTER_METHOD(0x02B914B0, void, WriteData, (app::EnumSByteTypeInfo_1_System_UIntPtr_ * this_ptr, app::TraceLoggingDataCollector* collector, void** value))
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, (app::EnumSByteTypeInfo_1_System_UIntPtr_ * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, (app::EnumSByteTypeInfo_1_System_UIntPtr_ * this_ptr))
} // namespace app::classes::System::Diagnostics::Tracing::EnumSByteTypeInfo_1_System_UIntPtr_
