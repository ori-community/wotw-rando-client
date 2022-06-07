#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::NonGenericProperytWriter_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02BA0BD0, void, ctor, (app::NonGenericProperytWriter_1_System_Byte_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02BA0C30, void, Write, (app::NonGenericProperytWriter_1_System_Byte_ * this_ptr, app::TraceLoggingDataCollector * collector, uint8_t * container))
    IL2CPP_REGISTER_METHOD(0x02BA0D00, app::Object *, GetData, (app::NonGenericProperytWriter_1_System_Byte_ * this_ptr, uint8_t container))
}
