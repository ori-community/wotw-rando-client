#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_UInt64_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02BA1050, void, Write, (app::NonGenericProperytWriter_1_System_UInt64_ * this_ptr, app::TraceLoggingDataCollector * collector, uint64_t * container))
    IL2CPP_REGISTER_METHOD(0x02BA1120, app::Object *, GetData, (app::NonGenericProperytWriter_1_System_UInt64_ * this_ptr, uint64_t container))
}
