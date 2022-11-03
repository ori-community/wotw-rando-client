#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Byte_ {
    IL2CPP_REGISTER_METHOD(0x02871BF0, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Byte_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047943E8, TraceLoggingTypeInfo_1_System_Byte___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02871CC0, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Byte_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Byte_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x028717C0, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Byte_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02871DE0, app::TraceLoggingTypeInfo_1_System_Byte_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02871FD0, app::TraceLoggingTypeInfo_1_System_Byte_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Byte_
