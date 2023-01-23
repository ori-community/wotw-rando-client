#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ClassPropertyWriter_2_System_IntPtr_System_Int32_.h>
#include <Modloader/app/structs/PropertyAnalysis.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>
#include <Modloader/app/structs/void.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_IntPtr_System_Int32_ {
    IL2CPP_REGISTER_METHOD(0x02B3B2A0, void, ctor, (app::ClassPropertyWriter_2_System_IntPtr_System_Int32_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02B3ADC0, void, Write, (app::ClassPropertyWriter_2_System_IntPtr_System_Int32_ * this_ptr, app::TraceLoggingDataCollector* collector, app::void** container))
    IL2CPP_REGISTER_METHOD(0x02B37A40, app::Object*, GetData, (app::ClassPropertyWriter_2_System_IntPtr_System_Int32_ * this_ptr, void* container))
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_IntPtr_System_Int32_
