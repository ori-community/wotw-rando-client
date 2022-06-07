#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_UInt16_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3D360, void, ctor, (app::ClassPropertyWriter_2_System_UInt16_System_Int32_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B36AE0, void, Write, (app::ClassPropertyWriter_2_System_UInt16_System_Int32_ * this_ptr, app::TraceLoggingDataCollector * collector, uint16_t * container))
    IL2CPP_REGISTER_METHOD(0x02B35DE0, app::Object *, GetData, (app::ClassPropertyWriter_2_System_UInt16_System_Int32_ * this_ptr, uint16_t container))
}
