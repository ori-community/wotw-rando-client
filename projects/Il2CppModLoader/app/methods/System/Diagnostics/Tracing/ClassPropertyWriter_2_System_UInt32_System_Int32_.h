#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_UInt32_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3D930, void, ctor, (app::ClassPropertyWriter_2_System_UInt32_System_Int32_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B3A6F0, void, Write, (app::ClassPropertyWriter_2_System_UInt32_System_Int32_ * this_ptr, app::TraceLoggingDataCollector * collector, uint32_t * container))
    IL2CPP_REGISTER_METHOD(0x02B35DE0, app::Object *, GetData, (app::ClassPropertyWriter_2_System_UInt32_System_Int32_ * this_ptr, uint32_t container))
}
