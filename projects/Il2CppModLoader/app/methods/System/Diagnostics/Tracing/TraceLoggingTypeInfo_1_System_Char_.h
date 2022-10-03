#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Char_ {
    IL2CPP_REGISTER_METHOD(0x02872160, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_Char_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047189D8, TraceLoggingTypeInfo_1_System_Char___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02872230, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_Char_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_Char_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02872350, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_Char_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02872400, app::TraceLoggingTypeInfo_1_System_Char_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x028725F0, app::TraceLoggingTypeInfo_1_System_Char_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_Char_
