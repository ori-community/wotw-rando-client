#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_DateTime_ {
    IL2CPP_REGISTER_METHOD(0x02872DB0, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_DateTime_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A988, TraceLoggingTypeInfo_1_System_DateTime___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02872E80, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_DateTime_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_DateTime_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02872FA0, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_DateTime_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02873050, app::TraceLoggingTypeInfo_1_System_DateTime_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02873240, app::TraceLoggingTypeInfo_1_System_DateTime_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_DateTime_
