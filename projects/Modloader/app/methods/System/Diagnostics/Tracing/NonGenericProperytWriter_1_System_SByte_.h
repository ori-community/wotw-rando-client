#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NonGenericProperytWriter_1_System_SByte_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_SByte_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_SByte_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA0C30, void, Write, (app::NonGenericProperytWriter_1_System_SByte_ * this_ptr, app::TraceLoggingDataCollector* collector, int8_t* container))
    IL2CPP_REGISTER_METHOD(0x02BA0D00, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_SByte_ * this_ptr, int8_t container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_SByte_
