#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ClassPropertyWriter_2_System_DateTime_System_Int64_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_DateTime_System_Int64_ {
    IL2CPP_REGISTER_METHOD(0x02B37AB0, void, ctor, (app::ClassPropertyWriter_2_System_DateTime_System_Int64_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02B37CA0, void, Write, (app::ClassPropertyWriter_2_System_DateTime_System_Int64_ * this_ptr, app::TraceLoggingDataCollector* collector, app::DateTime* container))
    IL2CPP_REGISTER_METHOD(0x02B360C0, app::Object*, GetData, (app::ClassPropertyWriter_2_System_DateTime_System_Int64_ * this_ptr, app::DateTime container))
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_DateTime_System_Int64_
