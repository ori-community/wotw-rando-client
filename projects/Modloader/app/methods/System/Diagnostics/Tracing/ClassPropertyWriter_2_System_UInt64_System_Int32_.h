#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_UInt64_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3DF00, void, ctor, (app::ClassPropertyWriter_2_System_UInt64_System_Int32_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02B3ADC0, void, Write, (app::ClassPropertyWriter_2_System_UInt64_System_Int32_ * this_ptr, app::TraceLoggingDataCollector* collector, uint64_t* container))
    IL2CPP_REGISTER_METHOD(0x02B37A40, app::Object*, GetData, (app::ClassPropertyWriter_2_System_UInt64_System_Int32_ * this_ptr, uint64_t container))
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_UInt64_System_Int32_
