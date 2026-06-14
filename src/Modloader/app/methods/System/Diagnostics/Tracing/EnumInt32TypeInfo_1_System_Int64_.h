#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EnumInt32TypeInfo_1_System_Int64_.h>
#include <Modloader/app/structs/EventFieldFormat__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingMetadataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::EnumInt32TypeInfo_1_System_Int64_ {
    IL2CPP_REGISTER_METHOD(
        0x02F4C6E0,
        void,
        WriteMetadata,
        app::EnumInt32TypeInfo_1_System_Int64_* this_ptr,
        app::TraceLoggingMetadataCollector* collector,
        app::String* name,
        app::EventFieldFormat__Enum format
    )
    IL2CPP_REGISTER_METHOD(
        0x02F4C7B0,
        void,
        WriteData,
        app::EnumInt32TypeInfo_1_System_Int64_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        int64_t* value
    )
    IL2CPP_REGISTER_METHOD(0x00502220, app::Object*, GetData, app::EnumInt32TypeInfo_1_System_Int64_* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x0298B8E0, void, ctor, app::EnumInt32TypeInfo_1_System_Int64_* this_ptr)
} // namespace app::classes::System::Diagnostics::Tracing::EnumInt32TypeInfo_1_System_Int64_
