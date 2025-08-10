#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassPropertyWriter_2_System_DateTimeOffset_System_Int32_.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_DateTimeOffset_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B37F10, void, ctor, app::ClassPropertyWriter_2_System_DateTimeOffset_System_Int32_* this_ptr, app::PropertyAnalysis* property)
    IL2CPP_REGISTER_METHOD(
        0x02B371B0,
        void,
        Write,
        app::ClassPropertyWriter_2_System_DateTimeOffset_System_Int32_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::DateTimeOffset* container
    )
    IL2CPP_REGISTER_METHOD(
        0x02B37230,
        app::Object*,
        GetData,
        app::ClassPropertyWriter_2_System_DateTimeOffset_System_Int32_* this_ptr,
        app::DateTimeOffset container
    )
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_DateTimeOffset_System_Int32_
