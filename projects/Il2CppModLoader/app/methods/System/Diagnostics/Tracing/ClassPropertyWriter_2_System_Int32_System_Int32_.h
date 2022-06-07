#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Int32_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3A500, void, ctor, (app::ClassPropertyWriter_2_System_Int32_System_Int32_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B3A6F0, void, Write, (app::ClassPropertyWriter_2_System_Int32_System_Int32_ * this_ptr, app::TraceLoggingDataCollector * collector, int32_t * container))
    IL2CPP_REGISTER_METHOD(0x02B35DE0, app::Object *, GetData, (app::ClassPropertyWriter_2_System_Int32_System_Int32_ * this_ptr, int32_t container))
}
