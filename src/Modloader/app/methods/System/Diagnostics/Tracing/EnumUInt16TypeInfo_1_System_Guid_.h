#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumUInt16TypeInfo_1_System_Guid_.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Guid.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::EnumUInt16TypeInfo_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(
        0x02B92500,
        void,
        WriteMetadata,
        app::EnumUInt16TypeInfo_1_System_Guid_* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(
        0x02B925D0,
        void,
        WriteData,
        app::EnumUInt16TypeInfo_1_System_Guid_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::Guid* value
    )
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, app::EnumUInt16TypeInfo_1_System_Guid_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, app::EnumUInt16TypeInfo_1_System_Guid_* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::EnumUInt16TypeInfo_1_System_Guid_
