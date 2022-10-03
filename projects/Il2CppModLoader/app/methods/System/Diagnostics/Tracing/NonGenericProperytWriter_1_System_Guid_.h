#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Guid_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_Guid_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02BA0EF0, void, Write, (app::NonGenericProperytWriter_1_System_Guid_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Guid* container))
    IL2CPP_REGISTER_METHOD(0x02BA0FC0, app::Object*, GetData, (app::NonGenericProperytWriter_1_System_Guid_ * this_ptr, app::Guid container))
} // namespace app::classes::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Guid_
