#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NonGenericProperytWriter_1_System_Int32_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_Int32_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA1310, void, Write, (app::NonGenericProperytWriter_1_System_Int32_ * this_ptr, app::TraceLoggingDataCollector* collector, int32_t* container))
    IL2CPP_REGISTER_METHOD(0x02BA13E0, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_Int32_ * this_ptr, int32_t container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Int32_
