#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassPropertyWriter_2_System_TimeSpan_System_Int32_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_TimeSpan_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3CD90, void, ctor, app::ClassPropertyWriter_2_System_TimeSpan_System_Int32_* this_ptr, app::PropertyAnalysis* property)
    IL2CPP_REGISTER_METHOD(
        0x02B379C0,
        void,
        Write,
        app::ClassPropertyWriter_2_System_TimeSpan_System_Int32_* this_ptr,
        app::TraceLoggingDataCollector* collector,
        app::TimeSpan* container
    )
    IL2CPP_REGISTER_METHOD(0x02B37A40, app::Object*, GetData, app::ClassPropertyWriter_2_System_TimeSpan_System_Int32_* this_ptr, app::TimeSpan container)
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_TimeSpan_System_Int32_
