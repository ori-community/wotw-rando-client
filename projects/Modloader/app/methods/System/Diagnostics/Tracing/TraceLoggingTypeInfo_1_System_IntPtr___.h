#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TraceLoggingTypeInfo_1_System_IntPtr__1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TraceLoggingDataCollector.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_IntPtr___ {
    IL2CPP_REGISTER_METHOD(0x02876620, void, ctor, (app::TraceLoggingTypeInfo_1_System_IntPtr__1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02876810, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_IntPtr__1 * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_IntPtr___
