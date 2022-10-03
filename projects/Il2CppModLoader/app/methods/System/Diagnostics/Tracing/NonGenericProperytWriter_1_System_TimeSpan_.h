#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_TimeSpan_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_TimeSpan_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA1050, void, Write, (app::NonGenericProperytWriter_1_System_TimeSpan_ * this_ptr, app::TraceLoggingDataCollector* collector, app::TimeSpan* container))
    IL2CPP_REGISTER_METHOD(0x02BA1120, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_TimeSpan_ * this_ptr, app::TimeSpan container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_TimeSpan_
