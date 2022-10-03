#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_UInt64_ {
    IL2CPP_REGISTER_METHOD(0x02878820, void, ctor_1, (app::TraceLoggingTypeInfo_1_System_UInt64_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761950, TraceLoggingTypeInfo_1_System_UInt64___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x028788F0, void, ctor_2, (app::TraceLoggingTypeInfo_1_System_UInt64_ * this_ptr, app::String* name, app::EventLevel__Enum level, app::EventOpcode__Enum opcode, app::EventKeywords__Enum keywords, app::EventTags__Enum tags))
    IL2CPP_REGISTER_METHOD(0x02871710, app::TraceLoggingTypeInfo_1_System_UInt64_*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x02872FA0, void, WriteObjectData, (app::TraceLoggingTypeInfo_1_System_UInt64_ * this_ptr, app::TraceLoggingDataCollector* collector, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02878A10, app::TraceLoggingTypeInfo_1_System_UInt64_*, GetInstance, (app::List_1_System_Type_ * recursion_check))
    IL2CPP_REGISTER_METHOD(0x02878C00, app::TraceLoggingTypeInfo_1_System_UInt64_*, InitInstance, ())
} // namespace app::classes::System::Diagnostics::Tracing::TraceLoggingTypeInfo_1_System_UInt64_
