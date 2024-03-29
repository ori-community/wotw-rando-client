#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ClassPropertyWriter_2_System_DateTimeOffset_System_Int64_.h>
#include <Modloader/app/structs/DateTimeOffset.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_DateTimeOffset_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02B38100, void, ctor, (app::ClassPropertyWriter_2_System_DateTimeOffset_System_Int64_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02B37490, void, Write, (app::ClassPropertyWriter_2_System_DateTimeOffset_System_Int64_ * this_ptr, app::TraceLoggingDataCollector* collector, app::DateTimeOffset* container))
    IL2CPP_REGISTER_METHOD(0x02B37520, app::Object*, GetData, (app::ClassPropertyWriter_2_System_DateTimeOffset_System_Int64_ * this_ptr, app::DateTimeOffset container))
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_DateTimeOffset_System_Int64_
