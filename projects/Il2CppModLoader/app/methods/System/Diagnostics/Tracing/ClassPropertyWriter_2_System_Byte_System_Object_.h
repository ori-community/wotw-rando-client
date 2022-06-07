#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::ClassPropertyWriter_2_System_Byte_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x02B36700, void, ctor, (app::ClassPropertyWriter_2_System_Byte_System_Object_ * this_ptr, app::PropertyAnalysis * property))
    IL2CPP_REGISTER_METHOD(0x02B36040, void, Write, (app::ClassPropertyWriter_2_System_Byte_System_Object_ * this_ptr, app::TraceLoggingDataCollector * collector, uint8_t * container))
    IL2CPP_REGISTER_METHOD(0x02AD0670, app::Object *, GetData, (app::ClassPropertyWriter_2_System_Byte_System_Object_ * this_ptr, uint8_t container))
}
