#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NonGenericProperytWriter_1_System_DateTime_.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_DateTime_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA1050, void, Write, (app::NonGenericProperytWriter_1_System_DateTime_ * this_ptr, app::TraceLoggingDataCollector* collector, app::DateTime* container))
    IL2CPP_REGISTER_METHOD(0x02BA1120, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_DateTime_ * this_ptr, app::DateTime container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_DateTime_
