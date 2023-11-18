#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NonGenericProperytWriter_1_System_Single_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_Single_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA1550, void, Write, (app::NonGenericProperytWriter_1_System_Single_ * this_ptr, app::TraceLoggingDataCollector* collector, float* container))
    IL2CPP_REGISTER_METHOD(0x02BA1620, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_Single_ * this_ptr, float container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Single_
