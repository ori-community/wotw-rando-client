#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Guid_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B39D40, void, ctor, (app::ClassPropertyWriter_2_System_Guid_System_Object_ * this_ptr, app::PropertyAnalysis* property))
    IL2CPP_REGISTER_METHOD(0x02B37490, void, Write, (app::ClassPropertyWriter_2_System_Guid_System_Object_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Guid* container))
    IL2CPP_REGISTER_METHOD(0x02B37790, app::Object*, GetData, (app::ClassPropertyWriter_2_System_Guid_System_Object_ * this_ptr, app::Guid container))
} // namespace app::classes::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Guid_System_Object_
