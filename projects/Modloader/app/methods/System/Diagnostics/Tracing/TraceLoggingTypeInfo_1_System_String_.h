#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_String_.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_String_ {
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_String_*, get_Instance, )
    IL2CPP_REGISTER_METHOD(0x02876620, void, ctor, app::TraceLoggingTypeInfo_1_System_String_* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x02876810,
        void,
        WriteObjectData,
        app::TraceLoggingTypeInfo_1_System_String_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::Object* value
    )
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_String_
